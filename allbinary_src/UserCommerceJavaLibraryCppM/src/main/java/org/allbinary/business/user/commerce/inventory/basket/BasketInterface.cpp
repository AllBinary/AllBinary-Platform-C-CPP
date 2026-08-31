
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
        



            #include "../../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasketInterface {
        

    addItem(string id, string num)

    removeItem(string id)

    adjustItem(string id, string num)

    string getTotalWeight()

    Integer getNumberOfItems()

    Set getIds()

    HashMap<any, any> getItems()

    Integer getNumberOf(string product)

                //@Throws(MoneyException.constructor)
            
    Money getSubTotal()

};

            

