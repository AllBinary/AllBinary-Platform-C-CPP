
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_THREAD_MUSICTHREADPOOL_H
        #define ORG_ALLBINARY_THREAD_MUSICTHREADPOOL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadPool.h"

class MusicThreadPool: public ThreadPool {

    private: static ThreadPool* THREAD_POOL() { static std::unique_ptr<ThreadPool> value(new ThreadPool("Music", 2, ThreadPool::NORMAL_PRIORITY)); return value.get(); }

    public: static ThreadPool* getInstance();

public: MusicThreadPool(std::string poolName, int32_t numThreads, int32_t priority);

    public: void runTask(Runnable* task);

    protected: void startTask(Runnable* task);

    protected: void completedTask(Runnable* task);

};

            


        #endif //ORG_ALLBINARY_THREAD_MUSICTHREADPOOL_H
