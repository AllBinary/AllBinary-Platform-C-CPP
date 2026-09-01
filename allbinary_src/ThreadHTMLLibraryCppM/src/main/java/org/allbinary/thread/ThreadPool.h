
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/InterruptedException.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullRunnable.h"
#include "ThreadPoolStrings.h"
#include "ThreadObjectUtil.h"
#include "PriorityRunnable.h"

class ThreadPool
            : public Object
         {

    public: static const int32_t NORMAL_PRIORITY = 5;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const NullRunnable NULL_RUNNABLE = NullRunnable::getInstance();

    protected: const ThreadPoolStrings threadPoolStrings = ThreadPoolStrings::getInstance();

    protected: const ThreadObjectUtil threadObjectUtil = ThreadObjectUtil::getInstance();

    private: bool isAlive= false;

    private: BasicArrayList taskQueue = BasicArrayListD();

    private: int32_t numThreads= 0;

    private: bool runningTask= false;

public: ThreadPool(std::string poolName, int32_t numThreads, int32_t priority);

    private: PriorityRunnable currentPriorityRunnable = this->threadObjectUtil.NULL_PRIORITY_RUNNABLE;

                //@Throws(Exception.constructor)
            
    public: void runAPriorityTask();

                //@Throws(Exception.constructor)
            
    public: void runATask();

    public: void init();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void runTaskWithPriority(PriorityRunnable task);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void runTask(Runnable task);

                //@Throws(InterruptedException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: Runnable getTask();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void clear();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void close();

    public: void join();

    public: bool isBusy();

    protected: void threadStarted();

    protected: void threadStopped();

    protected: void startTask(Runnable task);

    protected: void completedTask(Runnable task);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADPOOL_H
