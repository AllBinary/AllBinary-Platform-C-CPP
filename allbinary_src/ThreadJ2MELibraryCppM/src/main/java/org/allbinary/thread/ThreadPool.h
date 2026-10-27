
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
        



        #ifndef ORG_ALLBINARY_THREAD_THREADPOOL_H
        #define ORG_ALLBINARY_THREAD_THREADPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
class LogUtil;
class StringMaker;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NullRunnable;
class ThreadPoolStrings;
class ThreadObjectUtil;
class PooledThread;
class PriorityRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThreadPool
            : public virtual Object
         {

    private: static inline const std::string ROOT_NAME = "-PooledThread-";

    public: static inline const int32_t NORMAL_PRIORITY = Thread::NORM_PRIORITY;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: NullRunnable* NULL_RUNNABLE;

    /*protected*/ public: ThreadPoolStrings* threadPoolStrings;

    /*protected*/ public: ThreadObjectUtil* threadObjectUtil;

    private: std::string poolName;

    private: int32_t priority;

    private: bool isAlive = false;

    private: BasicArrayList* taskQueue;

    private: int32_t threadID= 0;

    private: int32_t numThreads;

    /*protected*/ public: bool runningTask= false;

public: ThreadPool(std::string poolName, int32_t numThreads, int32_t priority);

    public: void init();

                //@Throws(Exception.constructor)
            
    public: void runAPriorityTask();

    public: void runTaskWithPriority(PriorityRunnable* task);

    public: void runTask(Runnable* task);

                //@Throws(InterruptedException.constructor)
            
    /*protected*/ public: Runnable* getTask();

    public: void clear();

    public: void close();

    public: void join();

    public: bool isBusy();

    /*protected*/ public: void threadStarted();

    /*protected*/ public: void threadStopped();

    /*protected*/ public: void startTask(Runnable* task);

    /*protected*/ public: void completedTask(Runnable* task);

    public: std::string createName();

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_THREADPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_THREADPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/thread/NullRunnable.h")
#include "org/allbinary/thread/NullRunnable.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPoolStrings.h")
#include "org/allbinary/thread/ThreadPoolStrings.h"
#endif
#if __has_include("org/allbinary/thread/ThreadObjectUtil.h")
#include "org/allbinary/thread/ThreadObjectUtil.h"
#endif
#if __has_include("org/allbinary/thread/PooledThread.h")
#include "org/allbinary/thread/PooledThread.h"
#endif
#if __has_include("org/allbinary/thread/PriorityRunnable.h")
#include "org/allbinary/thread/PriorityRunnable.h"
#endif

        #endif
    
