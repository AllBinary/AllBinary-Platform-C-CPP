
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PaymentTransactionKeys;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentTransactionKeysFactory
            : public virtual Object
         {

    private: static PaymentTransactionKeysFactory* instance_owner();
    private: static PaymentTransactionKeysFactory* instance;

    public: static PaymentTransactionKeysFactory* getInstance();


            
    public: PaymentTransactionKeysFactory();
        
    public: PaymentTransactionKeys* TRXTYPE;

    public: PaymentTransactionKeys* TENDER;

    public: PaymentTransactionKeys* ACCT;

    public: PaymentTransactionKeys* EXPDATE;

    public: PaymentTransactionKeys* AMT;

    public: PaymentTransactionKeys* AUTHCODE;

    public: PaymentTransactionKeys* MICR;

    public: PaymentTransactionKeys* CHECKNUM;

    public: PaymentTransactionKeys* NAME;

    public: PaymentTransactionKeys* STREET;

    public: PaymentTransactionKeys* CITY;

    public: PaymentTransactionKeys* STATE;

    public: PaymentTransactionKeys* ZIP;

    public: PaymentTransactionKeys* DL;

    public: PaymentTransactionKeys* EMAIL;

    public: PaymentTransactionKeys* COMMENT1;

    public: PaymentTransactionKeys* COMMENT2;

    public: PaymentTransactionKeys* ORIGID;

    public: PaymentTransactionKeys* PONUM;

    public: PaymentTransactionKeys* DESC;

    public: PaymentTransactionKeys* DESC1TO4;

    public: PaymentTransactionKeys* INVNUM;

    public: PaymentTransactionKeys* SHIPTOZIP;

    public: PaymentTransactionKeys* SWIPE;

    public: PaymentTransactionKeys* TAXAMT;

    public: PaymentTransactionKeys* COMMCARD;

    public: PaymentTransactionKeys* DUTYAMT;

    public: PaymentTransactionKeys* FRIEGHTAMT;

    public: PaymentTransactionKeys* ORDERDATE;

    public: PaymentTransactionKeys* TAXEXEMPT;

    public: PaymentTransactionKeys* COUNTRYCODE;

    public: PaymentTransactionKeys* CUSTCODE;

    public: PaymentTransactionKeys* CVV2;

    public: PaymentTransactionKeys* ABA;

    public: PaymentTransactionKeys* ACCTTYPE;

    public: PaymentTransactionKeys* DISCOUNT;

    public: PaymentTransactionKeys* FIRSTNAME;

    public: PaymentTransactionKeys* LASTNAME;

    public: PaymentTransactionKeys* SHIPFROMZIP;

    public: PaymentTransactionKeys* PRENOTE;

    public: PaymentTransactionKeys* CHKTYPE;

    public: PaymentTransactionKeys* DOB;

    public: PaymentTransactionKeys* PHONENUM;

    public: PaymentTransactionKeys* SS;

    public: PaymentTransactionKeys* COMPANYNAME;

    public: PaymentTransactionKeys* COUNTRY;

    public: PaymentTransactionKeys* FREIGHTAMT;

    public: PaymentTransactionKeys* SHIPTOCITY;

    public: PaymentTransactionKeys* SHIPTOFIRSTNAME;

    public: PaymentTransactionKeys* SHIPTOLASTNAME;

    public: PaymentTransactionKeys* SHIPTOSTATE;

    public: PaymentTransactionKeys* SHIPTOSTREET;

    public: PaymentTransactionKeys* SPECIAL1;

    public: PaymentTransactionKeys* SPECIAL2;

    public: PaymentTransactionKeys* SPECIAL3;

    public: PaymentTransactionKeys* PARTNER;

    public: PaymentTransactionKeys* VENDOR;

    public: PaymentTransactionKeys* USER;

    public: PaymentTransactionKeys* PWD;

    public: PaymentTransactionKeys* CHKNUM;

    public: PaymentTransactionKeys* AVSADDR;

    public: PaymentTransactionKeys* AVSZIP;

    public: PaymentTransactionKeys* PNREF;

    public: PaymentTransactionKeys* RESPMSG;

    public: PaymentTransactionKeys* RESULT;

    public: PaymentTransactionKeys* ORIGRESULT;

    public: PaymentTransactionKeys* STATUS;

    public: PaymentTransactionKeys* FRAUDCODE;

    public: PaymentTransactionKeys* FRAUDMSG;

    public: PaymentTransactionKeys* ERRCODE;

    public: PaymentTransactionKeys* SCORE;

    public: PaymentTransactionKeys* REASON1;

    public: PaymentTransactionKeys* REASON2;

    public: PaymentTransactionKeys* REASON3;

    public: PaymentTransactionKeys* EXCEPTION1;

    public: PaymentTransactionKeys* EXCEPTION2;

    public: PaymentTransactionKeys* EXCEPTION3;

    public: PaymentTransactionKeys* EXCEPTION4;

    public: PaymentTransactionKeys* EXCEPTION5;

    public: PaymentTransactionKeys* EXCEPTION6;

    public: PaymentTransactionKeys* EXCEPTION7;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeys.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeys.h"
#endif

        #endif
    
