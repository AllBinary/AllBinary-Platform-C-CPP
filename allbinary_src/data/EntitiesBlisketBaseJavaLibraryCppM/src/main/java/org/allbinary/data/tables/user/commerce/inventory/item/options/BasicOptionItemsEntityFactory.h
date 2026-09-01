
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITYFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITYFACTORY_H

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicOptionItemsEntity.h"

class BasicOptionItemsEntityFactory
            : public Object
         {

    private: static BasicOptionItemsEntityFactory instance() { return BasicOptionItemsEntityFactory(); }

    public: static BasicOptionItemsEntityFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: BasicOptionItemsEntityFactory();

    public: BasicOptionItemsEntity getBasicOptionItemsEntityInstance();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITYFACTORY_H
