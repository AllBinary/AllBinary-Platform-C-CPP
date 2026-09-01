
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

            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../../java/lang/Long.h"
        
            #include "../../../../../../../../java/lang/Float.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Random.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/BillingAddressData.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/Basket.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>

      
#include <org/allbinary/business/user/commerce/money/tax/TaxFactory.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethods.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>

      
#include <org/allbinary/data/generator/OrderHistoryIdGenerator.h>

      
#include <org/allbinary/data/tables/TableDataFactory.h>

      
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderHistoryEntityInterface.h"

class OrderHistoryEntity: public AbSqlBean, public OrderHistoryEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "orderhistory";

public: OrderHistoryEntity();

    public: void insert(std::string userName, Order order);

    public: void insert(Vector values);

    public: void setStatus(std::string orderId, std::string status);

    public: void setPaymentMethod(std::string orderId, std::string paymentMethod);

                //@Throws(Exception.constructor)
            
    public: Vector getStoreOrders(StoreFrontInterface storeFrontInterface);

                //@Throws(Exception.constructor)
            
    public: Vector getOrders(std::string userName);

                //@Throws(Exception.constructor)
            
    public: Vector getOrders(std::string status, std::string fromDate, std::string toDate);

                //@Throws(Exception.constructor)
            
    public: Vector getOrders(std::string fromDate, std::string toDate);

                //@Throws(Exception.constructor)
            
    public: OrderHistory getOrder(std::string id);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string dropTable();

                //@Throws(Exception.constructor)
            
    public: void update(HashMap<any, any> whereHashMap, HashMap<any, any> orderHashMap);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITY_H
