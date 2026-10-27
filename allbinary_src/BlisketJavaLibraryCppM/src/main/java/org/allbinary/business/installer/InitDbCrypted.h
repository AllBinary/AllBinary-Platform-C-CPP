
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class InitInfoEntity;
class DatabaseConnectionInfoInterface;
class DbConnectionInfo;
class HistoryDbInitInfo;
class InventoryDbInitInfo;
class LogDbInitInfo;
class StaticPagesDbInitInfo;
class UserDbInitInfo;
class StoreFrontsEntityFactory;
class LogTableEntityFactory;
class StaticPagesEntityFactory;
class TransformInfoEntityBuilder;
class UserEntityFactory;
class BillingAddressesEntityFactory;
class ShippingAddressesEntityFactory;
class InventoryEntityFactory;
class OrderHistoryEntityFactory;
class OrderItemsEntityFactory;
class PaymentEntityFactory;
class PaymentGatewayEntityFactory;
class TransactionEntityFactory;
class TransactionResultEntityFactory;
class QuoteRequestEntityFactory;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbDatabaseManagement.h>
class AbDataOutputStream;
class DataOutputStreamFactory;
class AbFile;
class FileFactory;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Warning you must have sql root access
class InitDbCrypted: public AbDatabaseManagement {

    /*protected*/ public: LogUtil* logUtil;

    private: UserDbInitInfo* userDbInitInfo;

    private: InventoryDbInitInfo* inventoryDbInitInfo;

    private: HistoryDbInitInfo* historyDbInitInfo;

    private: StaticPagesDbInitInfo* staticpagesDbInitInfo;

    private: LogDbInitInfo* logDbInitInfo;

    private: const std::string SQL_FILE = "initWeblisket.sql";

public: InitDbCrypted(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);

    public: bool addUsers();

    public: bool addDatabases();

    public: bool addTables();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_H_COMPLETE
        #if __has_include(<org/allbinary/business/init/InitInfoEntity.h>)
#include <org/allbinary/business/init/InitInfoEntity.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>)
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>
#endif
#if __has_include(<org/allbinary/business/init/db/DbConnectionInfo.h>)
#include <org/allbinary/business/init/db/DbConnectionInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/HistoryDbInitInfo.h>)
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/InventoryDbInitInfo.h>)
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/LogDbInitInfo.h>)
#include <org/allbinary/business/init/db/LogDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/StaticPagesDbInitInfo.h>)
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/init/db/UserDbInitInfo.h>)
#include <org/allbinary/business/init/db/UserDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>)
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/log/LogTableEntityFactory.h>)
#include <org/allbinary/data/tables/log/LogTableEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/staticpages/StaticPagesEntityFactory.h>)
#include <org/allbinary/data/tables/staticpages/StaticPagesEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/UserEntityFactory.h>)
#include <org/allbinary/data/tables/user/UserEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h>)
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>)
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionResultEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionResultEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>)
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbDatabaseManagement.h>)
#include <org/allbinary/logic/communication/sql/AbDatabaseManagement.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbDataOutputStream.h>)
#include <org/allbinary/logic/io/AbDataOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/DataOutputStreamFactory.h>)
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileFactory.h>)
#include <org/allbinary/logic/io/file/FileFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
