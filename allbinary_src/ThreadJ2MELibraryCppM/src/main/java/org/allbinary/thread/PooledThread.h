
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

            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/InterruptedException.h"
        
            #include "../../../java/lang/Thread.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThreadObjectUtil.h"
#include "ThreadPool.h"

class PooledThread: public Thread {
        

    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const threadObjectUtil: ThreadObjectUtil = ThreadObjectUtil.getInstance()!;

    private: const threadPool: ThreadPool;

public constructor (ThreadPool threadPool);

    private: const INTERRUPT_EXCEPTION: string = "Exit InterruptedException";

    public run();

};

            


        #endif //ORG_ALLBINARY_THREAD_POOLEDTHREAD_H
