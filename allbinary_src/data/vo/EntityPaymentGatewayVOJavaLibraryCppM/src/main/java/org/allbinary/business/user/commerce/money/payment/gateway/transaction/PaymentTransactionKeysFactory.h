
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

            #include "../../../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentTransactionKeys.h"

class PaymentTransactionKeysFactory
            : public Object
         {
        

    private: static const instance: PaymentTransactionKeysFactory = new PaymentTransactionKeysFactory();

    public static PaymentTransactionKeysFactory getInstance();

    public const TRXTYPE: PaymentTransactionKeys = new PaymentTransactionKeys("TRXTYPE");

    public const TENDER: PaymentTransactionKeys = new PaymentTransactionKeys("TENDER");

    public const ACCT: PaymentTransactionKeys = new PaymentTransactionKeys("ACCT");

    public const EXPDATE: PaymentTransactionKeys = new PaymentTransactionKeys("EXPDATE");

    public const AMT: PaymentTransactionKeys = new PaymentTransactionKeys("AMT");

    public const AUTHCODE: PaymentTransactionKeys = new PaymentTransactionKeys("AUTHCODE");

    public const MICR: PaymentTransactionKeys = new PaymentTransactionKeys("MICR");

    public const CHECKNUM: PaymentTransactionKeys = new PaymentTransactionKeys("CHECKNUM");

    public const NAME: PaymentTransactionKeys = new PaymentTransactionKeys("NAME");

    public const STREET: PaymentTransactionKeys = new PaymentTransactionKeys("STREET");

    public const CITY: PaymentTransactionKeys = new PaymentTransactionKeys("CITY");

    public const STATE: PaymentTransactionKeys = new PaymentTransactionKeys("STATE");

    public const ZIP: PaymentTransactionKeys = new PaymentTransactionKeys("ZIP");

    public const DL: PaymentTransactionKeys = new PaymentTransactionKeys("DL");

    public const EMAIL: PaymentTransactionKeys = new PaymentTransactionKeys("EMAIL");

    public const COMMENT1: PaymentTransactionKeys = new PaymentTransactionKeys("COMMENT1");

    public const COMMENT2: PaymentTransactionKeys = new PaymentTransactionKeys("COMMENT2");

    public const ORIGID: PaymentTransactionKeys = new PaymentTransactionKeys("ORIGID");

    public const PONUM: PaymentTransactionKeys = new PaymentTransactionKeys("PONUM");

    public const DESC: PaymentTransactionKeys = new PaymentTransactionKeys("PaymentTransactionDESC");

    public const DESC1TO4: PaymentTransactionKeys = new PaymentTransactionKeys("DESC1TO4");

    public const INVNUM: PaymentTransactionKeys = new PaymentTransactionKeys("INVNUM");

    public const SHIPTOZIP: PaymentTransactionKeys = new PaymentTransactionKeys("SHIPTOZIP");

    public const SWIPE: PaymentTransactionKeys = new PaymentTransactionKeys("SWIPE");

    public const TAXAMT: PaymentTransactionKeys = new PaymentTransactionKeys("TAXAMT");

    public const COMMCARD: PaymentTransactionKeys = new PaymentTransactionKeys("COMMCARD");

    public const DUTYAMT: PaymentTransactionKeys = new PaymentTransactionKeys("DUTYAMT");

    public const FRIEGHTAMT: PaymentTransactionKeys = new PaymentTransactionKeys("FRIEGHTAMT");

    public const ORDERDATE: PaymentTransactionKeys = new PaymentTransactionKeys("ORDERDATE");

    public const TAXEXEMPT: PaymentTransactionKeys = new PaymentTransactionKeys("TAXEXEMPT");

    public const COUNTRYCODE: PaymentTransactionKeys = new PaymentTransactionKeys("COUNTRYCODE");

    public const CUSTCODE: PaymentTransactionKeys = new PaymentTransactionKeys("CUSTCODE");

    public const CVV2: PaymentTransactionKeys = new PaymentTransactionKeys("CVV2");

    public const ABA: PaymentTransactionKeys = new PaymentTransactionKeys("ABA");

    public const ACCTTYPE: PaymentTransactionKeys = new PaymentTransactionKeys("ACCTTYPE");

    public const DISCOUNT: PaymentTransactionKeys = new PaymentTransactionKeys("DISCOUNT");

    public const FIRSTNAME: PaymentTransactionKeys = new PaymentTransactionKeys("FIRSTNAME");

    public const LASTNAME: PaymentTransactionKeys = new PaymentTransactionKeys("LASNAME");

    public const SHIPFROMZIP: PaymentTransactionKeys = new PaymentTransactionKeys("SHIPFROMZIP");

    public const PRENOTE: PaymentTransactionKeys = new PaymentTransactionKeys("PRENOTE");

    public const CHKTYPE: PaymentTransactionKeys = new PaymentTransactionKeys("CHKTYPE");

    public const DOB: PaymentTransactionKeys = new PaymentTransactionKeys("DOB");

    public const PHONENUM: PaymentTransactionKeys = new PaymentTransactionKeys("PHONENUM");

    public const SS: PaymentTransactionKeys = new PaymentTransactionKeys("SS");

    public const COMPANYNAME: PaymentTransactionKeys = new PaymentTransactionKeys("COMPANYNAME");

    public const COUNTRY: PaymentTransactionKeys = new PaymentTransactionKeys("COUNTRY");

    public const FREIGHTAMT: PaymentTransactionKeys = new PaymentTransactionKeys("FREIGHTAMT");

    public const SHIPTOCITY: PaymentTransactionKeys = new PaymentTransactionKeys("SHIPTOCITY");

    public const SHIPTOFIRSTNAME: PaymentTransactionKeys = new PaymentTransactionKeys("SHIPTOFIRSTNAME");

    public const SHIPTOLASTNAME: PaymentTransactionKeys = new PaymentTransactionKeys("SHIPTOLASTNAME");

    public const SHIPTOSTATE: PaymentTransactionKeys = new PaymentTransactionKeys("SHIPTOSTATE");

    public const SHIPTOSTREET: PaymentTransactionKeys = new PaymentTransactionKeys("SHIPTOSTREET");

    public const SPECIAL1: PaymentTransactionKeys = new PaymentTransactionKeys("SPECIAL1");

    public const SPECIAL2: PaymentTransactionKeys = new PaymentTransactionKeys("SPECIAL2");

    public const SPECIAL3: PaymentTransactionKeys = new PaymentTransactionKeys("SPECIAL3");

    public const PARTNER: PaymentTransactionKeys = new PaymentTransactionKeys("PARTNER");

    public const VENDOR: PaymentTransactionKeys = new PaymentTransactionKeys("VENDOR");

    public const USER: PaymentTransactionKeys = new PaymentTransactionKeys("USER");

    public const PWD: PaymentTransactionKeys = new PaymentTransactionKeys("PWD");

    public const CHKNUM: PaymentTransactionKeys = new PaymentTransactionKeys("CHKNUM");

    public const AVSADDR: PaymentTransactionKeys = new PaymentTransactionKeys("AVSADDR");

    public const AVSZIP: PaymentTransactionKeys = new PaymentTransactionKeys("AVSZIP");

    public const PNREF: PaymentTransactionKeys = new PaymentTransactionKeys("PNREF");

    public const RESPMSG: PaymentTransactionKeys = new PaymentTransactionKeys("RESPMSG");

    public const RESULT: PaymentTransactionKeys = new PaymentTransactionKeys("RESULT");

    public const ORIGRESULT: PaymentTransactionKeys = new PaymentTransactionKeys("ORIGRESULT");

    public const STATUS: PaymentTransactionKeys = new PaymentTransactionKeys("STATUS");

    public const FRAUDCODE: PaymentTransactionKeys = new PaymentTransactionKeys("FRAUDCODE");

    public const FRAUDMSG: PaymentTransactionKeys = new PaymentTransactionKeys("FRAUDMSG");

    public const ERRCODE: PaymentTransactionKeys = new PaymentTransactionKeys("ERRCODE");

    public const SCORE: PaymentTransactionKeys = new PaymentTransactionKeys("SCORE");

    public const REASON1: PaymentTransactionKeys = new PaymentTransactionKeys("REASON1");

    public const REASON2: PaymentTransactionKeys = new PaymentTransactionKeys("REASON2");

    public const REASON3: PaymentTransactionKeys = new PaymentTransactionKeys("REASON3");

    public const EXCEPTION1: PaymentTransactionKeys = new PaymentTransactionKeys("EXCEPTION1");

    public const EXCEPTION2: PaymentTransactionKeys = new PaymentTransactionKeys("EXCEPTION2");

    public const EXCEPTION3: PaymentTransactionKeys = new PaymentTransactionKeys("EXCEPTION3");

    public const EXCEPTION4: PaymentTransactionKeys = new PaymentTransactionKeys("EXCEPTION4");

    public const EXCEPTION5: PaymentTransactionKeys = new PaymentTransactionKeys("EXCEPTION5");

    public const EXCEPTION6: PaymentTransactionKeys = new PaymentTransactionKeys("EXCEPTION6");

    public const EXCEPTION7: PaymentTransactionKeys = new PaymentTransactionKeys("EXCEPTION7");

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_H
