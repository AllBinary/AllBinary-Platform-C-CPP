
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYCOLUMNUTIL_H
        #define VIEWS_GENERIC_INVENTORY_INVENTORYCOLUMNUTIL_H

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
        
class InventoryColumnUtil
            : public Object
         {

    private: static InventoryColumnUtil* instance() { static std::unique_ptr<InventoryColumnUtil> value(new InventoryColumnUtil()); return value.get(); }

    public: static InventoryColumnUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: BasicItemData* basicItemData = BasicItemData::getInstance();

    public: BasicArrayList* getColumnWhereLike(InventoryEntity* inventoryEntity, std::string category, std::string column);

};

            


        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYCOLUMNUTIL_H
