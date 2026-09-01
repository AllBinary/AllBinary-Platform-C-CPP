
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

    private: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ThreadObjectUtil threadObjectUtil = ThreadObjectUtil::getInstance();

    private: ThreadPool threadPool;

public: PooledThread(ThreadPool threadPool);

    private: const std::string INTERRUPT_EXCEPTION = "Exit InterruptedException";

    public: void run();

};

            


        #endif //ORG_ALLBINARY_THREAD_POOLEDTHREAD_H
