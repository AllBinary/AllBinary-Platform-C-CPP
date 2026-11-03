
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_PERMISSIONS_PERMISSIONITEMSENTITYFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_PERMISSIONS_PERMISSIONITEMSENTITYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/item/permissions/PermissionItemsEntityFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/permissions/PermissionItemsEntity.h"

auto PermissionItemsEntityFactory::instance_owner() -> PermissionItemsEntityFactory* { static std::unique_ptr<PermissionItemsEntityFactory> value(new PermissionItemsEntityFactory()); return value.get(); }
PermissionItemsEntityFactory* PermissionItemsEntityFactory::instance = PermissionItemsEntityFactory::instance_owner();

    auto PermissionItemsEntityFactory::getInstance() -> PermissionItemsEntityFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PermissionItemsEntityFactory::instance;
    
}


PermissionItemsEntityFactory::PermissionItemsEntityFactory() : logUtil(LogUtil::getInstance()){
}


    auto PermissionItemsEntityFactory::getPermissionItemsEntityInstance() -> PermissionItemsEntity*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new org::allbinary::data::tables::user::commerce::inventory::item::permissions::PermissionItemsEntity();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    logUtil->put(commonStrings->EXCEPTION, "PermissionItemsEntityFactory", commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_PERMISSIONS_PERMISSIONITEMSENTITYFACTORY_CPP
