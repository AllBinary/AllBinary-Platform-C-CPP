
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/generator/OrderIdGenerator.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Order.h"

class OrderProcessorUtil
            : public Object
         {
        

    private: static const instance: OrderProcessorUtil = new OrderProcessorUtil();

    public static OrderProcessorUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OrderProcessorUtil.instance;
    
}


    private: const ORDER_PROCESSED: string = "Order Processed";

                //@Throws(Exception.constructor)
            
    public string process(string userName, Order order){

    orderItems: OrderItemsEntity = new OrderItemsEntity();;
    

    orderHistory: OrderHistoryEntity = new OrderHistoryEntity();;
    
order.setId(new OrderIdGenerator().getNext());
    
orderItems!.insert(userName, order);
    
orderHistory!.insert(userName, order);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ORDER_PROCESSED;
    
}


};

            

