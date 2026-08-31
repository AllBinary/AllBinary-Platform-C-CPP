
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
        
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingInterface.h"

class BasicWeightShippingModule
            : public Object
        : public ShippingInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const name: string = "Basic Shipping (5 to 7 working days)";

    private: const description: string = "We will soon provide a variety of shipping methods.";

public constructor (){

            super();
        }


    public Money getCost(OrderInterface order){

    basket: BasketInterface = order.getBasket()!;;
    

    money: Money = new Money();;
    
money.add(basket.getTotalWeight());
    
money.multiply(1);
    
money.add("3.50");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return money;
    
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

            

