
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

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransactionResultInterface.h"
#include "PaymentTransactionKeysFactory.h"

class TransactionResult
            : public Object
        : public TransactionResultInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HashMap<any, any> keyValuePairs;

    private: std::string result;

public: TransactionResult(std::string result);

public: TransactionResult(HashMap<any, any> keyValuePairs);

    public: std::string toString();

    public: HashMap<any, any> toHashMap();

    private: Vector getAllPossibleKeys();

    public: Vector getValues();

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
