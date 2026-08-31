
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_BASICEMAILQUEUE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_BASICEMAILQUEUE_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/mail/Transport.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/EmailInterface.h>

      
#include <org/allbinary/logic/util/queue/BasicQueue.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmailQueueInterface.h"

class BasicEmailQueue: public BasicQueue: public EmailQueueInterface {
        

    private: static const instance: BasicEmailQueue = new BasicEmailQueue();

    private: static basicEmailQueue: BasicEmailQueue;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static BasicEmailQueue getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool offer(EmailInterface emailInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    remove(EmailInterface emailInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public EmailInterface remove();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    post(EmailInterface emailInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    processAllUnsent();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    bool send(EmailInterface emailInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_BASICEMAILQUEUE_H
