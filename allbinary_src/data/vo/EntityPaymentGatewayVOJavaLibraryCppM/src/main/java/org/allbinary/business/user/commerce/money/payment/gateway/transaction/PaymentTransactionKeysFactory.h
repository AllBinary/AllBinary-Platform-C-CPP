
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentTransactionKeys.h"

class PaymentTransactionKeysFactory
            : public Object
         {

    private: static PaymentTransactionKeysFactory instance() { return PaymentTransactionKeysFactory(); }

    public: static PaymentTransactionKeysFactory getInstance();

    public: const PaymentTransactionKeys TRXTYPE = PaymentTransactionKeys("TRXTYPE");

    public: const PaymentTransactionKeys TENDER = PaymentTransactionKeys("TENDER");

    public: const PaymentTransactionKeys ACCT = PaymentTransactionKeys("ACCT");

    public: const PaymentTransactionKeys EXPDATE = PaymentTransactionKeys("EXPDATE");

    public: const PaymentTransactionKeys AMT = PaymentTransactionKeys("AMT");

    public: const PaymentTransactionKeys AUTHCODE = PaymentTransactionKeys("AUTHCODE");

    public: const PaymentTransactionKeys MICR = PaymentTransactionKeys("MICR");

    public: const PaymentTransactionKeys CHECKNUM = PaymentTransactionKeys("CHECKNUM");

    public: const PaymentTransactionKeys NAME = PaymentTransactionKeys("NAME");

    public: const PaymentTransactionKeys STREET = PaymentTransactionKeys("STREET");

    public: const PaymentTransactionKeys CITY = PaymentTransactionKeys("CITY");

    public: const PaymentTransactionKeys STATE = PaymentTransactionKeys("STATE");

    public: const PaymentTransactionKeys ZIP = PaymentTransactionKeys("ZIP");

    public: const PaymentTransactionKeys DL = PaymentTransactionKeys("DL");

    public: const PaymentTransactionKeys EMAIL = PaymentTransactionKeys("EMAIL");

    public: const PaymentTransactionKeys COMMENT1 = PaymentTransactionKeys("COMMENT1");

    public: const PaymentTransactionKeys COMMENT2 = PaymentTransactionKeys("COMMENT2");

    public: const PaymentTransactionKeys ORIGID = PaymentTransactionKeys("ORIGID");

    public: const PaymentTransactionKeys PONUM = PaymentTransactionKeys("PONUM");

    public: const PaymentTransactionKeys DESC = PaymentTransactionKeys("PaymentTransactionDESC");

    public: const PaymentTransactionKeys DESC1TO4 = PaymentTransactionKeys("DESC1TO4");

    public: const PaymentTransactionKeys INVNUM = PaymentTransactionKeys("INVNUM");

    public: const PaymentTransactionKeys SHIPTOZIP = PaymentTransactionKeys("SHIPTOZIP");

    public: const PaymentTransactionKeys SWIPE = PaymentTransactionKeys("SWIPE");

    public: const PaymentTransactionKeys TAXAMT = PaymentTransactionKeys("TAXAMT");

    public: const PaymentTransactionKeys COMMCARD = PaymentTransactionKeys("COMMCARD");

    public: const PaymentTransactionKeys DUTYAMT = PaymentTransactionKeys("DUTYAMT");

    public: const PaymentTransactionKeys FRIEGHTAMT = PaymentTransactionKeys("FRIEGHTAMT");

    public: const PaymentTransactionKeys ORDERDATE = PaymentTransactionKeys("ORDERDATE");

    public: const PaymentTransactionKeys TAXEXEMPT = PaymentTransactionKeys("TAXEXEMPT");

    public: const PaymentTransactionKeys COUNTRYCODE = PaymentTransactionKeys("COUNTRYCODE");

    public: const PaymentTransactionKeys CUSTCODE = PaymentTransactionKeys("CUSTCODE");

    public: const PaymentTransactionKeys CVV2 = PaymentTransactionKeys("CVV2");

    public: const PaymentTransactionKeys ABA = PaymentTransactionKeys("ABA");

    public: const PaymentTransactionKeys ACCTTYPE = PaymentTransactionKeys("ACCTTYPE");

    public: const PaymentTransactionKeys DISCOUNT = PaymentTransactionKeys("DISCOUNT");

    public: const PaymentTransactionKeys FIRSTNAME = PaymentTransactionKeys("FIRSTNAME");

    public: const PaymentTransactionKeys LASTNAME = PaymentTransactionKeys("LASNAME");

    public: const PaymentTransactionKeys SHIPFROMZIP = PaymentTransactionKeys("SHIPFROMZIP");

    public: const PaymentTransactionKeys PRENOTE = PaymentTransactionKeys("PRENOTE");

    public: const PaymentTransactionKeys CHKTYPE = PaymentTransactionKeys("CHKTYPE");

    public: const PaymentTransactionKeys DOB = PaymentTransactionKeys("DOB");

    public: const PaymentTransactionKeys PHONENUM = PaymentTransactionKeys("PHONENUM");

    public: const PaymentTransactionKeys SS = PaymentTransactionKeys("SS");

    public: const PaymentTransactionKeys COMPANYNAME = PaymentTransactionKeys("COMPANYNAME");

    public: const PaymentTransactionKeys COUNTRY = PaymentTransactionKeys("COUNTRY");

    public: const PaymentTransactionKeys FREIGHTAMT = PaymentTransactionKeys("FREIGHTAMT");

    public: const PaymentTransactionKeys SHIPTOCITY = PaymentTransactionKeys("SHIPTOCITY");

    public: const PaymentTransactionKeys SHIPTOFIRSTNAME = PaymentTransactionKeys("SHIPTOFIRSTNAME");

    public: const PaymentTransactionKeys SHIPTOLASTNAME = PaymentTransactionKeys("SHIPTOLASTNAME");

    public: const PaymentTransactionKeys SHIPTOSTATE = PaymentTransactionKeys("SHIPTOSTATE");

    public: const PaymentTransactionKeys SHIPTOSTREET = PaymentTransactionKeys("SHIPTOSTREET");

    public: const PaymentTransactionKeys SPECIAL1 = PaymentTransactionKeys("SPECIAL1");

    public: const PaymentTransactionKeys SPECIAL2 = PaymentTransactionKeys("SPECIAL2");

    public: const PaymentTransactionKeys SPECIAL3 = PaymentTransactionKeys("SPECIAL3");

    public: const PaymentTransactionKeys PARTNER = PaymentTransactionKeys("PARTNER");

    public: const PaymentTransactionKeys VENDOR = PaymentTransactionKeys("VENDOR");

    public: const PaymentTransactionKeys USER = PaymentTransactionKeys("USER");

    public: const PaymentTransactionKeys PWD = PaymentTransactionKeys("PWD");

    public: const PaymentTransactionKeys CHKNUM = PaymentTransactionKeys("CHKNUM");

    public: const PaymentTransactionKeys AVSADDR = PaymentTransactionKeys("AVSADDR");

    public: const PaymentTransactionKeys AVSZIP = PaymentTransactionKeys("AVSZIP");

    public: const PaymentTransactionKeys PNREF = PaymentTransactionKeys("PNREF");

    public: const PaymentTransactionKeys RESPMSG = PaymentTransactionKeys("RESPMSG");

    public: const PaymentTransactionKeys RESULT = PaymentTransactionKeys("RESULT");

    public: const PaymentTransactionKeys ORIGRESULT = PaymentTransactionKeys("ORIGRESULT");

    public: const PaymentTransactionKeys STATUS = PaymentTransactionKeys("STATUS");

    public: const PaymentTransactionKeys FRAUDCODE = PaymentTransactionKeys("FRAUDCODE");

    public: const PaymentTransactionKeys FRAUDMSG = PaymentTransactionKeys("FRAUDMSG");

    public: const PaymentTransactionKeys ERRCODE = PaymentTransactionKeys("ERRCODE");

    public: const PaymentTransactionKeys SCORE = PaymentTransactionKeys("SCORE");

    public: const PaymentTransactionKeys REASON1 = PaymentTransactionKeys("REASON1");

    public: const PaymentTransactionKeys REASON2 = PaymentTransactionKeys("REASON2");

    public: const PaymentTransactionKeys REASON3 = PaymentTransactionKeys("REASON3");

    public: const PaymentTransactionKeys EXCEPTION1 = PaymentTransactionKeys("EXCEPTION1");

    public: const PaymentTransactionKeys EXCEPTION2 = PaymentTransactionKeys("EXCEPTION2");

    public: const PaymentTransactionKeys EXCEPTION3 = PaymentTransactionKeys("EXCEPTION3");

    public: const PaymentTransactionKeys EXCEPTION4 = PaymentTransactionKeys("EXCEPTION4");

    public: const PaymentTransactionKeys EXCEPTION5 = PaymentTransactionKeys("EXCEPTION5");

    public: const PaymentTransactionKeys EXCEPTION6 = PaymentTransactionKeys("EXCEPTION6");

    public: const PaymentTransactionKeys EXCEPTION7 = PaymentTransactionKeys("EXCEPTION7");

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_H
