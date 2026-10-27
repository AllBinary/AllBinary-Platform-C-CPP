
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
        



        #ifndef ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_CPP
        #define ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/debug/AndroidDebug.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Long.h"
        
#include <android/os/Debug.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/debug/DebugInterface.h"


AndroidDebug::AndroidDebug() : startTime(Long.MAX_VALUE), bufferSize(32 *1024 *1024) {
        }
        
    auto AndroidDebug::start() -> void{
this->setStartTime(System.currentTimeMillis());
    
Debug::startMethodTracing("trace", this->bufferSize);
    
this->setRunning(true);
    
}


    auto AndroidDebug::stop() -> void{
this->startTime= Long.MAX_VALUE;
    
Debug::stopMethodTracing();
    
this->setRunning(false);
    
}


    auto AndroidDebug::getMaxTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 120000;
    
}


    auto AndroidDebug::setStartTime(int64_t startTime) -> void{
this->startTime= startTime;
    
}


    auto AndroidDebug::getStartTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startTime;
    
}


    auto AndroidDebug::setRunning(bool running) -> void{
this->running= running;
    
}


    auto AndroidDebug::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}




        #endif //ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_CPP
