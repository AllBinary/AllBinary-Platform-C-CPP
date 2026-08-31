
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

            #include "../../../../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventConfigurationInterface.h"
#include "UserEmailEventConfigurationData.h"

class UserEmailEventConfiguration
            : public Object
        : public UserEmailEventConfigurationInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: name: string;

    private: eventListenerClassPath: string;

public constructor ();

public constructor (HashMap<any, any> hashMap);

    public string getName();

    public setName(string name);

    public string getEventListenerClassPath();

    public setEventListenerClassPath(string eventListenerClassPath);

    public string log();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATION_H
