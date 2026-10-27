
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULTINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULTINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransactionResultInterface {

    public: virtual std::string toString() = 0;

    public: virtual BasicArrayList* getValues() = 0;

    public: virtual std::string getResult() = 0;

    public: virtual std::string getPnRef() = 0;

    public: virtual std::string getRespMsg() = 0;

    public: virtual std::string getAvsAddr() = 0;

    public: virtual std::string getAvsZip() = 0;

    public: virtual std::string getOrigResult() = 0;

    public: virtual std::string getStatus() = 0;

    public: virtual std::string getFraudCode() = 0;

    public: virtual std::string getFraudMsg() = 0;

    public: virtual std::string getErrCode() = 0;

    public: virtual std::string getScore() = 0;

    public: virtual std::string getReason1() = 0;

    public: virtual std::string getReason2() = 0;

    public: virtual std::string getReason3() = 0;

    public: virtual std::string getException1() = 0;

    public: virtual std::string getException2() = 0;

    public: virtual std::string getException3() = 0;

    public: virtual std::string getException4() = 0;

    public: virtual std::string getException5() = 0;

    public: virtual std::string getException6() = 0;

    public: virtual std::string getException7() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULTINTERFACE_H
