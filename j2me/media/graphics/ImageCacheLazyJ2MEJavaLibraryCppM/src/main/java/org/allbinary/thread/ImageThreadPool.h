
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
        



        #ifndef ORG_ALLBINARY_THREAD_IMAGETHREADPOOL_H
        #define ORG_ALLBINARY_THREAD_IMAGETHREADPOOL_H

            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThreadPool.h"
//This is mainly for network communications.
class ImageThreadPool: public ThreadPool {
        

    private: static const instance: ThreadPool = new ImageThreadPool("ImageLoader", 1, ThreadPool.NORMAL_PRIORITY);

    public static ThreadPool getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (string poolName, int32_t numThreads, int32_t priority);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public runTask(Runnable task);

    startTask(Runnable task);

    completedTask(Runnable task);

};

            


        #endif //ORG_ALLBINARY_THREAD_IMAGETHREADPOOL_H
