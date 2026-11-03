
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class OrderInterface;
class Money;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PickUpShippingModule
            : public virtual Object
        , public virtual ShippingInterface {

    /*protected*/ public: CommonStrings* commonStrings;

    private: const std::string name = "No Shipping (For Pickup Orders Only)";

    private: const std::string description = "This shipping method is for pickup orders only.";

public: PickUpShippingModule();

    public: Money* getCost(OrderInterface* order);

    public: std::string getDescription();

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULE_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h")
#include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"
#endif

        #endif
    
