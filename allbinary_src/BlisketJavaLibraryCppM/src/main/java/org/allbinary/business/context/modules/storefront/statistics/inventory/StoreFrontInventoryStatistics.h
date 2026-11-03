
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICS_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class StoreFrontInterface;
class ItemInterface;
class Money;
class InventoryEntityFactory;
class InventoryEntityInterface;
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h"
class StoreFrontInventoryStatisticsData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontInventoryStatistics
            : public virtual Object
        , public virtual StoreFrontInventoryStatisticsInterface {

    private: int64_t totalNumberOfItems= 0;

    private: Money* totalInventorySaleValueMoney;

public: StoreFrontInventoryStatistics(StoreFrontInterface* storeFrontInterface);

    public: int64_t getNumber();

    public: Money* getTotal();

    public: HashMap<Object*, Object*>* toHashMap();

    public: BasicArrayList* toVector();

    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICS_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICS_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h")
#include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h"
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsData.h")
#include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsData.h"
#endif

        #endif
    
