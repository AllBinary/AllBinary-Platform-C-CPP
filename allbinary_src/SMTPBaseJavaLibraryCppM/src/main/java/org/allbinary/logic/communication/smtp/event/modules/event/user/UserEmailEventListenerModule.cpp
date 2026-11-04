
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_EVENT_USER_USEREMAILEVENTLISTENERMODULE_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_EVENT_USER_USEREMAILEVENTLISTENERMODULE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/event/modules/event/user/UserEmailEventListenerModule.h"
        

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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UserEmailEventListenerModule::UserEmailEventListenerModule(UserInterface* userInterface) : logUtil(LogUtil::getInstance()){
this->userInterface= userInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto UserEmailEventListenerModule::onEmailSendFailure(EmailEvent* emailEvent) -> void{

    std::string to = this->userInterface->getSecondaryEmail();;
    

    BasicEmail* email = new BasicEmail(emailEvent->getEmailInfo(), to);;
    
EmailQueueFactory::getInstance()->offer(dynamic_cast<EmailInterface*>(email->getEmail()));
    
}


                //@Throws(Exception.constructor)
            
    auto UserEmailEventListenerModule::onEmailSendRequest(EmailEvent* emailEvent) -> void{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Add Email To Que For Sending: ") +JavaString::valueOf(emailEvent->toString()), this, "onEmailSendRequest");
    

                                    }
                                

    std::string to = this->userInterface->getMainEmail();;
    

    BasicEmail* email = new BasicEmail(emailEvent->getEmailInfo(), to);;
    
EmailQueueFactory::getInstance()->offer(dynamic_cast<EmailInterface*>(email->getEmail()));
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_EVENT_USER_USEREMAILEVENTLISTENERMODULE_CPP
