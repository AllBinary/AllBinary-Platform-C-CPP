
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class UserInterface;
class UserEmailEventListenerInterface;
class UserEmailEventNameData;
class AbeClientInformationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserEmailEventConfigurationInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserEmailEventsConfigurationInterface
            : public virtual Object
         {

    public: virtual HashMap<Object*, Object*>* getEventConfigurationHashMap() = 0;

    public: virtual void addUserEmailEventConfiguration(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual UserEmailEventListenerInterface* getEventListener(AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONINTERFACE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/user/UserInterface.h>)
#include <org/allbinary/business/user/UserInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>)
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>)
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#endif

        #endif
    
