
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/business/user/address/StreetAddress.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"

class OrderItemInterface: public ItemInterface {

    public: virtual void setGroup(std::string value) = 0;

    public: virtual void setTax(std::string value) = 0;

    public: virtual void setShippingType(std::string value) = 0;

    public: virtual void setShippingCost(std::string value) = 0;

    public: virtual void setShippingAddress(StreetAddress* value) = 0;

    public: virtual void setSpecial(std::string value) = 0;

    public: virtual std::string getGroup() = 0;

    public: virtual std::string getTax() = 0;

    public: virtual std::string getShippingType() = 0;

    public: virtual std::string getShippingCost() = 0;

    public: virtual StreetAddress* getShippingAddress() = 0;

    public: virtual std::string getSpecial() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ORDERITEMINTERFACE_H
