
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasketInterface {

    public: virtual void addItem(std::string id, std::string num) = 0;

    public: virtual void removeItem(std::string id) = 0;

    public: virtual void adjustItem(std::string id, std::string num) = 0;

    public: virtual std::string getTotalWeight() = 0;

    public: virtual int32_t getNumberOfItems() = 0;

    public: virtual Set* getIds() = 0;

    public: virtual HashMap<Object*, Object*>* getItems() = 0;

    public: virtual int32_t getNumberOf(std::string product) = 0;

                //@Throws(MoneyException.constructor)
            
    public: virtual Money* getSubTotal() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKETINTERFACE_H
