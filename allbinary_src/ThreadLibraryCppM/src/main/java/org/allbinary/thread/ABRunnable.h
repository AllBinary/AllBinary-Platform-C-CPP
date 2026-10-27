
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Thread.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/RunnableInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABRunnable
            : public virtual Object
        , public RunnableInterface {


            
    public: ABRunnable();
        
    private: bool running = false;

    public: void setThread(Thread* thread);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_THREAD_ABRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_ABRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_ABRUNNABLE_H_COMPLETE
        #if __has_include("org/allbinary/thread/RunnableInterface.h")
#include "org/allbinary/thread/RunnableInterface.h"
#endif

        #endif
    
