
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
        
            #include "../../../java/lang/RuntimeException.h"
        
            #include "../../../java/lang/InterruptedException.h"
        
            #include "../../../java/lang/Thread.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullRunnable.h"
#include "ThreadPoolStrings.h"
#include "ThreadObjectUtil.h"
#include "PooledThread.h"
#include "PriorityRunnable.h"

class ThreadPool
            : public Object
         {
        

    private: static const ROOT_NAME: string = "-PooledThread-";

    public static const NORMAL_PRIORITY: int32_t = Thread.NORM_PRIORITY;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const NULL_RUNNABLE: NullRunnable = NullRunnable.getInstance()!;

    const threadPoolStrings: ThreadPoolStrings = ThreadPoolStrings.getInstance()!;

    const threadObjectUtil: ThreadObjectUtil = ThreadObjectUtil.getInstance()!;

    private: const poolName: string;

    private: const priority: int32_t;

    private: isAlive: bool = false;

    private: taskQueue: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: threadID: int32_t= 0;

    private: numThreads: int32_t;

    runningTask: bool= false;

public constructor (string poolName, int32_t numThreads, int32_t priority);

    public init();

                //@Throws(Exception.constructor)
            
    public runAPriorityTask();

    public runTaskWithPriority(PriorityRunnable task);

    public runTask(Runnable task);

                //@Throws(InterruptedException.constructor)
            
    Runnable getTask();

    public clear();

    public close();

    public join();

    public bool isBusy();

    threadStarted();

    threadStopped();

    startTask(Runnable task);

    completedTask(Runnable task);

    public string createName();

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADPOOL_H
