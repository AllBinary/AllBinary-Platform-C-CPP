
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class OrderIdGenerator;
class OrderHistoryEntity;
class OrderItemsEntity;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Order;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderProcessorUtil
            : public virtual Object
         {

    private: static OrderProcessorUtil* instance_owner();
    private: static OrderProcessorUtil* instance;

    public: static OrderProcessorUtil* getInstance();


            
    public: OrderProcessorUtil();
        
    private: const std::string ORDER_PROCESSED = "Order Processed";

                //@Throws(Exception.constructor)
            
    public: std::string process(std::string userName, Order* order);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERPROCESSORUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/data/generator/OrderIdGenerator.h>)
#include <org/allbinary/data/generator/OrderIdGenerator.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntity.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntity.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/order/Order.h")
#include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#endif

        #endif
    
