
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_ADMINEMAILINFO_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_ADMINEMAILINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class ContextConfigurationInterface;
class AdminConfiguration;
class AdminConfigurationInterface;
class LogUtil;
class EmailServerConfigurationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdminEmailInfo: public BasicEmailInfo {

    /*protected*/ public: LogUtil* logUtil;

public: AdminEmailInfo(std::string subject, std::string textBody);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void init();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_ADMINEMAILINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_ADMINEMAILINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_ADMINEMAILINFO_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationInterface.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h>)
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h>)
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h")
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#endif

        #endif
    
