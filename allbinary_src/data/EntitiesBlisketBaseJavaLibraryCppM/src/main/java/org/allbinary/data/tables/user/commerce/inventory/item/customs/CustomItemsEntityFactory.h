
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_CUSTOMS_CUSTOMITEMSENTITYFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_CUSTOMS_CUSTOMITEMSENTITYFACTORY_H

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomItemsEntity.h"

class CustomItemsEntityFactory
            : public Object
         {
        

    private: static const instance: CustomItemsEntityFactory = new CustomItemsEntityFactory();

    public static CustomItemsEntityFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

    public CustomItemsEntity getCustomItemsEntityInstance();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_CUSTOMS_CUSTOMITEMSENTITYFACTORY_H
