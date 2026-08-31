
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_NOSHIPPINGMODULE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_NOSHIPPINGMODULE_H

            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingInterface.h"

class NoShippingModule
            : public Object
        : public ShippingInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const name: string = "No Shipping";

    private: const description: string = "This shipping method is for items that are not shipped.";

public constructor ();

    public Money getCost(OrderInterface order);

    public string getDescription();

    public string getName();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_NOSHIPPINGMODULE_H
