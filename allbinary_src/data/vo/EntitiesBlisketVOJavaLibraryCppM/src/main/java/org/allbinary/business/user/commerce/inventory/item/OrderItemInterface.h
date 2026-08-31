
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ORDERITEMINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ORDERITEMINTERFACE_H

#include <org/allbinary/business/user/address/StreetAddress.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ItemInterface.h"

class OrderItemInterface: public ItemInterface {
        

    setGroup(string value);

    setTax(string value);

    setShippingType(string value);

    setShippingCost(string value);

    setShippingAddress(StreetAddress value);

    setSpecial(string value);

    string getGroup();

    string getTax();

    string getShippingType();

    string getShippingCost();

    StreetAddress getShippingAddress();

    string getSpecial();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ORDERITEMINTERFACE_H
