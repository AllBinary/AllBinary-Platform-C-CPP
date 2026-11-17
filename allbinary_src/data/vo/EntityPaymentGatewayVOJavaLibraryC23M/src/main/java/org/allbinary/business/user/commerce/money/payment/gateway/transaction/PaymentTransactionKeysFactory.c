/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.business.user.commerce.money.payment.gateway.transaction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PaymentTransactionKeysFactory PaymentTransactionKeysFactory;
struct PaymentTransactionKeysFactory {
    PaymentTransactionKeys* TRXTYPE;
    PaymentTransactionKeys* TENDER;
    PaymentTransactionKeys* ACCT;
    PaymentTransactionKeys* EXPDATE;
    PaymentTransactionKeys* AMT;
    PaymentTransactionKeys* AUTHCODE;
    PaymentTransactionKeys* MICR;
    PaymentTransactionKeys* CHECKNUM;
    PaymentTransactionKeys* NAME;
    PaymentTransactionKeys* STREET;
    PaymentTransactionKeys* CITY;
    PaymentTransactionKeys* STATE;
    PaymentTransactionKeys* ZIP;
    PaymentTransactionKeys* DL;
    PaymentTransactionKeys* EMAIL;
    PaymentTransactionKeys* COMMENT1;
    PaymentTransactionKeys* COMMENT2;
    PaymentTransactionKeys* ORIGID;
    PaymentTransactionKeys* PONUM;
    PaymentTransactionKeys* DESC;
    PaymentTransactionKeys* DESC1TO4;
    PaymentTransactionKeys* INVNUM;
    PaymentTransactionKeys* SHIPTOZIP;
    PaymentTransactionKeys* SWIPE;
    PaymentTransactionKeys* TAXAMT;
    PaymentTransactionKeys* COMMCARD;
    PaymentTransactionKeys* DUTYAMT;
    PaymentTransactionKeys* FRIEGHTAMT;
    PaymentTransactionKeys* ORDERDATE;
    PaymentTransactionKeys* TAXEXEMPT;
    PaymentTransactionKeys* COUNTRYCODE;
    PaymentTransactionKeys* CUSTCODE;
    PaymentTransactionKeys* CVV2;
    PaymentTransactionKeys* ABA;
    PaymentTransactionKeys* ACCTTYPE;
    PaymentTransactionKeys* DISCOUNT;
    PaymentTransactionKeys* FIRSTNAME;
    PaymentTransactionKeys* LASTNAME;
    PaymentTransactionKeys* SHIPFROMZIP;
    PaymentTransactionKeys* PRENOTE;
    PaymentTransactionKeys* CHKTYPE;
    PaymentTransactionKeys* DOB;
    PaymentTransactionKeys* PHONENUM;
    PaymentTransactionKeys* SS;
    PaymentTransactionKeys* COMPANYNAME;
    PaymentTransactionKeys* COUNTRY;
    PaymentTransactionKeys* FREIGHTAMT;
    PaymentTransactionKeys* SHIPTOCITY;
    PaymentTransactionKeys* SHIPTOFIRSTNAME;
    PaymentTransactionKeys* SHIPTOLASTNAME;
    PaymentTransactionKeys* SHIPTOSTATE;
    PaymentTransactionKeys* SHIPTOSTREET;
    PaymentTransactionKeys* SPECIAL1;
    PaymentTransactionKeys* SPECIAL2;
    PaymentTransactionKeys* SPECIAL3;
    PaymentTransactionKeys* PARTNER;
    PaymentTransactionKeys* VENDOR;
    PaymentTransactionKeys* USER;
    PaymentTransactionKeys* PWD;
    PaymentTransactionKeys* CHKNUM;
    PaymentTransactionKeys* AVSADDR;
    PaymentTransactionKeys* AVSZIP;
    PaymentTransactionKeys* PNREF;
    PaymentTransactionKeys* RESPMSG;
    PaymentTransactionKeys* RESULT;
    PaymentTransactionKeys* ORIGRESULT;
    PaymentTransactionKeys* STATUS;
    PaymentTransactionKeys* FRAUDCODE;
    PaymentTransactionKeys* FRAUDMSG;
    PaymentTransactionKeys* ERRCODE;
    PaymentTransactionKeys* SCORE;
    PaymentTransactionKeys* REASON1;
    PaymentTransactionKeys* REASON2;
    PaymentTransactionKeys* REASON3;
    PaymentTransactionKeys* EXCEPTION1;
    PaymentTransactionKeys* EXCEPTION2;
    PaymentTransactionKeys* EXCEPTION3;
    PaymentTransactionKeys* EXCEPTION4;
    PaymentTransactionKeys* EXCEPTION5;
    PaymentTransactionKeys* EXCEPTION6;
    PaymentTransactionKeys* EXCEPTION7;
};

static PaymentTransactionKeysFactory* PaymentTransactionKeysFactory_instance;

PaymentTransactionKeysFactory* PaymentTransactionKeysFactory_new(void);
PaymentTransactionKeysFactory* PaymentTransactionKeysFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PaymentTransactionKeysFactory_staticInit(void) {
    PaymentTransactionKeysFactory_instance = PaymentTransactionKeysFactory_new();
}

static void PaymentTransactionKeysFactory_initFields(PaymentTransactionKeysFactory* this) {
    this->TRXTYPE = PaymentTransactionKeys_new("TRXTYPE");
    this->TENDER = PaymentTransactionKeys_new("TENDER");
    this->ACCT = PaymentTransactionKeys_new("ACCT");
    this->EXPDATE = PaymentTransactionKeys_new("EXPDATE");
    this->AMT = PaymentTransactionKeys_new("AMT");
    this->AUTHCODE = PaymentTransactionKeys_new("AUTHCODE");
    this->MICR = PaymentTransactionKeys_new("MICR");
    this->CHECKNUM = PaymentTransactionKeys_new("CHECKNUM");
    this->NAME = PaymentTransactionKeys_new("NAME");
    this->STREET = PaymentTransactionKeys_new("STREET");
    this->CITY = PaymentTransactionKeys_new("CITY");
    this->STATE = PaymentTransactionKeys_new("STATE");
    this->ZIP = PaymentTransactionKeys_new("ZIP");
    this->DL = PaymentTransactionKeys_new("DL");
    this->EMAIL = PaymentTransactionKeys_new("EMAIL");
    this->COMMENT1 = PaymentTransactionKeys_new("COMMENT1");
    this->COMMENT2 = PaymentTransactionKeys_new("COMMENT2");
    this->ORIGID = PaymentTransactionKeys_new("ORIGID");
    this->PONUM = PaymentTransactionKeys_new("PONUM");
    this->DESC = PaymentTransactionKeys_new("PaymentTransactionDESC");
    this->DESC1TO4 = PaymentTransactionKeys_new("DESC1TO4");
    this->INVNUM = PaymentTransactionKeys_new("INVNUM");
    this->SHIPTOZIP = PaymentTransactionKeys_new("SHIPTOZIP");
    this->SWIPE = PaymentTransactionKeys_new("SWIPE");
    this->TAXAMT = PaymentTransactionKeys_new("TAXAMT");
    this->COMMCARD = PaymentTransactionKeys_new("COMMCARD");
    this->DUTYAMT = PaymentTransactionKeys_new("DUTYAMT");
    this->FRIEGHTAMT = PaymentTransactionKeys_new("FRIEGHTAMT");
    this->ORDERDATE = PaymentTransactionKeys_new("ORDERDATE");
    this->TAXEXEMPT = PaymentTransactionKeys_new("TAXEXEMPT");
    this->COUNTRYCODE = PaymentTransactionKeys_new("COUNTRYCODE");
    this->CUSTCODE = PaymentTransactionKeys_new("CUSTCODE");
    this->CVV2 = PaymentTransactionKeys_new("CVV2");
    this->ABA = PaymentTransactionKeys_new("ABA");
    this->ACCTTYPE = PaymentTransactionKeys_new("ACCTTYPE");
    this->DISCOUNT = PaymentTransactionKeys_new("DISCOUNT");
    this->FIRSTNAME = PaymentTransactionKeys_new("FIRSTNAME");
    this->LASTNAME = PaymentTransactionKeys_new("LASNAME");
    this->SHIPFROMZIP = PaymentTransactionKeys_new("SHIPFROMZIP");
    this->PRENOTE = PaymentTransactionKeys_new("PRENOTE");
    this->CHKTYPE = PaymentTransactionKeys_new("CHKTYPE");
    this->DOB = PaymentTransactionKeys_new("DOB");
    this->PHONENUM = PaymentTransactionKeys_new("PHONENUM");
    this->SS = PaymentTransactionKeys_new("SS");
    this->COMPANYNAME = PaymentTransactionKeys_new("COMPANYNAME");
    this->COUNTRY = PaymentTransactionKeys_new("COUNTRY");
    this->FREIGHTAMT = PaymentTransactionKeys_new("FREIGHTAMT");
    this->SHIPTOCITY = PaymentTransactionKeys_new("SHIPTOCITY");
    this->SHIPTOFIRSTNAME = PaymentTransactionKeys_new("SHIPTOFIRSTNAME");
    this->SHIPTOLASTNAME = PaymentTransactionKeys_new("SHIPTOLASTNAME");
    this->SHIPTOSTATE = PaymentTransactionKeys_new("SHIPTOSTATE");
    this->SHIPTOSTREET = PaymentTransactionKeys_new("SHIPTOSTREET");
    this->SPECIAL1 = PaymentTransactionKeys_new("SPECIAL1");
    this->SPECIAL2 = PaymentTransactionKeys_new("SPECIAL2");
    this->SPECIAL3 = PaymentTransactionKeys_new("SPECIAL3");
    this->PARTNER = PaymentTransactionKeys_new("PARTNER");
    this->VENDOR = PaymentTransactionKeys_new("VENDOR");
    this->USER = PaymentTransactionKeys_new("USER");
    this->PWD = PaymentTransactionKeys_new("PWD");
    this->CHKNUM = PaymentTransactionKeys_new("CHKNUM");
    this->AVSADDR = PaymentTransactionKeys_new("AVSADDR");
    this->AVSZIP = PaymentTransactionKeys_new("AVSZIP");
    this->PNREF = PaymentTransactionKeys_new("PNREF");
    this->RESPMSG = PaymentTransactionKeys_new("RESPMSG");
    this->RESULT = PaymentTransactionKeys_new("RESULT");
    this->ORIGRESULT = PaymentTransactionKeys_new("ORIGRESULT");
    this->STATUS = PaymentTransactionKeys_new("STATUS");
    this->FRAUDCODE = PaymentTransactionKeys_new("FRAUDCODE");
    this->FRAUDMSG = PaymentTransactionKeys_new("FRAUDMSG");
    this->ERRCODE = PaymentTransactionKeys_new("ERRCODE");
    this->SCORE = PaymentTransactionKeys_new("SCORE");
    this->REASON1 = PaymentTransactionKeys_new("REASON1");
    this->REASON2 = PaymentTransactionKeys_new("REASON2");
    this->REASON3 = PaymentTransactionKeys_new("REASON3");
    this->EXCEPTION1 = PaymentTransactionKeys_new("EXCEPTION1");
    this->EXCEPTION2 = PaymentTransactionKeys_new("EXCEPTION2");
    this->EXCEPTION3 = PaymentTransactionKeys_new("EXCEPTION3");
    this->EXCEPTION4 = PaymentTransactionKeys_new("EXCEPTION4");
    this->EXCEPTION5 = PaymentTransactionKeys_new("EXCEPTION5");
    this->EXCEPTION6 = PaymentTransactionKeys_new("EXCEPTION6");
    this->EXCEPTION7 = PaymentTransactionKeys_new("EXCEPTION7");
}

void PaymentTransactionKeysFactory_init(PaymentTransactionKeysFactory* this) {
    PaymentTransactionKeysFactory_initFields(this);
}

PaymentTransactionKeysFactory* PaymentTransactionKeysFactory_new(void) {
    PaymentTransactionKeysFactory* this = calloc(1, sizeof(PaymentTransactionKeysFactory));
    PaymentTransactionKeysFactory_init(this);
    return this;
}


PaymentTransactionKeysFactory* PaymentTransactionKeysFactory_getInstance(void) {
        return PaymentTransactionKeysFactory_instance;
}

