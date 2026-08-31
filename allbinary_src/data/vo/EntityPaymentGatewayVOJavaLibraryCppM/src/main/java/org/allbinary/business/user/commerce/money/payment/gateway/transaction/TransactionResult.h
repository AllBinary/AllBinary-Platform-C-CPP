
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: keyValuePairs: HashMap<any, any>;

    private: result: string;

public constructor (string result);

public constructor (HashMap<any, any> keyValuePairs);

    public string toString();

    public HashMap<any, any> toHashMap();

    Vector getAllPossibleKeys();

    public Vector getValues();

    public string getPnRef();

    public string getRespMsg();

    public string getResult();

    public string getScore();

    public string getStatus();

    public string getFraudCode();

    public string getFraudMsg();

    public string getOrigResult();

    public string getAvsAddr();

    public string getAvsZip();

    public string getErrCode();

    public string getException1();

    public string getException2();

    public string getException3();

    public string getException4();

    public string getException5();

    public string getException6();

    public string getException7();

    public string getReason1();

    public string getReason2();

    public string getReason3();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_H
