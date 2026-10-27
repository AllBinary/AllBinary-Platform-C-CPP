
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

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/smtp/EmailInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EmailQueueInterface {

                //@Throws(Exception.constructor)
            
    public: virtual bool offer(EmailInterface* emailInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual EmailInterface* remove() = 0;

};

            

