
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Long.h"
        
#include <android/os/Debug.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DebugInterface.h"

class AndroidDebug
            : public Object
        : public DebugInterface {
        

    private: startTime: int64_t = Long.MAX_VALUE;

    private: running: bool = false;

    private: bufferSize: int32_t = 32 *1024 *1024;

    public start(){
this.setStartTime(Date.now());
    
Debug.startMethodTracing("trace", this.bufferSize);
    
this.setRunning(true);
    
}


    public stop(){
this.startTime= Long.MAX_VALUE;
    
Debug.stopMethodTracing();
    
this.setRunning(false);
    
}


    public int64_t getMaxTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 120000;
    
}


    setStartTime(int64_t startTime){
this.startTime= startTime;
    
}


    public int64_t getStartTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startTime;
    
}


    setRunning(bool running){
this.running= running;
    
}


    public bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.running;
    
}


};

            

