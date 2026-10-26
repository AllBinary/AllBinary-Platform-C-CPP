
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_H
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/init/InitInfoEntity.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>

      
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>

      
#include <org/allbinary/business/init/db/LogDbInitInfo.h>

      
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>

      
#include <org/allbinary/data/tables/log/LogTableEntityFactory.h>

      
#include <org/allbinary/data/tables/staticpages/StaticPagesEntityFactory.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionResultEntityFactory.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbDatabaseManagement.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Warning you must have sql root access
class InitDbCrypted: public AbDatabaseManagement {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: UserDbInitInfo userDbInitInfo;

    private: InventoryDbInitInfo inventoryDbInitInfo;

    private: HistoryDbInitInfo historyDbInitInfo;

    private: StaticPagesDbInitInfo staticpagesDbInitInfo;

    private: LogDbInitInfo logDbInitInfo;

    private: const std::string SQL_FILE = "initWeblisket.sql";

public: InitDbCrypted(DatabaseConnectionInfoInterface databaseConnectionInfoInterface);

    public: Boolean addUsers();

    public: Boolean addDatabases();

    public: Boolean addTables();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_H
