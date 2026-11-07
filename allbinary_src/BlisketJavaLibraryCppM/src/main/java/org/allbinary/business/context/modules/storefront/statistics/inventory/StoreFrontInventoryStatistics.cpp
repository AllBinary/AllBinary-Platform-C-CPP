
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICS_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatistics.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsData.h"


StoreFrontInventoryStatistics::StoreFrontInventoryStatistics(StoreFrontInterface* storeFrontInterface){
this->totalInventorySaleValueMoney= new Money();
    

    InventoryEntityInterface* inventoryEntityInterface = InventoryEntityFactory::getInstance()->getInventoryEntityInstance();;
    

    BasicArrayList* itemVector = inventoryEntityInterface->getItems(storeFrontInterface);;
    

    int32_t size = itemVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ItemInterface* itemInterface = dynamic_cast<ItemInterface*>(itemVector->get(index));;
    

    int32_t numberInStock = JavaBoxes::value<int32_t>(Integer.valueOf(itemInterface->getNumber()));;
    
this->totalNumberOfItems= this->totalNumberOfItems +numberInStock;
    

    Money* itemPriceMoney = itemInterface->getPrice();;
    
itemPriceMoney->multiply(numberInStock);
    
this->totalInventorySaleValueMoney->add(JavaString::valueOf(itemPriceMoney));
    
}

}


    auto StoreFrontInventoryStatistics::getNumber() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return int64_t(this->totalNumberOfItems);
    
}


    auto StoreFrontInventoryStatistics::getTotal() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalInventorySaleValueMoney;
    
}


    auto StoreFrontInventoryStatistics::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(StoreFrontInventoryStatisticsData::getInstance()->NUMBEROFITEMS, JavaString::valueOf(this->getNumber()));
    
hashMap->put(StoreFrontInventoryStatisticsData::getInstance()->TOTALVALUE, JavaString::valueOf(this->getTotal()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


    auto StoreFrontInventoryStatistics::toVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto StoreFrontInventoryStatistics::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICS_CPP
