
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/order/OrderProcessorUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/generator/OrderIdGenerator.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/order/Order.h"


OrderProcessorUtil::OrderProcessorUtil() {
        }
        auto OrderProcessorUtil::instance_owner() -> OrderProcessorUtil* { static std::unique_ptr<OrderProcessorUtil> value(new OrderProcessorUtil()); return value.get(); }
OrderProcessorUtil* OrderProcessorUtil::instance = OrderProcessorUtil::instance_owner();

    auto OrderProcessorUtil::getInstance() -> OrderProcessorUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OrderProcessorUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto OrderProcessorUtil::process(std::string userName, Order* order) -> std::string{

    OrderItemsEntity* orderItems = new OrderItemsEntity();;
    

    OrderHistoryEntity* orderHistory = new OrderHistoryEntity();;
    
order->setId((new OrderIdGenerator())->getNext());
    
orderItems->insert(userName, order);
    
orderHistory->insert(userName, order);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ORDER_PROCESSED;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_CPP
