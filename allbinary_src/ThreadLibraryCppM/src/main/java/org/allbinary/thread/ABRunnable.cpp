
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_THREAD_ABRUNNABLE_CPP
        #define ORG_ALLBINARY_THREAD_ABRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/ABRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Thread.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/RunnableInterface.h"


ABRunnable::ABRunnable() {
        }
        
    auto ABRunnable::setThread(Thread* thread) -> void{
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ABRunnable::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ABRunnable::setRunning(bool running) -> void{
this->running= running;
    
}


    auto ABRunnable::run() -> void{
}


    auto ABRunnable::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}




        #endif //ORG_ALLBINARY_THREAD_ABRUNNABLE_CPP
