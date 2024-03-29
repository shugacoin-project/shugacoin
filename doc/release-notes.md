## Azula v0.16.3.36-payapoya
- Version: Final Release
- Date: 2021-01-25

**Changes:**
- Major Fix:
  * Add: Log output during initial header sync
    [#174](https://github.com/shugacoin-project/shugacoin/pull/174)
  * Add: Mainnet DNSSEED
    [#167](https://github.com/shugacoin-project/shugacoin/pull/167)
  * Enhanced chain security
    [#172](https://github.com/shugacoin-project/shugacoin/pull/172)
- Minor Fix:
  * Build documentation
    [#184](https://github.com/shugacoin-project/shugacoin/pull/184)

**Known Issues**
- Same as before

**Credits:**
Thanks to everyone who directly contributed to this release
- decryp2kanon
- ROZ-MOFUMOFU-ME
- volbil
- Nugetzrul3
- y-chan
- cryptozeny

**PGP:**
```
-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA256

e89bf74cfa41c66ae9489390bfdd1144f87e448728e184be3854bd4294c2f41e  shugacoin-0.16.3.36-payapoya-aarch64-linux-gnu.tar.gz
61fbc406fa30050132b18ec6b3b001f661f8350c9d34bdab834802fe896a7a2e  shugacoin-0.16.3.36-payapoya-arm-linux-gnueabihf.tar.gz
5dd0817e1be7fd8efedf5bbd43583850dd6f5bd8324c6fe50783ba4becf2de90  shugacoin-0.16.3.36-payapoya-i686-pc-linux-gnu.tar.gz
6571fdb35c3bd4aa44a8b6dae15128136257986b16d50cf6f6b091b2528a5f7e  shugacoin-0.16.3.36-payapoya-osx64.tar.gz
620fa7a5b92fdd3d108ce38a55b505f360dc90d5071186ebd8ecb11e453f6503  shugacoin-0.16.3.36-payapoya-osx-unsigned.dmg
7a1d56262fc9690d9f25ed292f30a058a14cbe5176b1007de69bdec8a43c78ca  shugacoin-0.16.3.36-payapoya.tar.gz
b58d56bbafd991de163be0d69286988456a0b9d6a0965e040cb6a615cbc1ae5f  shugacoin-0.16.3.36-payapoya-win32-setup-unsigned.exe
16d660bba5e8c3f10d42717a05c4df73dc9a91ef3295b77e05a97e7d672ee1e5  shugacoin-0.16.3.36-payapoya-win32.zip
453fee9d4556de7c03ddb2f67d3b92246852612f9362394711a92e7354a7371f  shugacoin-0.16.3.36-payapoya-win64-setup-unsigned.exe
30e49a2b410a7e6f9e7d76cf09fd01d756b2f234816f53cf669897917b5b02db  shugacoin-0.16.3.36-payapoya-win64.zip
b2d0cb2886d1aa5f18a1b52b3a75fab9f1f38c54459c888555f69262cefa82ef  shugacoin-0.16.3.36-payapoya-x86_64-linux-gnu.tar.gz
-----BEGIN PGP SIGNATURE-----
Version: GnuPG v1

iQIcBAEBCAAGBQJgDcHyAAoJELB664A/uejpki8QAIDbUBGUR8voLCpQRoQkQcUM
y0cu9dWKawHnRE0mIj6Mie2ZNbsQXXyZbZCWZ6/tb+LdwBMKhci07vEQ8psPM8kt
tVAjxZ6OspHflOaaS5jjFqI9Pl/GQd4ARsBP2ezMtKXFWW29JVLgHNwtavKos6xF
peGje9rkt0ERt89XoYHiysA8nQb6p2um1UTfWdntGi7uuliZy9SgDJACgGlj4qLJ
Zh/VZsfX/UyzEy3JIR977hYQjqEn7SWZ1G1rB6/+BE8kxuvXgERQFOK9NaErQISE
Wu64FglSBl/IW8Qa+6HCkHtS2ZbB4YGO+dlqRY1EE2HHL3OqJVnmxcm6/iJemJCk
h85TtrAjIbDydR4IFxqSoLYTU/bCn+QBR+0+9mAICYVTVDYDW6POlVhYewg6XDjy
NiACYIj51Y9TVwF9JHWeSLW2wSL/lzO1FvozBflNG/0WFA2K10z2cLn/OSuyFRDw
Zca9KEcmgo0cmJo0v9INPNfmZnUOmeFOpYZHTeLPCzWlgNDD6dv03lV45afeeq5U
4agUjfG+mQ2+v0laIaL3NIYaJyh6mdOKOAlC5vK7jaXQO+Q/VECxyJSTFCTPnW7V
s8LUt0ccBgBXRkkLYCRfJdCdBYQm404QO5f36JMDWnaiY3gRDYgpK0RMpMagm7M6
9n6om+P6BGir9tax4BYc
=7twE
-----END PGP SIGNATURE-----
```

-----

## Azula v0.16.3.34-starboy
- Version: Final Release
- Date: 2020-06-07

**Changes:**
- Major Fix:
  * Fix: IBD `30%` faster, and `60%` reduced data traffic
    [#122](https://github.com/shugacoin-project/shugacoin/pull/122)
  * Add: new option `-prunedebuglogfile`: limit filesize of debug.log
    [#110](https://github.com/shugacoin-project/shugacoin/pull/110)
  * Add: when IBD, print blockheader count on debug.log (only shugacoin-qt)
    [#128](https://github.com/shugacoin-project/shugacoin/pull/128)
  * Update: checkpoints (mainnet)
    [#132](https://github.com/shugacoin-project/shugacoin/pull/132)
  * Fix: IBD optimizing
    [#135](https://github.com/shugacoin-project/shugacoin/pull/135)
    [#22 (comment)](https://github.com/shugacoin-project/shugacoin/pull/22#issuecomment-568301895)
  * Update: seed list
    [#144](https://github.com/shugacoin-project/shugacoin/pull/144)
  * Remove: BCLog::POW (-debug=pow)
    [#142](https://github.com/shugacoin-project/shugacoin/pull/142)
- Minor Fix:
  * GUI: display size in `MB` (was GB)
    [#125](https://github.com/shugacoin-project/shugacoin/pull/125)
  * Revert: IBD settings back to BTC original
    [#124](https://github.com/shugacoin-project/shugacoin/pull/124)
  * Add: bootstrap height at `4421701`
    [#143](https://github.com/shugacoin-project/shugacoin/pull/143)
  * Fix: travis pathlib2
    [#148](https://github.com/shugacoin-project/shugacoin/pull/148)

**Known Issues**
- Transaction too large:
  * This is a part of BTC.
  * It will be fixed in next *Taproot+Schnorr* update.
- Slow update balance on wallet:
  * This slow is a part of BTC.
  * Update total balance *every minute (12 blocks)* interval.
  * This fix is a (nice) workaround for now. [source](https://github.com/shugacoin-project/shugacoin/commit/72436c90b29844cf507895df053103f9b6840776#diff-2e3836af182cfb375329c3463ffd91f8)
- Poor performance on ARM CPUs (32/64-Bit):
  * No ARM optimization for Yespower yet.
- Poor performance on 32-Bit OS:
  * No SSE2 optimization for Yespower yet. [source](https://github.com/shugacoin-project/shugacoin/blob/d977987a83aba115d50a9130f0d7914330d1bc75/src/crypto/yespower-1.0.1/yespower-opt.c#L59)
- Slow startup on low memory machines:
  * Startup can take up to some hours on 1cpu 1024ram (+swap 3GB) VPS.
  * Workaround is just increase RAM at least 2 GB.
- Slow rescanning `wallet.dat`:
  * If your wallet is too heavy or mining purpose, it may take very long when importing.

**Credits:**
Thanks to everyone who directly contributed to this release
- decryp2kanon
- solardiz (original Yespower author)
- barrystyle
- volbil
- Nugetzrul3
- cryptozeny

**Financial Support:**
We give our utmost thanks to the donors. This donation will be used for our future development. See [donations](https://github.com/shugacoin-project/Donations/blob/master/README.md).
- Rakutens

**PGP:**
```
-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA256

7de00a9c41f96e6f124df29848b193f997104927d56aaf8932d03c67c4885633  shugacoin-0.16.3.34-starboy-aarch64-linux-gnu.tar.gz
26d98deb5da2016777df5cd920c7b74c59bf72690600c0d8b30386d8879a93a4  shugacoin-0.16.3.34-starboy-arm-linux-gnueabihf.tar.gz
f4fff1c073b9bf8b72e9137a77cb054e438f9e8761572f2bc0e97dee72246fd3  shugacoin-0.16.3.34-starboy-i686-pc-linux-gnu.tar.gz
b60b2b341f4c017e49d0591b8076310ca5e3a3335279bda2377f186ed7101301  shugacoin-0.16.3.34-starboy-osx64.tar.gz
02652111bd4173add743d8bb197d688975fa34a13e61720129c5d350ff52f7df  shugacoin-0.16.3.34-starboy-osx-unsigned.dmg
f9dd0b1d05643909b13ba23592030521f5f7ea9d71f49b4e26ca24390f833b0e  shugacoin-0.16.3.34-starboy.tar.gz
3566064845779cacf7fbce491b5a85b788bcb9574b217cbdf4b75f7cc2a1b94d  shugacoin-0.16.3.34-starboy-win32-setup-unsigned.exe
d9b76c537648849e725b994e8a9bbf6743f81dcc54c322d4f0b3a632b66a6571  shugacoin-0.16.3.34-starboy-win32.zip
78bf478722b4c822359c6eca66bfbe5f7397d63025e8b16d10070404ea1e1888  shugacoin-0.16.3.34-starboy-win64-setup-unsigned.exe
debb7652010021f49d1ad5b58060d7896cbd78ab5180d79a50189be26eb339ac  shugacoin-0.16.3.34-starboy-win64.zip
4a79d2bb85c306fa37b57ab5790931103e4311b7dc8edeca4c86c3ec26590b62  shugacoin-0.16.3.34-starboy-x86_64-linux-gnu.tar.gz
-----BEGIN PGP SIGNATURE-----
Version: GnuPG v1

iQIcBAEBCAAGBQJe3CZVAAoJELB664A/uejpa8AP/iqFsypVOhqJ79+St2Vzoqlj
VPBExELtoOr/BCt+GmBu9upmbowt0UU7JHiu/Mupf3Q1Uz3MJ9p/bQuVLWWugIGO
+iOnYOOvCmI8DqN0HT8u/RhcdNVFFkV17+Ef/Fcvn3/k7JIvsvCNPivISYoMI/Ay
htuz7E7cDZvZ9PUfPDVwsQatl8m6NbNFTjcvTPsAIiiab+MEbkPHdzXF3BRbv2P7
oSduqlA8ty9T7YXiYlTE98gE3dMxh+gIWzCRqnhJtlLyrgv/sp4JY5aup0Gi7fth
/NZITffXlJdakzzoUoSy563+MTQlWAIyh3GM5QOwHtoaijCAGYGhcTWvwqdGok6a
FLCCO5he79hpprmIccJYtIMYubqf36Jm6uNxcyroTqFUAbTOnDjNQ9myKulnK1pb
9XpYeitmpy/OB/Fks0YAOBQY/ybtluhoOMLUjRQjwjTo5bTThMKLG5olDr0jI3L7
LA5P/mt+FsQ/NvUPd11rEZNeqKHhCTuU0sMyt6WWLb4xw12cNEv3rCail7LKRxBE
82ZseXC0AbiQJ0cuKLZs3vGU+lA16kB1MEnARIiajh+xp4moNM+yz/YbYO/ViH/V
lDc9GH/AxzF2WvhJxlVlKNBpWZK64yQAy0bi9lULoQK2sTSnWbasu02GnXDc+YtF
Nje4ppnRwR3nbnb6e95Q
=S/DR
-----END PGP SIGNATURE-----
```

-----

## Azula v0.16.3.30-moonlight
- Version: Final Release
- Date: 2020-03-02

**Changes:**
- Major Fix:
  * add: Yespower cached PoW
    [#22](https://github.com/shugacoin-project/shugacoin/pull/22)
  * fix: enhanced Yespower cached PoW
    [#61](https://github.com/shugacoin-project/shugacoin/pull/61)
    [#69](https://github.com/shugacoin-project/shugacoin/pull/69)
  * review: solardiz (original Yespower author) confirmed
    [1](https://github.com/shugacoin-project/shugacoin/pull/22#issuecomment-568301895)
    [2](https://github.com/shugacoin-project/shugacoin/pull/22#issuecomment-568306963)
    [3](https://github.com/shugacoin-project/shugacoin/pull/22#issuecomment-568505605)
    [4](https://github.com/shugacoin-project/shugacoin/issues/31#issuecomment-583833642)
    [5](https://github.com/shugacoin-project/shugacoin/issues/32#issuecomment-568302174)
  * fix: IBD: do not disconnect *whitelisted* peers during IBD
    [#80](https://github.com/shugacoin-project/shugacoin/pull/80)
  * remove: IBD: disable additional download during IBD, due to too much traffic
    [#78](https://github.com/shugacoin-project/shugacoin/pull/78)
  * add: chainwork, assumevalid, txdata, checkpoint and seeds
    [#50](https://github.com/shugacoin-project/shugacoin/pull/50)
    [#52](https://github.com/shugacoin-project/shugacoin/pull/52)
- Minor Fix:
  * fix: IBD: do not print this connection log during IBD
    [#78](https://github.com/shugacoin-project/shugacoin/pull/78)
  * add: bootstrap block height at 2601001
    [#49](https://github.com/shugacoin-project/shugacoin/pull/49)
  * add: kanon PGP
    [#48](https://github.com/shugacoin-project/shugacoin/pull/48)
  * fix: copyright
    [#75](https://github.com/shugacoin-project/shugacoin/pull/75)
    [#90](https://github.com/shugacoin-project/shugacoin/pull/90)
    [#96](https://github.com/shugacoin-project/shugacoin/pull/96)
  * fix: makeseeds.py version
    [#89](https://github.com/shugacoin-project/shugacoin/pull/89)
  * cleanup:
    [#60](https://github.com/shugacoin-project/shugacoin/pull/60)
    [#66](https://github.com/shugacoin-project/shugacoin/pull/66)
    [#84](https://github.com/shugacoin-project/shugacoin/pull/84)
    [#85](https://github.com/shugacoin-project/shugacoin/pull/85)
    [#92](https://github.com/shugacoin-project/shugacoin/pull/92)

**Known Issues**
- Same as before

**Credits:**
Thanks to everyone who directly contributed to this release
- solardiz (original Yespower author)
- volbil
- okoto-xyz
- decryp2kanon
- cryptozeny

**Financial Support:**
We give our utmost thanks to the donors. This donation will be used for our future development. See [donations](https://github.com/shugacoin-project/Donations/blob/master/README.md).

- 唐伯虎
- Rakutens
- [happysensor.xyz](http://happysensor.xyz/)

**PGP:**
```
-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA256

6898bfa3b6f0fbaeb3a62e66ed55d7e906f884552a4c1fefad5c286c58e059d8  shugacoin-0.16.3.30-moonlight-aarch64-linux-gnu.tar.gz
3106dda1444b4b3a12612b9691504e873d275c89558b34762551e0c731e8cc8c  shugacoin-0.16.3.30-moonlight-arm-linux-gnueabihf.tar.gz
dbbba96b58d11181816eadbf8a7652c769da21769d36a799a0c8533440a66e30  shugacoin-0.16.3.30-moonlight-i686-pc-linux-gnu.tar.gz
91a2d38c9beca3dabecfd1319a830ccd4a75c46f2b15d726d56e71a17efdf66e  shugacoin-0.16.3.30-moonlight-osx64.tar.gz
d9783a54f53741e0826f3c66f9c5b4d968f662b1216d5b2dc5ca8d343c223cf1  shugacoin-0.16.3.30-moonlight-osx-unsigned.dmg
91335f484a9f49dce114898edb1ab91bfeb9d9a7eb9eb5478f42624eb3890089  shugacoin-0.16.3.30-moonlight.tar.gz
94d64b0fca87019140080723f6cc2069c306e89caa00910c9361f6129c33932b  shugacoin-0.16.3.30-moonlight-win32-setup-unsigned.exe
969183f4928908468ff92a615d27643e95b66aef65dff56ec0bf0dea157f5b45  shugacoin-0.16.3.30-moonlight-win32.zip
9e86291ee4a2f7cf2db2f07dd0c93b81a6cad30b7d4689a2a605a21e4dd05a13  shugacoin-0.16.3.30-moonlight-win64-setup-unsigned.exe
141387def60d1c29cf78f75c61a704f406277e0a7b69a9d356843be1c1a751cf  shugacoin-0.16.3.30-moonlight-win64.zip
20ca6c6e5fd395cd3ff0cc41601eaa156ee43ae92e44cc0b6eaea8b3cbf09b06  shugacoin-0.16.3.30-moonlight-x86_64-linux-gnu.tar.gz
-----BEGIN PGP SIGNATURE-----
Version: GnuPG v1

iQIcBAEBCAAGBQJeXMrUAAoJELB664A/uejp7r4P/iPk2C3HzKdLZhIWbGkhlsaD
cURDAD7Wa5ccq4UoDNVHBCTTye0cqDWCccxp7PzTv+F8nctUXtcU8StcTx0NySwZ
5fXQ8OP4x+QqFBBuYRld9y1Hhzns9ORK+sslJEgC4GlY6pQcTQso57xg6vPPAcUn
nmJByUfDOuf9NcoV9fjMVHxZIBFkWeDLkeJGxN3FLSc+bxx6NkU94zDWS2J1jX1+
DqVB+JmvJa8SY2VUC5jxheRmY1/npHLvQw6eDkox6sbUVpZR1+m9pVzM2MImz0Mb
I8Uto7fwjCLEbIufoX/iCBmB8hOq1QM2mf5L18mypeifjb8LlMFr8uho2b4St2aU
suRYKUlHw4tnX+qYtkvaFR4Al5uEfvilIsdv8fBkk3pgxsdWgvNyxDL7BoHd3eHp
Y1aDOPOIMo7qh48w1vnRVFE6iXC9WLd0L408Gb+Z+py9dG0mP04I+8NYvn9VLiCu
t6KPcTdkgXclT2JvEjz1GZMcil68RtJ2P+Cw4dlY4HAOl0/nuAHoTSLvMxnfYnl0
Cj2v4nq2s3huun/Ez+CNOHRLEsA+YIRb+Y+HiIV4WQTAFXakerWOEWAsdCIdKBFp
7ULjTg4cR2u+4D7g7rVgE9r0Oe53TV9kal/BF5JGzRwW/gpnT/30WXRzt110nnkK
vmysL9NojJ1rXA9E/mGc
=gDHB
-----END PGP SIGNATURE-----
```

-----

## Azula v0.16.3.24-bloomy
- Version: Final Release
- Date: 2019-11-10

**Changes:**
- Major Fix:
  * fix: Timeout downloading block
  * revert: download window back to `1024` (was 1024*120=122880)
  * add: checkpointData, chainTxData
  * add: seed list from dnsseed
  * fix: boost warnings on OSX by @volbil
  * fix: gitian github URL to official repo
- Minor Fix:
  * review: README.md by @Nugetzrul3
  * rename: Shugacoin Azula developers
  * create: benchmark sh and result
  * add: translation: Korean, Japanese, Chinese(zh_CH)
  * add: bootstrap linearize at height `650000`, `1043000`
  * fix: comment error (#6)

**Known Issues**
- Transaction too large:
  * This is a part of BTC.
  * It will be fixed in next *Schnorr Signature* update.
- Slow update balance on wallet:
  * Update total balance *every minute (12 blocks)* interval.
  * This slow is a part of BTC.
  * This fix is a (nice) workaround for now. [source](https://github.com/shugacoin-project/shugacoin/commit/72436c90b29844cf507895df053103f9b6840776#diff-2e3836af182cfb375329c3463ffd91f8)
- Poor performance on ARM CPUs (32/64-Bit):
  * ARM optimization for Yespower disabled for now.
- Poor performance on 32-Bit OS:
  * SSE2 for Yespower disabled for now. [source](https://github.com/shugacoin-project/shugacoin/blob/d977987a83aba115d50a9130f0d7914330d1bc75/src/crypto/yespower-1.0.1/yespower-opt.c#L59)
  * Please use *64-bit* for best performance.

**Credits:**
Thanks to everyone who directly contributed to this release (alphabetical order)
- AestheticSenpai
- cryptozeny
- ilmango-doge
- joeland1
- nao20010128nao
- Nugetzrul3
- okoto-xyz
- RicK~Z
- solardiz
- volbil
- y-chan
- zawy12

**PGP:**
```
-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA256

044e41405be4d8b276a7df8d1b7ef8f68d2e22089a41e54689a6112692d85652  shugacoin-0.16.3.24-bloomy-aarch64-linux-gnu.tar.gz
cc53f4e768b2b7086640b75be916374b48cb158bd3a248b7c7b219416c97fda5  shugacoin-0.16.3.24-bloomy-arm-linux-gnueabihf.tar.gz
69678ebfd54b76c1754ad622d902c1e7ac83fc0abc1cbeb2cc2c617e96a293b3  shugacoin-0.16.3.24-bloomy-i686-pc-linux-gnu.tar.gz
94db81d05ca130fcaecc9ee1c27e0781e4d97eafe7dcea3ab57c430e44d77eef  shugacoin-0.16.3.24-bloomy-osx64.tar.gz
951cdf79b3c68fcfe0bb07d16ff380413b9a57ed0399258f7ea0910593208378  shugacoin-0.16.3.24-bloomy-osx-unsigned.dmg
7891337c22ca526345076e7873211f1a9e54dd54deff1363d309f9224d710518  shugacoin-0.16.3.24-bloomy.tar.gz
2b4ffbe4a8226ffe1fc011582e5e3db3d91ef43aec0b27eb736f45dfd17946e1  shugacoin-0.16.3.24-bloomy-win32-setup-unsigned.exe
fdd1384db27e7174e237b23f904421697b6567501c22719384e8e725baa91de6  shugacoin-0.16.3.24-bloomy-win32.zip
b92b58c5c0ba939c1e354d5b7d8130771505a5b77d9b0fe01da6d25c78eaacc2  shugacoin-0.16.3.24-bloomy-win64-setup-unsigned.exe
59c6789b365aec5fde61bd81326aeb0297fcb7b608aea3cad5d754237edb4f88  shugacoin-0.16.3.24-bloomy-win64.zip
e972db66eb0e373469dbdb526fefd4e77006ef696adf565974b66c4f81c05e86  shugacoin-0.16.3.24-bloomy-x86_64-linux-gnu.tar.gz
-----BEGIN PGP SIGNATURE-----
Version: GnuPG v1

iQIcBAEBCAAGBQJdx6nmAAoJELndveKqrcQhGQEP/0GJ/YUlcgSMILklcXylzoxx
Zn48oiZ5/caLByv49Xuiv+jA+ieut+fuI0foiOiF60TnE4TCLddhyFfnDUPlhlZl
wZu3iHRXu8MHimRKMkGPqPnwUDWOhHPJKpKiDnrGzDirMz+tQHFH3olXHs+Mcs9Z
SMpTwfkrKYKIx7KFSBl1xCu3MlOR0fGAGuKalGtdRSgu2JQTtDIJrdEs5hdyV3If
DLOlqWUfpRPy6Bnr5kArDpU0zyJB7xrfYEpP4n4D5yNQsb7Of/QZuhYbeTLLLWEz
66tHICrVDU+nIuURRyhjzt1+oZs9pE3FXsNpS3z0b9KBT8iQczIbHV/qNUuBQrpm
SeOLijOM5k79sQ1E25ixR6V/CJ/Kv+zgD+Lz7Ca1LCvoiz320X3EI3Hr02zN1UF/
7eaTwogPNo+foIgiih8ylnOZL+cyIm53DQZNBuMmtPt5u0n4hIjPU6MFRMTjf0dP
l299lSS3dO0gxpY+clEm/L1oz+inVGaD5/hmJy/NO8W86O6Z+axLUaBXV0WNxd+e
FIhVsxra7TIRxWo9cbp1x8FBdlmf3FOYnbgawjBAxrcWw+N+Vrsx4m6/KU6QaP8D
xYL5ZZjz9+fm+LEUdw07IBaKpdfYSVLjlMBi4pLXoo2b5On3Pt70B02QIpH5QpCc
/tYDKGg802p4+GsNmZ8A
=geDz
-----END PGP SIGNATURE-----
```

-----

## Azula v0.16.3.21rc1
- Version: The First Release
- Date: 2019-08-24

Mainnet Launching: `2019/08/24 15:00 UTC`
https://bitcointalk.org/index.php?topic=5177722.0

**Changes:**
- Block time: `5` seconds
- Difficulty: [ShugaShield-N510](https://github.com/shugacoin-project/shugacoin/blob/master-v0.16.3/src/pow.cpp)
- Block reward: 42.94967296 COIN `pow(2,32)/1E+08`
- Halving interval: 12500000 Blocks `pow(5,8)*32` [source](https://github.com/shugacoin-project/shugacoin/blob/32c7d945cda04374f1abbcb8e9787704e7171d4e/src/validation.cpp#L1168-L1211)
- Total supply: 1073741824 COIN `pow(2,30)` [source](https://github.com/shugacoin-project/yumekawa-utils)
- PoW algorithm: YespowerShuga
  * Settings
  ```cpp
  yespower_params_t yespower_1_0_shugacoin = {
    .version = YESPOWER_1_0,
    .N = 2048,
    .r = 32,
    .pers = (const uint8_t *)"Satoshi Nakamoto 31/Oct/2008 Proof-of-work is essentially one-CPU-one-vote",
    .perslen = 74
  };
  ```
- Genesis:
  * Timestamp [link](https://www.thetimes.co.uk/article/facebook-s-libra-knocks-bitcoin-b3zvn67k0)
  ```cpp
  "The Times 17/July/2019 Bitcoin falls after senators call Facebook delusional over libra"
  ```
  * Genesis block
  ```cpp
  genesis = CreateGenesisBlock(1565881200, 247, 0x1f3fffff, 1, 42.94967296 * COIN);
  ```
- Port: Main `40001/40002`, Testnet 44230/44229, Regtest 45340/45339
  * Meaning: 40001 is the molar mass of a shuga [link](https://twitter.com/cryptozeny/status/1130167161475911682)
- DEFAULT_MAX_TIME_ADJUSTMENT `70` (was 4200)
- MAX_FUTURE_BLOCK_TIME `60` (was 7200)
- QT delayed refresh balance [source](https://github.com/shugacoin-project/shugacoin/commit/72436c90b29844cf507895df053103f9b6840776#diff-2e3836af182cfb375329c3463ffd91f8)

**Credits:**
Thanks to everyone who directly contributed to this release (alphabetical order)
- cryptozeny
- ilmango-doge
- okoto-xyz
- solardiz
- volbil
- zawy12

**PGP:**
```
-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA256

61ad7bbf3b6d5fe6a5b15b86be45539aa0f8c571e120f896f4c9110f80ecebb5  shugacoin-0.16.3.21rc1-aarch64-linux-gnu.tar.gz
8d9b2e4ad2917f818619a4922a9337b499cbc52dd2ab814213ad3cf3027887de  shugacoin-0.16.3.21rc1-arm-linux-gnueabihf.tar.gz
d390539304ce4029551e028b1101e610e8629dc382a3104f0c462aa22c158043  shugacoin-0.16.3.21rc1-i686-pc-linux-gnu.tar.gz
ea651fb1b26424659fbc2423dc03654b0c60f3e4151fa9241c6dbc6dc958d304  shugacoin-0.16.3.21rc1-osx64.tar.gz
08bdb5e00f62b6b9d39fd3439d35549b9a07eeed0704ce5abc8502d805f58647  shugacoin-0.16.3.21rc1-osx-unsigned.dmg
782a0cd3241b25f461009004bda17b1558b5d7e39913a671e2480f46f7a85db4  shugacoin-0.16.3.21rc1.tar.gz
2b641f0c6871b7ef2aed68c8746da0b0e4a0cb0e675ad0004b1071fe6331f17f  shugacoin-0.16.3.21rc1-win32-setup-unsigned.exe
d95577ece9f83841cff040d200792a40146bf0f00d287bf3943e70b6180a262f  shugacoin-0.16.3.21rc1-win32.zip
a97de97c75b25f0d2bb20ca3e685406e2ed0c41989a069c5a99390bd0d05b09f  shugacoin-0.16.3.21rc1-win64-setup-unsigned.exe
bfa4d47bf4044274af15bcf202f238cbd5029b088aa09ac69520c20b98763e46  shugacoin-0.16.3.21rc1-win64.zip
fd676441889bcfff2b26f94945c777bb1cd1f7338c25316f79d21dd9431ee556  shugacoin-0.16.3.21rc1-x86_64-linux-gnu.tar.gz
-----BEGIN PGP SIGNATURE-----
Version: GnuPG v1

iQIcBAEBCAAGBQJdXyT2AAoJELndveKqrcQhtG0QAINxBFHNCL5Fi8c4yWSG03LK
0ZjkGyKCh/k+C5TSOreJLNAmrnKGT6gibc/djlXFEAq9ZcxXi+HKTYbKmRM8Uqtq
vbTyaN2l3O9gY4usQReOgIxfbxdIu49VkUojeW1nzf0XD4UnptTspbPG4ugl3ELg
GcJ1v1EVnHhyW5nERsNmn67XPClF4OJ+2qNDY57c1CeUiaIqINB2kQ0MF8QSFyOp
AolkCTs04k+5g6PXA1V9u9jLoJ+b9OSqOc9lYyg0eTG7JcjUAHWGuAmEuN6DOFu5
h14JnDs1oy6kKc9FczoCaMf5xmityXWhX+Xk67kZDPgmRLYc+CnNd5g4PocKwHm9
MGwZPrTnD476sZ91xwM1N38VSmDKZS0dNVg2UFoE5gLE7jgACyMlBCNGGp9yoorw
oZkGNjeVd2pUcCbKmaifvE7hicvUHBC5aFo5PLoMAtCJNXMiVjd86lLqpqC2Mq4X
aGXpUTg6Dsmi+5/AfBH0+O02HTgDszQdVLiXmW/LjbOLn12KadyhCks5shS/zApW
x2afUNP1+5nz2g8I5s5tCycHxyzRYEq9j0wiSbfxAdEJB9oYO7gD0BAN5muWAGDc
zIiTBrgd4ezB5CO+oKom5vLMs2Jzw186jgsxZnZtolDNYYnSs04Y7i/1uQy0FFbx
KXKegrTDAuPrWuoAMhxe
=nPUF
-----END PGP SIGNATURE-----
```
