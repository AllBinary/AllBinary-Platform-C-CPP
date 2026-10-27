
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATION_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATION_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventListenerFactory.h"

class UserEmailEventsConfiguration
            : public Object
        , public UserEmailEventsConfigurationInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: HashMap<Object*, Object*>* emailEventHashMap;

public: UserEmailEventsConfiguration();

public: UserEmailEventsConfiguration(HashMap<Object*, Object*>* hashMap);

    private: void init();

    public: HashMap<Object*, Object*>* getEventConfigurationHashMap();

    public: void addUserEmailEventConfiguration(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);

                //@Throws(Exception.constructor)
            
    public: UserEmailEventListenerInterface* getEventListener(AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATION_H
