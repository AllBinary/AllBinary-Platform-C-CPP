
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

            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThreadPool.h"

class PrimaryThreadPool: public ThreadPool {
        

    private: static const THREAD_POOL: ThreadPool = new ThreadPool("Primary", 1, ThreadPool.NORMAL_PRIORITY);

    public static ThreadPool getInstance();

public constructor (string poolName, int32_t numThreads, int32_t priority);

    public runTask(Runnable task);

    startTask(Runnable task);

    completedTask(Runnable task);

};

            


        #endif //ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H
