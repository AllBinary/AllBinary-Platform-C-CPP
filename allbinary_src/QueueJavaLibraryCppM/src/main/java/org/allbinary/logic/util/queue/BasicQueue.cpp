
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/queue/BasicQueue.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicQueue::BasicQueue() : queueVector(new BasicArrayListD()){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicQueue::offer(Object* anyType) -> bool{
this->queueVector->add(anyType);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicQueue::remove(Object* anyType) -> void{
this->queueVector->remove(anyType);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicQueue::removeLast() -> Object*{

    Object* anyType = this->queueVector->get(this->queueVector->size() -1);;
    
this->queueVector->remove(anyType);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_CPP
