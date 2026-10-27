
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H

        
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
        class BasicStoreFrontsEntity;
class BasicStoreFrontInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicStoreFrontFactory
            : public virtual Object
         {

    private: static BasicStoreFrontFactory* instance_owner();
    private: static BasicStoreFrontFactory* instance;

    public: static BasicStoreFrontFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: BasicStoreFrontFactory();

                //@Throws(Exception.constructor)
            
    public: BasicStoreFrontInterface* getInstance(std::string storeName);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/context/modules/storefronts/BasicStoreFrontsEntity.h")
#include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontsEntity.h"
#endif
#if __has_include("org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h")
#include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h"
#endif

        #endif
    
