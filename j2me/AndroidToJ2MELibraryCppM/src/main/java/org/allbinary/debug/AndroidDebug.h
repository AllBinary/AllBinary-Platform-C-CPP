
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
        



        #ifndef ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_H
        #define ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_H

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

    public: void start();

    public: void stop();

    public: int64_t getMaxTime();

    private: void setStartTime(int64_t startTime);

    public: int64_t getStartTime();

    private: void setRunning(bool running);

    public: bool isRunning();

};

            


        #endif //ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_H
