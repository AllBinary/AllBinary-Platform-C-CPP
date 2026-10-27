
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeys.h"


PaymentTransactionKeysFactory::PaymentTransactionKeysFactory() : TRXTYPE(new PaymentTransactionKeys("TRXTYPE")), TENDER(new PaymentTransactionKeys("TENDER")), ACCT(new PaymentTransactionKeys("ACCT")), EXPDATE(new PaymentTransactionKeys("EXPDATE")), AMT(new PaymentTransactionKeys("AMT")), AUTHCODE(new PaymentTransactionKeys("AUTHCODE")), MICR(new PaymentTransactionKeys("MICR")), CHECKNUM(new PaymentTransactionKeys("CHECKNUM")), NAME(new PaymentTransactionKeys("NAME")), STREET(new PaymentTransactionKeys("STREET")), CITY(new PaymentTransactionKeys("CITY")), STATE(new PaymentTransactionKeys("STATE")), ZIP(new PaymentTransactionKeys("ZIP")), DL(new PaymentTransactionKeys("DL")), EMAIL(new PaymentTransactionKeys("EMAIL")), COMMENT1(new PaymentTransactionKeys("COMMENT1")), COMMENT2(new PaymentTransactionKeys("COMMENT2")), ORIGID(new PaymentTransactionKeys("ORIGID")), PONUM(new PaymentTransactionKeys("PONUM")), DESC(new PaymentTransactionKeys("PaymentTransactionDESC")), DESC1TO4(new PaymentTransactionKeys("DESC1TO4")), INVNUM(new PaymentTransactionKeys("INVNUM")), SHIPTOZIP(new PaymentTransactionKeys("SHIPTOZIP")), SWIPE(new PaymentTransactionKeys("SWIPE")), TAXAMT(new PaymentTransactionKeys("TAXAMT")), COMMCARD(new PaymentTransactionKeys("COMMCARD")), DUTYAMT(new PaymentTransactionKeys("DUTYAMT")), FRIEGHTAMT(new PaymentTransactionKeys("FRIEGHTAMT")), ORDERDATE(new PaymentTransactionKeys("ORDERDATE")), TAXEXEMPT(new PaymentTransactionKeys("TAXEXEMPT")), COUNTRYCODE(new PaymentTransactionKeys("COUNTRYCODE")), CUSTCODE(new PaymentTransactionKeys("CUSTCODE")), CVV2(new PaymentTransactionKeys("CVV2")), ABA(new PaymentTransactionKeys("ABA")), ACCTTYPE(new PaymentTransactionKeys("ACCTTYPE")), DISCOUNT(new PaymentTransactionKeys("DISCOUNT")), FIRSTNAME(new PaymentTransactionKeys("FIRSTNAME")), LASTNAME(new PaymentTransactionKeys("LASNAME")), SHIPFROMZIP(new PaymentTransactionKeys("SHIPFROMZIP")), PRENOTE(new PaymentTransactionKeys("PRENOTE")), CHKTYPE(new PaymentTransactionKeys("CHKTYPE")), DOB(new PaymentTransactionKeys("DOB")), PHONENUM(new PaymentTransactionKeys("PHONENUM")), SS(new PaymentTransactionKeys("SS")), COMPANYNAME(new PaymentTransactionKeys("COMPANYNAME")), COUNTRY(new PaymentTransactionKeys("COUNTRY")), FREIGHTAMT(new PaymentTransactionKeys("FREIGHTAMT")), SHIPTOCITY(new PaymentTransactionKeys("SHIPTOCITY")), SHIPTOFIRSTNAME(new PaymentTransactionKeys("SHIPTOFIRSTNAME")), SHIPTOLASTNAME(new PaymentTransactionKeys("SHIPTOLASTNAME")), SHIPTOSTATE(new PaymentTransactionKeys("SHIPTOSTATE")), SHIPTOSTREET(new PaymentTransactionKeys("SHIPTOSTREET")), SPECIAL1(new PaymentTransactionKeys("SPECIAL1")), SPECIAL2(new PaymentTransactionKeys("SPECIAL2")), SPECIAL3(new PaymentTransactionKeys("SPECIAL3")), PARTNER(new PaymentTransactionKeys("PARTNER")), VENDOR(new PaymentTransactionKeys("VENDOR")), USER(new PaymentTransactionKeys("USER")), PWD(new PaymentTransactionKeys("PWD")), CHKNUM(new PaymentTransactionKeys("CHKNUM")), AVSADDR(new PaymentTransactionKeys("AVSADDR")), AVSZIP(new PaymentTransactionKeys("AVSZIP")), PNREF(new PaymentTransactionKeys("PNREF")), RESPMSG(new PaymentTransactionKeys("RESPMSG")), RESULT(new PaymentTransactionKeys("RESULT")), ORIGRESULT(new PaymentTransactionKeys("ORIGRESULT")), STATUS(new PaymentTransactionKeys("STATUS")), FRAUDCODE(new PaymentTransactionKeys("FRAUDCODE")), FRAUDMSG(new PaymentTransactionKeys("FRAUDMSG")), ERRCODE(new PaymentTransactionKeys("ERRCODE")), SCORE(new PaymentTransactionKeys("SCORE")), REASON1(new PaymentTransactionKeys("REASON1")), REASON2(new PaymentTransactionKeys("REASON2")), REASON3(new PaymentTransactionKeys("REASON3")), EXCEPTION1(new PaymentTransactionKeys("EXCEPTION1")), EXCEPTION2(new PaymentTransactionKeys("EXCEPTION2")), EXCEPTION3(new PaymentTransactionKeys("EXCEPTION3")), EXCEPTION4(new PaymentTransactionKeys("EXCEPTION4")), EXCEPTION5(new PaymentTransactionKeys("EXCEPTION5")), EXCEPTION6(new PaymentTransactionKeys("EXCEPTION6")), EXCEPTION7(new PaymentTransactionKeys("EXCEPTION7")) {
        }
        auto PaymentTransactionKeysFactory::instance_owner() -> PaymentTransactionKeysFactory* { static std::unique_ptr<PaymentTransactionKeysFactory> value(new PaymentTransactionKeysFactory()); return value.get(); }
PaymentTransactionKeysFactory* PaymentTransactionKeysFactory::instance = PaymentTransactionKeysFactory::instance_owner();

    auto PaymentTransactionKeysFactory::getInstance() -> PaymentTransactionKeysFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentTransactionKeysFactory::instance;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_PAYMENTTRANSACTIONKEYSFACTORY_CPP
