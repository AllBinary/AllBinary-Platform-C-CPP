
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_LOG_LOGUSEREMAILEVENTLISTENERMODULE_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_LOG_LOGUSEREMAILEVENTLISTENERMODULE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/EmailEvent.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LogUserEmailEventListenerModule::LogUserEmailEventListenerModule() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto LogUserEmailEventListenerModule::onEmailSendRequest(EmailEvent* userEmailInfoEvent) -> void{

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    std::string message = JavaString::valueOf("Logging EmailEvent - Temporary Listener for debugging.\n\n") +JavaString::valueOf(userEmailInfoEvent->toString());;
    
this->logUtil->putF(message, this, "onEmailSendRequest");
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_MODULES_LOG_LOGUSEREMAILEVENTLISTENERMODULE_CPP
