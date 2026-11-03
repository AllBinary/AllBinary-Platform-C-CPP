
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERITEMSENTITYINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERITEMSENTITYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BasicArrayList;

class BasketReview;
class OrderInterface;
#include <org/allbinary/data/tables/BasicDataTableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderItemsEntityInterface: public virtual BasicDataTableInterface {

    public: virtual void setStatus(std::string orderId, std::string groupId, std::string status) = 0;

    public: virtual bool isEverythingShipped(std::string orderId) = 0;

    public: virtual BasketReview* getBasketReview(std::string orderId) = 0;

    public: virtual void insert(std::string userName, OrderInterface* order) = 0;

    public: virtual void insert(BasicArrayList* values) = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERITEMSENTITYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERITEMSENTITYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERITEMSENTITYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/user/commerce/inventory/basket/BasketReview.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/BasketReview.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>
#endif
#if __has_include(<org/allbinary/data/tables/BasicDataTableInterface.h>)
#include <org/allbinary/data/tables/BasicDataTableInterface.h>
#endif

        #endif
    
