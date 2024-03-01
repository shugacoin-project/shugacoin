#!/bin/bash

TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
SRCDIR=${SRCDIR:-$TOPDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

SHUGACOIND=${SHUGACOIND:-$SRCDIR/shugacoind}
SHUGACOINCLI=${SHUGACOINCLI:-$SRCDIR/shugacoin-cli}
SHUGACOINTX=${SHUGACOINTX:-$SRCDIR/shugacoin-tx}
SHUGACOINQT=${SHUGACOINQT:-$SRCDIR/qt/shugacoin-qt}

[ ! -x $SHUGACOIND ] && echo "$SHUGACOIND not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
SHUGAVER=($($SHUGACOINCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for bitcoind if --version-string is not set,
# but has different outcomes for bitcoin-qt and bitcoin-cli.
echo "[COPYRIGHT]" > footer.h2m
$SHUGACOIND --version | sed -n '1!p' >> footer.h2m

for cmd in $SHUGACOIND $SHUGACOINCLI $SHUGACOINTX $SHUGACOINQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${SHUGAVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${SHUGAVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
