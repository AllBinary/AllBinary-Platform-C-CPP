
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        , public UserEmailEventListenerInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: UserInterface* userInterface;

public: UserEmailEventListenerModule(UserInterface* userInterface){
this->userInterface= userInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void onEmailSendFailure(EmailEvent* emailEvent){

    std::string to = this->userInterface->getSecondaryEmail();;
    

    BasicEmail* email = new BasicEmail(emailEvent->getEmailInfo(), to);;
    
EmailQueueFactory::getInstance()->offer(dynamic_cast<EmailInterface*>(email->getEmail()));
    
}


                //@Throws(Exception.constructor)
            
    public: void onEmailSendRequest(EmailEvent* emailEvent){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Add Email To Que For Sending: " +emailEvent->toString(), this, "onEmailSendRequest");
    

                                    }
                                

    std::string to = this->userInterface->getMainEmail();;
    

    BasicEmail* email = new BasicEmail(emailEvent->getEmailInfo(), to);;
    
EmailQueueFactory::getInstance()->offer(dynamic_cast<EmailInterface*>(email->getEmail()));
    
}


};

            

