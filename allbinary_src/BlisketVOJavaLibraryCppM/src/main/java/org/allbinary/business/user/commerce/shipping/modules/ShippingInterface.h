
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_SHIPPINGINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_SHIPPINGINTERFACE_H

#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShippingInterface {

    Money getCost(OrderInterface order);

    std::string getName();

    std::string getDescription();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_SHIPPINGINTERFACE_H
