
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
        



        #ifndef ORG_ALLBINARY_THREAD_ABRUNNABLE_H
        #define ORG_ALLBINARY_THREAD_ABRUNNABLE_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RunnableInterface.h"

class ABRunnable
            : public Object
        : public RunnableInterface {

    private: bool running = false;

    public: void setThread(Thread thread);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_THREAD_ABRUNNABLE_H
