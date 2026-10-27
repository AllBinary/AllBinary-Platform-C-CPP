
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class LogUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
class UserEmailEventConfigurationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserEmailEventConfiguration
            : public virtual Object
        , public UserEmailEventConfigurationInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string name;

    private: std::string eventListenerClassPath;

public: UserEmailEventConfiguration();

public: UserEmailEventConfiguration(HashMap<Object*, Object*>* hashMap);

    public: std::string getName();

    public: void setName(std::string name);

    public: std::string getEventListenerClassPath();

    public: void setEventListenerClassPath(std::string eventListenerClassPath);

    public: std::string log();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h"
#endif

        #endif
    
