// Copyright (c) 2009-2017 The Bitcoin Core developers
// Copyright (c) 2018-2020 The Sugarchain Yumekawa developers
// Copyright (c) 2024 The Shugacoin Azula developers

#include <qt/test/uritests.h>

#include <qt/guiutil.h>
#include <qt/walletmodel.h>

#include <QUrl>

void URITests::uriTests()
{
    SendCoinsRecipient rv;
    QUrl uri;
    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?req-dontexist="));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?dontexist="));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 0);

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?label=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma"));
    QVERIFY(rv.label == QString("Wikipedia Example Address"));
    QVERIFY(rv.amount == 0);

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?amount=0.001"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100000);

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?amount=1.001"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100100000);

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?amount=100&label=Wikipedia Example"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma"));
    QVERIFY(rv.amount == 10000000000LL);
    QVERIFY(rv.label == QString("Wikipedia Example"));

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?message=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma"));
    QVERIFY(rv.label == QString());

    QVERIFY(GUIUtil::parseBitcoinURI("shugacoin://SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?message=Wikipedia Example Address", &rv));
    QVERIFY(rv.address == QString("SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma"));
    QVERIFY(rv.label == QString());

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?req-message=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?amount=1,000&label=Wikipedia Example"));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("shugacoin:SHUGAjyPtxYCkHbNAvEKAbtVoFWhWjrLma?amount=1,000.0&label=Wikipedia Example"));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));
}
