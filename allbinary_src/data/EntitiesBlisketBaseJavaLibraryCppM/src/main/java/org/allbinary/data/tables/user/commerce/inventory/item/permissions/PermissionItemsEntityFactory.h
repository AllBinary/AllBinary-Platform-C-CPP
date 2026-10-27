
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_PERMISSIONS_PERMISSIONITEMSENTITYFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_PERMISSIONS_PERMISSIONITEMSENTITYFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/permissions/PermissionItemsEntity.h"

class PermissionItemsEntityFactory
            : public Object
         {

    private: static PermissionItemsEntityFactory* instance() { static std::unique_ptr<PermissionItemsEntityFactory> value(new PermissionItemsEntityFactory()); return value.get(); }

    public: static PermissionItemsEntityFactory* getInstance();

    public: static PermissionItemsEntity* getPermissionItemsEntityInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: PermissionItemsEntityFactory();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_PERMISSIONS_PERMISSIONITEMSENTITYFACTORY_H
