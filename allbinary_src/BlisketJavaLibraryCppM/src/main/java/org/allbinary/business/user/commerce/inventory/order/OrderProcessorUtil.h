
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_H

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

    private: static OrderProcessorUtil instance() { return OrderProcessorUtil(); }

    public: static OrderProcessorUtil getInstance();

    private: const std::string ORDER_PROCESSED = "Order Processed";

                //@Throws(Exception.constructor)
            
    public: std::string process(std::string userName, Order order);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_H
