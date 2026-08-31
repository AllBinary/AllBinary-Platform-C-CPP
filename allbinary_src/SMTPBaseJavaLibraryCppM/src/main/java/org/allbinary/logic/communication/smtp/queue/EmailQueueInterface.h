
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_EMAILQUEUEINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_EMAILQUEUEINTERFACE_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/smtp/EmailInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EmailQueueInterface {
        

                //@Throws(Exception.constructor)
            
    bool offer(EmailInterface emailInterface);

                //@Throws(Exception.constructor)
            
    EmailInterface remove();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_EMAILQUEUEINTERFACE_H
