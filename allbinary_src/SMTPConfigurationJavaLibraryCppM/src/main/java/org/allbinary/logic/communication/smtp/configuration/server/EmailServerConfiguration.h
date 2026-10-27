
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_H

        
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
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
class EmailServerConfigurationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EmailServerConfiguration
            : public virtual Object
        , public EmailServerConfigurationInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string accountName;

    private: std::string password;

    private: std::string smtpServer;

public: EmailServerConfiguration();

public: EmailServerConfiguration(HashMap<Object*, Object*>* hashMap);

public: EmailServerConfiguration(std::string account, std::string password, std::string server);

    public: void setSmtpServer(std::string value);

    public: std::string getSmtpServer();

    public: std::string getAccountName();

    public: void setAccountName(std::string accountName);

    public: std::string getPassword();

    public: void setPassword(std::string password);

    public: void log();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h")
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationData.h")
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationData.h"
#endif

        #endif
    
