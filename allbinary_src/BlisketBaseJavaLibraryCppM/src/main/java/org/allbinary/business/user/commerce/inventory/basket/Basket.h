
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Float.h"
        
#include <java/io/Serializable.h>
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class ItemInterface;
class Money;
class MoneyException;
class InventoryEntity;
class InventoryEntityFactory;
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Basket
            : public virtual Object
        , public BasketInterface, public Serializable {

    private: HashMap<Object*, Object*>* items;

public: Basket();

    public: void addItem(std::string id, std::string num);

    public: void removeItem(std::string id);

    public: void adjustItem(std::string id, std::string num);

    public: std::string getTotalWeight();

    public: int32_t getNumberOfItems();

    public: Set* getIds();

    public: HashMap<Object*, Object*>* getItems();

    public: int32_t getNumberOf(std::string product);

                //@Throws(MoneyException.constructor)
            
    public: Money* getSubTotal();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKET_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_BASKET_BASKET_H_COMPLETE
        #if __has_include(<java/io/Serializable.h>)
#include <java/io/Serializable.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/MoneyException.h>)
#include <org/allbinary/business/user/commerce/money/MoneyException.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h")
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#endif

        #endif
    
