
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_EMAILEVENTHANDLERUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_EMAILEVENTHANDLERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
class UserInterface;
class UserConfigurationInterface;

class LogUtil;
class UserEmailConfigurationInterface;
class UserEmailEventsConfigurationInterface;
class UserEmailEventListenerInterface;
class UserEmailEventNameData;
class LogUserEmailEventListenerModule;
class StringMaker;
class AbeClientInformationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserEmailEventHandler;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EmailEventHandlerUtil
            : public virtual Object
         {

    private: static EmailEventHandlerUtil* instance_owner();
    private: static EmailEventHandlerUtil* instance;

    public: static EmailEventHandlerUtil* getInstance();

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* getUserEmailEventListenerVector(AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface);

    /*protected*/ public: LogUtil* logUtil;

private: EmailEventHandlerUtil();

                //@Throws(Exception.constructor)
            
    public: UserEmailEventHandler* getEventHandler(AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, BasicArrayList* userVector);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_EMAILEVENTHANDLERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_EMAILEVENTHANDLERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_EMAILEVENTHANDLERUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/user/UserInterface.h>)
#include <org/allbinary/business/user/UserInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>)
#include <org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>)
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>)
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h>)
#include <org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h")
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#endif

        #endif
    
