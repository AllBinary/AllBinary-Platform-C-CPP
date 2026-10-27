
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_QUEUE_QUEUEINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_QUEUE_QUEUEINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class QueueInterface {

                //@Throws(Exception.constructor)
            
    public: virtual bool offer(Object* anyType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void remove(Object* anyType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual Object* remove() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_QUEUE_QUEUEINTERFACE_H
