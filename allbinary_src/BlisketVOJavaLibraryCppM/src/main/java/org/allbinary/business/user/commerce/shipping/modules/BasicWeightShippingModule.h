
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULE_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingInterface.h"

class BasicWeightShippingModule
            : public Object
        : public ShippingInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string name = "Basic Shipping (5 to 7 working days)";

    private: const std::string description = "We will soon provide a variety of shipping methods.";

public: BasicWeightShippingModule();

    public: Money getCost(OrderInterface order);

    public: std::string getDescription();

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULE_H
