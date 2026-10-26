
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKET_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKET_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Float.h"
        
#include <java/io/Serializable.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasketInterface.h"

class Basket
            : public Object
        : public BasketInterface, public Serializable {

    private: HashMap<Object*, Object*> items = StdUtil::getInstance().createHashMap();

public: Basket();

    public: void addItem(std::string id, std::string num);

    public: void removeItem(std::string id);

    public: void adjustItem(std::string id, std::string num);

    public: std::string getTotalWeight();

    public: Integer getNumberOfItems();

    public: Set getIds();

    public: HashMap<Object*, Object*> getItems();

    public: Integer getNumberOf(std::string product);

                //@Throws(MoneyException.constructor)
            
    public: Money getSubTotal();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKET_H
