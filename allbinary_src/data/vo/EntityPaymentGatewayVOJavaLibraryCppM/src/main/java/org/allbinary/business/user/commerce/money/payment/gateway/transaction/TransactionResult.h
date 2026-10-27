
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class LogUtil;
class StringUtil;
class Tokenizer;
class CommonSeps;
class CommonStrings;
#include <org/allbinary/util/ABHashtable.h>
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h"
class PaymentTransactionKeysFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransactionResult
            : public virtual Object
        , public TransactionResultInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: HashMap<Object*, Object*>* keyValuePairs;

    private: std::string result;

public: TransactionResult(std::string result);

public: TransactionResult(HashMap<Object*, Object*>* keyValuePairs);

    public: std::string toString();

    public: HashMap<Object*, Object*>* toHashMap();

    private: BasicArrayList* getAllPossibleKeys();

    public: BasicArrayList* getValues();

    public: std::string getPnRef();

    public: std::string getRespMsg();

    public: std::string getResult();

    public: std::string getScore();

    public: std::string getStatus();

    public: std::string getFraudCode();

    public: std::string getFraudMsg();

    public: std::string getOrigResult();

    public: std::string getAvsAddr();

    public: std::string getAvsZip();

    public: std::string getErrCode();

    public: std::string getException1();

    public: std::string getException2();

    public: std::string getException3();

    public: std::string getException4();

    public: std::string getException5();

    public: std::string getException6();

    public: std::string getException7();

    public: std::string getReason1();

    public: std::string getReason2();

    public: std::string getReason3();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/tokens/Tokenizer.h>)
#include <org/allbinary/logic/string/tokens/Tokenizer.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h"
#endif

        #endif
    
