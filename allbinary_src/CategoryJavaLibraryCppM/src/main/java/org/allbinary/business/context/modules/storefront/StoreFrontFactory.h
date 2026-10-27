
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StoreFrontsEntity;
class StoreFrontsEntityFactory;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StoreFront;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontFactory
            : public virtual Object
         {

    public: static StoreFront* getInstance(std::string storeName);

private: StoreFrontFactory();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>)
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>)
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/StoreFront.h")
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#endif

        #endif
    
