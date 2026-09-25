
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

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventsConfigurationInterface.h"
#include "UserEmailEventConfigurationInterface.h"
#include "UserEmailEventListenerFactory.h"

class UserEmailEventsConfiguration
            : public Object
        : public UserEmailEventsConfigurationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HashMap<any, any> emailEventHashMap;

public: UserEmailEventsConfiguration();

public: UserEmailEventsConfiguration(HashMap<any, any> hashMap);

    private: void init();

    public: HashMap<any, any> getEventConfigurationHashMap();

    public: void addUserEmailEventConfiguration(UserEmailEventConfigurationInterface userEmailEventConfigurationInterface);

                //@Throws(Exception.constructor)
            
    public: UserEmailEventListenerInterface getEventListener(AbeClientInformationInterface abeClientInformation, UserEmailEventNameData userEmailEventNameData, UserInterface userInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATION_H
