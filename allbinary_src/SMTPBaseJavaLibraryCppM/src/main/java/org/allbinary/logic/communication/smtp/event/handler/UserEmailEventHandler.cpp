
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_USEREMAILEVENTHANDLER_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_USEREMAILEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/EmailEvent.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UserEmailEventHandler::UserEmailEventHandler(){
this->emailVector= new BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UserEmailEventHandler::receiveEmailInfo(UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo) -> void{
this->userEmailEventNameData= userEmailEventNameData;
    
this->emailInfo= emailInfo;
    
this->fireEmailEvent();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UserEmailEventHandler::addListener(BasicArrayList* vector) -> void{

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserEmailEventListenerInterface* userEmailEventListenerInterface = dynamic_cast<UserEmailEventListenerInterface*>(vector->get(index));;
    
this->addListener(userEmailEventListenerInterface);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UserEmailEventHandler::addListener(UserEmailEventListenerInterface* emailEventListenerInterface) -> void{
this->emailVector->add(emailEventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UserEmailEventHandler::removeListener(UserEmailEventListenerInterface* emailEventListenerInterface) -> void{
this->emailVector->remove(emailEventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UserEmailEventHandler::fireEmailEvent() -> void{

    EmailEvent* emailEvent = new EmailEvent(this, this->userEmailEventNameData, this->emailInfo, 0);;
    

    int32_t size = this->emailVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserEmailEventListenerInterface* emailEventListenerInterface = dynamic_cast<UserEmailEventListenerInterface*>(this->emailVector->get(index));;
    
emailEventListenerInterface->onEmailSendRequest(emailEvent);
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_USEREMAILEVENTHANDLER_CPP
