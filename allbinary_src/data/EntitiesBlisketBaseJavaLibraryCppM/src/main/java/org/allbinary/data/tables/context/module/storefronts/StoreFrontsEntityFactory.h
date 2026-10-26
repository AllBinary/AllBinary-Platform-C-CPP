
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITYFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITYFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontsEntity.h"

class StoreFrontsEntityFactory
            : public Object
         {

    private: static StoreFrontsEntityFactory instance() { return StoreFrontsEntityFactory(); }

    public: static StoreFrontsEntityFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: StoreFrontsEntityFactory();

    public: StoreFrontsEntity getStoreFrontsEntityInstance();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITYFACTORY_H
