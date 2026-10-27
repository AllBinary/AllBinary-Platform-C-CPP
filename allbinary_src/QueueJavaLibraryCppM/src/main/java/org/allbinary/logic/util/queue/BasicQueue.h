
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicQueue
            : public Object
         {

    protected: BasicArrayList* queueVector = new BasicArrayListD();

protected: BasicQueue();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: bool offer(Object* anyType);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void remove(Object* anyType);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: Object* removeLast();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_H
