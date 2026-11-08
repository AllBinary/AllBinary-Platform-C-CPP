
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYCOLUMNUTIL_CPP
        #define VIEWS_GENERIC_INVENTORY_INVENTORYCOLUMNUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/inventory/InventoryColumnUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InventoryColumnUtil::InventoryColumnUtil() : logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()) {
        }
        auto InventoryColumnUtil::instance_owner() -> InventoryColumnUtil* { static std::unique_ptr<InventoryColumnUtil> value(new InventoryColumnUtil()); return value.get(); }
InventoryColumnUtil* InventoryColumnUtil::instance = InventoryColumnUtil::instance_owner();

    auto InventoryColumnUtil::getInstance() -> InventoryColumnUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InventoryColumnUtil::instance;
    
}


    auto InventoryColumnUtil::getColumnWhereLike(InventoryEntity* inventoryEntity, std::string category, std::string column) -> BasicArrayList*{
this->logUtil->putF(JavaString::valueOf("Start Category: ") +JavaString::valueOf(category), this, "getKeywords");
    

    BasicArrayList* keywords = new BasicArrayListD();;
    

    BasicArrayList* vectorOfHashMaps = inventoryEntity->getAllRows();;
    

    int32_t size = vectorOfHashMaps->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* hashMap = dynamic_cast<HashMap<Object*, Object*>*>(vectorOfHashMaps->get(index));;
    

    std::string categoryName = JavaBoxes::unbox<std::string>(hashMap->get(basicItemData->CATEGORY));;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(categoryName) && JavaString::startsWith(categoryName, category))
                        
                                    {
                                    keywords->add(hashMap->get(column));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return keywords;
    
}




        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYCOLUMNUTIL_CPP
