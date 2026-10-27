
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_THREAD_POOLEDTHREAD_H
        #define ORG_ALLBINARY_THREAD_POOLEDTHREAD_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
class LogUtil;
class StringMaker;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ThreadObjectUtil;
class ThreadPool;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PooledThread: public Thread {

    private: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: ThreadObjectUtil* threadObjectUtil;

    private: ThreadPool* threadPool;

public: PooledThread(ThreadPool* threadPool);

    private: const std::string INTERRUPT_EXCEPTION = "Exit InterruptedException";

    public: void run();

};

            


        #endif //ORG_ALLBINARY_THREAD_POOLEDTHREAD_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_POOLEDTHREAD_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_POOLEDTHREAD_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/thread/ThreadObjectUtil.h")
#include "org/allbinary/thread/ThreadObjectUtil.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif

        #endif
    
