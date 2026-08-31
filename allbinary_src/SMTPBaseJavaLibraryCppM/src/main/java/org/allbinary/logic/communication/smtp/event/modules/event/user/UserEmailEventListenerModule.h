
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_EVENT_USER_USEREMAILEVENTLISTENERMODULE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_EVENT_USER_USEREMAILEVENTLISTENERMODULE_H

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/BasicEmail.h>

      
#include <org/allbinary/logic/communication/smtp/EmailInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/EmailEvent.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/queue/EmailQueueFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEmailEventListenerModule
            : public Object
        : public UserEmailEventListenerInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: userInterface: UserInterface;

public constructor (UserInterface userInterface);

                //@Throws(Exception.constructor)
            
    public onEmailSendFailure(EmailEvent emailEvent);

                //@Throws(Exception.constructor)
            
    public onEmailSendRequest(EmailEvent emailEvent);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_EVENT_USER_USEREMAILEVENTLISTENERMODULE_H
