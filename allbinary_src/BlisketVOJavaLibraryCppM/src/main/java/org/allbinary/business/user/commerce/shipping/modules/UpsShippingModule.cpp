
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
        
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingInterface.h"

class UpsShippingModule
            : public Object
        : public ShippingInterface {
        

    private: const name: string = "UPS";

    private: const description: string = "Brown Mail";

public constructor (){

            super();
        }


    public Money getCost(OrderInterface order){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Money();
    
}


    public string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.description;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

