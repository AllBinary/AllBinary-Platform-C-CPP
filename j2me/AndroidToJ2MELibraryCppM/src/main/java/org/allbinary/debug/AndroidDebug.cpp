
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Long.h"
        
#include <android/os/Debug.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/debug/DebugInterface.h"

class AndroidDebug
            : public Object
        , public DebugInterface {

    private: int64_t startTime = Long.MAX_VALUE;

    private: bool running = false;

    private: int32_t bufferSize = 32 *1024 *1024;

    public: void start(){
this->setStartTime(System.currentTimeMillis());
    
Debug::startMethodTracing("trace", this->bufferSize);
    
this->setRunning(true);
    
}


    public: void stop(){
this->startTime= Long.MAX_VALUE;
    
Debug::stopMethodTracing();
    
this->setRunning(false);
    
}


    public: int64_t getMaxTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 120000;
    
}


    private: void setStartTime(int64_t startTime){
this->startTime= startTime;
    
}


    public: int64_t getStartTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startTime;
    
}


    private: void setRunning(bool running){
this->running= running;
    
}


    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}


};

            

