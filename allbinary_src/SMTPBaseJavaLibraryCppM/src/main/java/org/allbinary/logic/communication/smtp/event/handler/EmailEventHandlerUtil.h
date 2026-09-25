
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventHandler.h"

class EmailEventHandlerUtil
            : public Object
         {

    private: static EmailEventHandlerUtil instance() { return EmailEventHandlerUtil(); }

    public: static EmailEventHandlerUtil getInstance();

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList getUserEmailEventListenerVector(AbeClientInformationInterface abeClientInformation, UserEmailEventNameData userEmailEventNameData, UserInterface userInterface);

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: EmailEventHandlerUtil();

                //@Throws(Exception.constructor)
            
    public: UserEmailEventHandler getEventHandler(AbeClientInformationInterface abeClientInformation, UserEmailEventNameData userEmailEventNameData, BasicArrayList userVector);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_EMAILEVENTHANDLERUTIL_H
