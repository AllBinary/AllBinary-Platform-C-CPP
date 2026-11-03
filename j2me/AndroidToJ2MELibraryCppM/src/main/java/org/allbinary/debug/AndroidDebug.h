
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Long.h"
        
class Debug;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/debug/DebugInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidDebug
            : public virtual Object
        , public virtual DebugInterface {


            
    public: AndroidDebug();
        
    private: int64_t startTime;

    private: bool running = false;

    private: int32_t bufferSize;

    public: void start();

    public: void stop();

    public: int64_t getMaxTime();

    private: void setStartTime(int64_t startTime);

    public: int64_t getStartTime();

    private: void setRunning(bool running);

    public: bool isRunning();

};

            


        #endif //ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_H_COMPLETE)
        #define ORG_ALLBINARY_DEBUG_ANDROIDDEBUG_H_COMPLETE
        #if __has_include(<android/os/Debug.h>)
#include <android/os/Debug.h>
#endif
#if __has_include("org/allbinary/debug/DebugInterface.h")
#include "org/allbinary/debug/DebugInterface.h"
#endif

        #endif
    
