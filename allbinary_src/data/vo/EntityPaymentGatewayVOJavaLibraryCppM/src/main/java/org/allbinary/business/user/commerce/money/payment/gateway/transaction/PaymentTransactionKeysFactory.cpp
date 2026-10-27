
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeys.h"

class PaymentTransactionKeysFactory
            : public Object
         {

    private: static PaymentTransactionKeysFactory* instance() { static std::unique_ptr<PaymentTransactionKeysFactory> value(new PaymentTransactionKeysFactory()); return value.get(); }

    public: static PaymentTransactionKeysFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentTransactionKeysFactory::instance();
    
}


    public: PaymentTransactionKeys* TRXTYPE = new PaymentTransactionKeys("TRXTYPE");

    public: PaymentTransactionKeys* TENDER = new PaymentTransactionKeys("TENDER");

    public: PaymentTransactionKeys* ACCT = new PaymentTransactionKeys("ACCT");

    public: PaymentTransactionKeys* EXPDATE = new PaymentTransactionKeys("EXPDATE");

    public: PaymentTransactionKeys* AMT = new PaymentTransactionKeys("AMT");

    public: PaymentTransactionKeys* AUTHCODE = new PaymentTransactionKeys("AUTHCODE");

    public: PaymentTransactionKeys* MICR = new PaymentTransactionKeys("MICR");

    public: PaymentTransactionKeys* CHECKNUM = new PaymentTransactionKeys("CHECKNUM");

    public: PaymentTransactionKeys* NAME = new PaymentTransactionKeys("NAME");

    public: PaymentTransactionKeys* STREET = new PaymentTransactionKeys("STREET");

    public: PaymentTransactionKeys* CITY = new PaymentTransactionKeys("CITY");

    public: PaymentTransactionKeys* STATE = new PaymentTransactionKeys("STATE");

    public: PaymentTransactionKeys* ZIP = new PaymentTransactionKeys("ZIP");

    public: PaymentTransactionKeys* DL = new PaymentTransactionKeys("DL");

    public: PaymentTransactionKeys* EMAIL = new PaymentTransactionKeys("EMAIL");

    public: PaymentTransactionKeys* COMMENT1 = new PaymentTransactionKeys("COMMENT1");

    public: PaymentTransactionKeys* COMMENT2 = new PaymentTransactionKeys("COMMENT2");

    public: PaymentTransactionKeys* ORIGID = new PaymentTransactionKeys("ORIGID");

    public: PaymentTransactionKeys* PONUM = new PaymentTransactionKeys("PONUM");

    public: PaymentTransactionKeys* DESC = new PaymentTransactionKeys("PaymentTransactionDESC");

    public: PaymentTransactionKeys* DESC1TO4 = new PaymentTransactionKeys("DESC1TO4");

    public: PaymentTransactionKeys* INVNUM = new PaymentTransactionKeys("INVNUM");

    public: PaymentTransactionKeys* SHIPTOZIP = new PaymentTransactionKeys("SHIPTOZIP");

    public: PaymentTransactionKeys* SWIPE = new PaymentTransactionKeys("SWIPE");

    public: PaymentTransactionKeys* TAXAMT = new PaymentTransactionKeys("TAXAMT");

    public: PaymentTransactionKeys* COMMCARD = new PaymentTransactionKeys("COMMCARD");

    public: PaymentTransactionKeys* DUTYAMT = new PaymentTransactionKeys("DUTYAMT");

    public: PaymentTransactionKeys* FRIEGHTAMT = new PaymentTransactionKeys("FRIEGHTAMT");

    public: PaymentTransactionKeys* ORDERDATE = new PaymentTransactionKeys("ORDERDATE");

    public: PaymentTransactionKeys* TAXEXEMPT = new PaymentTransactionKeys("TAXEXEMPT");

    public: PaymentTransactionKeys* COUNTRYCODE = new PaymentTransactionKeys("COUNTRYCODE");

    public: PaymentTransactionKeys* CUSTCODE = new PaymentTransactionKeys("CUSTCODE");

    public: PaymentTransactionKeys* CVV2 = new PaymentTransactionKeys("CVV2");

    public: PaymentTransactionKeys* ABA = new PaymentTransactionKeys("ABA");

    public: PaymentTransactionKeys* ACCTTYPE = new PaymentTransactionKeys("ACCTTYPE");

    public: PaymentTransactionKeys* DISCOUNT = new PaymentTransactionKeys("DISCOUNT");

    public: PaymentTransactionKeys* FIRSTNAME = new PaymentTransactionKeys("FIRSTNAME");

    public: PaymentTransactionKeys* LASTNAME = new PaymentTransactionKeys("LASNAME");

    public: PaymentTransactionKeys* SHIPFROMZIP = new PaymentTransactionKeys("SHIPFROMZIP");

    public: PaymentTransactionKeys* PRENOTE = new PaymentTransactionKeys("PRENOTE");

    public: PaymentTransactionKeys* CHKTYPE = new PaymentTransactionKeys("CHKTYPE");

    public: PaymentTransactionKeys* DOB = new PaymentTransactionKeys("DOB");

    public: PaymentTransactionKeys* PHONENUM = new PaymentTransactionKeys("PHONENUM");

    public: PaymentTransactionKeys* SS = new PaymentTransactionKeys("SS");

    public: PaymentTransactionKeys* COMPANYNAME = new PaymentTransactionKeys("COMPANYNAME");

    public: PaymentTransactionKeys* COUNTRY = new PaymentTransactionKeys("COUNTRY");

    public: PaymentTransactionKeys* FREIGHTAMT = new PaymentTransactionKeys("FREIGHTAMT");

    public: PaymentTransactionKeys* SHIPTOCITY = new PaymentTransactionKeys("SHIPTOCITY");

    public: PaymentTransactionKeys* SHIPTOFIRSTNAME = new PaymentTransactionKeys("SHIPTOFIRSTNAME");

    public: PaymentTransactionKeys* SHIPTOLASTNAME = new PaymentTransactionKeys("SHIPTOLASTNAME");

    public: PaymentTransactionKeys* SHIPTOSTATE = new PaymentTransactionKeys("SHIPTOSTATE");

    public: PaymentTransactionKeys* SHIPTOSTREET = new PaymentTransactionKeys("SHIPTOSTREET");

    public: PaymentTransactionKeys* SPECIAL1 = new PaymentTransactionKeys("SPECIAL1");

    public: PaymentTransactionKeys* SPECIAL2 = new PaymentTransactionKeys("SPECIAL2");

    public: PaymentTransactionKeys* SPECIAL3 = new PaymentTransactionKeys("SPECIAL3");

    public: PaymentTransactionKeys* PARTNER = new PaymentTransactionKeys("PARTNER");

    public: PaymentTransactionKeys* VENDOR = new PaymentTransactionKeys("VENDOR");

    public: PaymentTransactionKeys* USER = new PaymentTransactionKeys("USER");

    public: PaymentTransactionKeys* PWD = new PaymentTransactionKeys("PWD");

    public: PaymentTransactionKeys* CHKNUM = new PaymentTransactionKeys("CHKNUM");

    public: PaymentTransactionKeys* AVSADDR = new PaymentTransactionKeys("AVSADDR");

    public: PaymentTransactionKeys* AVSZIP = new PaymentTransactionKeys("AVSZIP");

    public: PaymentTransactionKeys* PNREF = new PaymentTransactionKeys("PNREF");

    public: PaymentTransactionKeys* RESPMSG = new PaymentTransactionKeys("RESPMSG");

    public: PaymentTransactionKeys* RESULT = new PaymentTransactionKeys("RESULT");

    public: PaymentTransactionKeys* ORIGRESULT = new PaymentTransactionKeys("ORIGRESULT");

    public: PaymentTransactionKeys* STATUS = new PaymentTransactionKeys("STATUS");

    public: PaymentTransactionKeys* FRAUDCODE = new PaymentTransactionKeys("FRAUDCODE");

    public: PaymentTransactionKeys* FRAUDMSG = new PaymentTransactionKeys("FRAUDMSG");

    public: PaymentTransactionKeys* ERRCODE = new PaymentTransactionKeys("ERRCODE");

    public: PaymentTransactionKeys* SCORE = new PaymentTransactionKeys("SCORE");

    public: PaymentTransactionKeys* REASON1 = new PaymentTransactionKeys("REASON1");

    public: PaymentTransactionKeys* REASON2 = new PaymentTransactionKeys("REASON2");

    public: PaymentTransactionKeys* REASON3 = new PaymentTransactionKeys("REASON3");

    public: PaymentTransactionKeys* EXCEPTION1 = new PaymentTransactionKeys("EXCEPTION1");

    public: PaymentTransactionKeys* EXCEPTION2 = new PaymentTransactionKeys("EXCEPTION2");

    public: PaymentTransactionKeys* EXCEPTION3 = new PaymentTransactionKeys("EXCEPTION3");

    public: PaymentTransactionKeys* EXCEPTION4 = new PaymentTransactionKeys("EXCEPTION4");

    public: PaymentTransactionKeys* EXCEPTION5 = new PaymentTransactionKeys("EXCEPTION5");

    public: PaymentTransactionKeys* EXCEPTION6 = new PaymentTransactionKeys("EXCEPTION6");

    public: PaymentTransactionKeys* EXCEPTION7 = new PaymentTransactionKeys("EXCEPTION7");

};

            

