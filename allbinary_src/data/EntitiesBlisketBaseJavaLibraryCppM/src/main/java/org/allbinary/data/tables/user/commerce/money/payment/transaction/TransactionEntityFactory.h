
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITYFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITYFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransactionEntity.h"

class TransactionEntityFactory
            : public Object
         {

    private: static TransactionEntityFactory instance() { return TransactionEntityFactory(); }

    public: static TransactionEntityFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransactionEntityFactory();

    public: TransactionEntity getTransactionEntityInstance();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITYFACTORY_H
