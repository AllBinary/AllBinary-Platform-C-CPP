
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULE_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModule.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"


BasicWeightShippingModule::BasicWeightShippingModule() : commonStrings(CommonStrings::getInstance()){
}


    auto BasicWeightShippingModule::getCost(OrderInterface* order) -> Money*{

    BasketInterface* basket = order->getBasket();;
    

    Money* money = new Money();;
    
money->add(basket->getTotalWeight());
    
money->multiply(1);
    
money->add("3.50");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return money;
    
}


    auto BasicWeightShippingModule::getDescription() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->description;
    
}


    auto BasicWeightShippingModule::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULE_CPP
