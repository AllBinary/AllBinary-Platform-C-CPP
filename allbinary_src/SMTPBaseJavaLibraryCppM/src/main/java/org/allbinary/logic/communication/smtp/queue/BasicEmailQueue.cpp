
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_BASICEMAILQUEUE_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_BASICEMAILQUEUE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/queue/BasicEmailQueue.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/mail/Transport.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/EmailInterface.h>

      
#include <org/allbinary/logic/util/queue/BasicQueue.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/queue/EmailQueueInterface.h"

auto BasicEmailQueue::instance_owner() -> BasicEmailQueue* { static std::unique_ptr<BasicEmailQueue> value(new BasicEmailQueue()); return value.get(); }
BasicEmailQueue* BasicEmailQueue::instance = BasicEmailQueue::instance_owner();

BasicEmailQueue::BasicEmailQueue() : logUtil(LogUtil::getInstance()){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEmailQueue::getInstance() -> BasicEmailQueue*{

                        if(BasicEmailQueue::basicEmailQueue == 
                                    nullptr
                                )
                        
                                    {
                                    BasicEmailQueue::basicEmailQueue= new BasicEmailQueue();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicEmailQueue::basicEmailQueue;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEmailQueue::offer(EmailInterface* emailInterface) -> bool{
this->offer(emailInterface);
    
this->post(emailInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEmailQueue::remove(EmailInterface* emailInterface) -> void{
this->remove(emailInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEmailQueue::remove() -> EmailInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEmailQueue::post(EmailInterface* emailInterface) -> void{

                        if(this->send(emailInterface))
                        
                                    {
                                    this->remove(emailInterface);
    
this->processAllUnsent();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEmailQueue::processAllUnsent() -> void{

    int32_t size = queueVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    EmailInterface* emailInterface = dynamic_cast<EmailInterface*>(queueVector.get(index));;
    

                        if(this->send(emailInterface))
                        
                                    {
                                    this->remove(emailInterface);
    
this->processAllUnsent();
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEmailQueue::send(EmailInterface* emailInterface) -> bool{

        try {
            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Sending: ") +JavaString::valueOf(emailInterface->log()), this, "send");
    

                                    }
                                
Transport::send(emailInterface->getMimeMessage());
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Email Send Debug: ") +JavaString::valueOf(emailInterface->getDebugInfo()), this, "send");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf("Failed Email Send Debug: ") +JavaString::valueOf(emailInterface->getDebugInfo()), this, "send", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_BASICEMAILQUEUE_CPP
