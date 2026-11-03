
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATION_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class LogUtil;
class UserEmailEventsConfiguration;
class UserEmailEventsConfigurationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserEmailConfiguration
            : public virtual Object
        , public virtual UserEmailConfigurationInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface;

public: UserEmailConfiguration();

public: UserEmailConfiguration(HashMap<Object*, Object*>* hashMap);

    public: UserEmailEventsConfigurationInterface* getUserEmailEventsConfigurationInterface();

    public: void setUserEmailEventsConfigurationInterface(UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"
#endif

        #endif
    
