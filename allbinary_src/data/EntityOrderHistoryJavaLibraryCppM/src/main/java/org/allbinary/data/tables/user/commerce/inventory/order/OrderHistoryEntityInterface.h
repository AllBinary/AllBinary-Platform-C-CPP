
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITYINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITYINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderHistoryEntityInterface: public BasicDataTableInterface {

    public: virtual void insert(std::string userName, Order* order) = 0;

    public: virtual void setStatus(std::string orderId, std::string status) = 0;

    public: virtual void setPaymentMethod(std::string orderId, std::string status) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getStoreOrders(StoreFrontInterface* storeFrontInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getOrders(std::string userName) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getOrders(std::string status, std::string fromDate, std::string toDate) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual OrderHistory* getOrder(std::string id) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void update(HashMap<Object*, Object*>* whereHashMap, HashMap<Object*, Object*>* orderHashMap) = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITYINTERFACE_H
