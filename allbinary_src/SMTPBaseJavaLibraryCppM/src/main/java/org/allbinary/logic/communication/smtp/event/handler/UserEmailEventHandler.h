
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_USEREMAILEVENTHANDLER_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_USEREMAILEVENTHANDLER_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/EmailEvent.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEmailEventHandler
            : public Object
         {

    private: BasicArrayList emailVector;

    private: EmailInfo emailInfo;

    private: UserEmailEventNameData userEmailEventNameData;

public: UserEmailEventHandler();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void receiveEmailInfo(UserEmailEventNameData userEmailEventNameData, EmailInfo emailInfo);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addListener(BasicArrayList vector);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addListener(UserEmailEventListenerInterface emailEventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(UserEmailEventListenerInterface emailEventListenerInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireEmailEvent();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_USEREMAILEVENTHANDLER_H
