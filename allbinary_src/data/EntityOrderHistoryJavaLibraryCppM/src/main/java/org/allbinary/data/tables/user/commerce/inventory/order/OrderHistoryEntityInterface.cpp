
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderHistoryEntityInterface: public BasicDataTableInterface {

    void insert(std::string userName, Order order)

    void setStatus(std::string orderId, std::string status)

    void setPaymentMethod(std::string orderId, std::string status)

                //@Throws(Exception.constructor)
            
    Vector getStoreOrders(StoreFrontInterface storeFrontInterface)

                //@Throws(Exception.constructor)
            
    Vector getOrders(std::string userName)

                //@Throws(Exception.constructor)
            
    Vector getOrders(std::string status, std::string fromDate, std::string toDate)

                //@Throws(Exception.constructor)
            
    OrderHistory getOrder(std::string id)

                //@Throws(Exception.constructor)
            
    void update(HashMap<any, any> whereHashMap, HashMap<any, any> orderHashMap)

};

            

