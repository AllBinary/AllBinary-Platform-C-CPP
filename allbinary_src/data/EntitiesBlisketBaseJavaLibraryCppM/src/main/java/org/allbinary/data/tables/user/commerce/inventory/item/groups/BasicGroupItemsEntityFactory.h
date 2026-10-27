
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_GROUPS_BASICGROUPITEMSENTITYFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_GROUPS_BASICGROUPITEMSENTITYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicGroupItemsEntity;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGroupItemsEntityFactory
            : public virtual Object
         {

    private: static BasicGroupItemsEntityFactory* instance_owner();
    private: static BasicGroupItemsEntityFactory* instance;

    public: static BasicGroupItemsEntityFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: BasicGroupItemsEntityFactory();

    public: BasicGroupItemsEntity* getBasicGroupItemsEntityInstance();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_GROUPS_BASICGROUPITEMSENTITYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_GROUPS_BASICGROUPITEMSENTITYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_GROUPS_BASICGROUPITEMSENTITYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/data/tables/user/commerce/inventory/item/groups/BasicGroupItemsEntity.h")
#include "org/allbinary/data/tables/user/commerce/inventory/item/groups/BasicGroupItemsEntity.h"
#endif

        #endif
    
