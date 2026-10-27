
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class EmailInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EmailQueueInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual bool offer(EmailInterface* emailInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual EmailInterface* remove() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_EMAILQUEUEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_EMAILQUEUEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_QUEUE_EMAILQUEUEINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/smtp/EmailInterface.h>)
#include <org/allbinary/logic/communication/smtp/EmailInterface.h>
#endif

        #endif
    
