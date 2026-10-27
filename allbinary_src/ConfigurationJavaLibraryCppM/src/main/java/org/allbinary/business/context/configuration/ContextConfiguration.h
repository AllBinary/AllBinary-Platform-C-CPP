
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATION_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class LogUtil;
class EmailServerConfiguration;
class EmailServerConfigurationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ContextConfiguration
            : public virtual Object
        , public ContextConfigurationInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: EmailServerConfigurationInterface* emailServerConfigurationInterface;

public: ContextConfiguration();

public: ContextConfiguration(HashMap<Object*, Object*>* hashMap);

    public: EmailServerConfigurationInterface* getEmailServerConfigurationInterface();

    public: void setEmailServerConfigurationInterface(EmailServerConfigurationInterface* emailServerConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfiguration.h>)
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfiguration.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/context/configuration/ContextConfigurationInterface.h")
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#endif

        #endif
    
