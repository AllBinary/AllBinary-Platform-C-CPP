
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Float.h"
        
#include <java/util/Calendar.h>
#include <java/util/HashMap.h>
#include <java/util/Random.h>
class BasicArrayList;
class BasicArrayListD;
class StoreFrontData;
class StoreFrontFactory;
class StoreFrontInterface;
class EntryData;
class HistoryDbInitInfo;
class UserData;
class BillingAddressData;
class ShippingAddressData;
class StreetAddress;
class Basket;
class BasketInterface;
class Order;
class OrderData;
class OrderHistory;
class OrderHistoryData;
class Money;
class PaymentData;
class PaymentInterface;
class TaxFactory;
class ShippingMethodData;
class ShippingMethods;
class ShippingInterface;
class OrderHistoryIdGenerator;
class TableDataFactory;
class BillingAddressesEntity;
class ShippingAddressesEntity;
class PaymentEntity;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class SuperCrypt;
class StringMaker;
class StringUtil;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderHistoryEntity: public AbSqlBean, public virtual OrderHistoryEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: const std::string tableName = "orderhistory";

public: OrderHistoryEntity();

    public: void insert(std::string userName, Order* order);

    public: void insert(BasicArrayList* values);

    public: void setStatus(std::string orderId, std::string status);

    public: void setPaymentMethod(std::string orderId, std::string paymentMethod);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getStoreOrders(StoreFrontInterface* storeFrontInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getOrders(std::string userName);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getOrders(std::string status, std::string fromDate, std::string toDate);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getOrders(std::string fromDate, std::string toDate);

                //@Throws(Exception.constructor)
            
    public: OrderHistory* getOrder(std::string id);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string dropTable();

                //@Throws(Exception.constructor)
            
    public: void update(HashMap<Object*, Object*>* whereHashMap, HashMap<Object*, Object*>* orderHashMap);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITY_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Random.h>)
#include <java/util/Random.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/HistoryDbInitInfo.h>)
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/BillingAddressData.h>)
#include <org/allbinary/business/user/address/BillingAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/ShippingAddressData.h>)
#include <org/allbinary/business/user/address/ShippingAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/basket/Basket.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/Basket.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/Order.h>)
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/PaymentData.h>)
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/tax/TaxFactory.h>)
#include <org/allbinary/business/user/commerce/money/tax/TaxFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethods.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethods.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>)
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>
#endif
#if __has_include(<org/allbinary/data/generator/OrderHistoryIdGenerator.h>)
#include <org/allbinary/data/generator/OrderHistoryIdGenerator.h>
#endif
#if __has_include(<org/allbinary/data/tables/TableDataFactory.h>)
#include <org/allbinary/data/tables/TableDataFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>)
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>)
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h>)
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/SuperCrypt.h>)
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include("org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h")
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h"
#endif

        #endif
    
