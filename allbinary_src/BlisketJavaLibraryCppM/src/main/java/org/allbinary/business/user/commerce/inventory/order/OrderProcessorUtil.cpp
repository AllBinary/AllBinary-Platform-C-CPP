
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

class OrderProcessorUtil
            : public Object
         {

    private: static OrderProcessorUtil* instance() { static std::unique_ptr<OrderProcessorUtil> value(new OrderProcessorUtil()); return value.get(); }

    public: static OrderProcessorUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OrderProcessorUtil::instance();
    
}


    private: const std::string ORDER_PROCESSED = "Order Processed";

                //@Throws(Exception.constructor)
            
    public: std::string process(std::string userName, Order* order){

    OrderItemsEntity* orderItems = new OrderItemsEntity();;
    

    OrderHistoryEntity* orderHistory = new OrderHistoryEntity();;
    
order->setId((new OrderIdGenerator())->getNext());
    
orderItems->insert(userName, order);
    
orderHistory->insert(userName, order);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ORDER_PROCESSED;
    
}


};

            

