
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
        



        #ifndef ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H
        #define ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
            #include "java/lang/Runnable.h"
        
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadPool.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PrimaryThreadPool: public ThreadPool {

    private: static ThreadPool* THREAD_POOL_owner();
    private: static ThreadPool* THREAD_POOL;

    public: static ThreadPool* getInstance();

public: PrimaryThreadPool(std::string poolName, int32_t numThreads, int32_t priority);

    public: void runTask(Runnable* task);

    /*protected*/ public: void startTask(Runnable* task);

    /*protected*/ public: void completedTask(Runnable* task);

};

            


        #endif //ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif

        #endif
    
