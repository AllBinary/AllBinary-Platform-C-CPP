
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

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderHistoryEntityInterface: public BasicDataTableInterface {
        

    insert(string userName, Order order);

    setStatus(string orderId, string status);

    setPaymentMethod(string orderId, string status);

                //@Throws(Exception.constructor)
            
    Vector getStoreOrders(StoreFrontInterface storeFrontInterface);

                //@Throws(Exception.constructor)
            
    Vector getOrders(string userName);

                //@Throws(Exception.constructor)
            
    Vector getOrders(string status, string fromDate, string toDate);

                //@Throws(Exception.constructor)
            
    OrderHistory getOrder(string id);

                //@Throws(Exception.constructor)
            
    update(HashMap<any, any> whereHashMap, HashMap<any, any> orderHashMap);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYENTITYINTERFACE_H
