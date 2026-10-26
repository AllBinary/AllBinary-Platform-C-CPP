
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
        



            #include "java/lang/Exception.h"
        
#include <javax/mail/Transport.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/EmailInterface.h>

      
#include <org/allbinary/logic/util/queue/BasicQueue.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmailQueueInterface.h"

class BasicEmailQueue: public BasicQueue, public EmailQueueInterface {

    private: static BasicEmailQueue instance() { return BasicEmailQueue(); }

    private: static BasicEmailQueue basicEmailQueue;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static BasicEmailQueue getInstance(){

                        if(BasicEmailQueue::basicEmailQueue == 
                                    nullptr
                                )
                        
                                    {
                                    BasicEmailQueue::basicEmailQueue= BasicEmailQueue();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicEmailQueue::basicEmailQueue;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: BasicEmailQueue(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool offer(EmailInterface emailInterface){
this->offer(emailInterface);
    
this->post(emailInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void remove(EmailInterface emailInterface){
this->remove(emailInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: EmailInterface remove(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void post(EmailInterface emailInterface){

                        if(this->send(emailInterface))
                        
                                    {
                                    this->remove(emailInterface);
    
this->processAllUnsent();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void processAllUnsent(){

    int32_t size = queueVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    EmailInterface emailInterface = queueVector.get(index);;
    

                        if(this->send(emailInterface))
                        
                                    {
                                    this->remove(emailInterface);
    
this->processAllUnsent();
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: bool send(EmailInterface emailInterface){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("Sending: " +emailInterface.log(), this, "send");
    

                                    }
                                
Transport::send(emailInterface.getMimeMessage());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("Email Send Debug: " +emailInterface.getDebugInfo(), this, "send");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.put("Failed Email Send Debug: " +emailInterface.getDebugInfo(), this, "send", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

