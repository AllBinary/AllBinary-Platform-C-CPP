
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITY_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransactionEntityInterface.h"

class TransactionEntity: public AbSqlBean, public TransactionEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string tableName = "vtrans";

public: TransactionEntity();

    public: void remove(std::string userName, std::string orderNumber);

    public: void add(std::string userName, std::string orderNumber, PaymentTransactionInterface paymentTransactionInterface);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITY_H
