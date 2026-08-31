
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
        

    public static const NORMAL_PRIORITY: int32_t = 5;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const NULL_RUNNABLE: NullRunnable = NullRunnable.getInstance()!;

    const threadPoolStrings: ThreadPoolStrings = ThreadPoolStrings.getInstance()!;

    const threadObjectUtil: ThreadObjectUtil = ThreadObjectUtil.getInstance()!;

    private: isAlive: bool= false;

    private: taskQueue: BasicArrayList = new BasicArrayListD();

    private: numThreads: int32_t= 0;

    private: runningTask: bool= false;

public constructor (string poolName, int32_t numThreads, int32_t priority);

    private: currentPriorityRunnable: PriorityRunnable = this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE;

                //@Throws(Exception.constructor)
            
    public runAPriorityTask();

                //@Throws(Exception.constructor)
            
    public runATask();

    public init();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public runTaskWithPriority(PriorityRunnable task);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public runTask(Runnable task);

                //@Throws(InterruptedException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    Runnable getTask();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public clear();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public close();

    public join();

    public bool isBusy();

    threadStarted();

    threadStopped();

    startTask(Runnable task);

    completedTask(Runnable task);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADPOOL_H
