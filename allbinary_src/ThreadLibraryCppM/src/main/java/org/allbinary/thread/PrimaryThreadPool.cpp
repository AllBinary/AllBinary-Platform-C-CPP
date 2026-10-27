
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
        



        #ifndef ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_CPP
        #define ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/PrimaryThreadPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadPool.h"

auto PrimaryThreadPool::THREAD_POOL_owner() -> ThreadPool* { static std::unique_ptr<ThreadPool> value(new ThreadPool("Primary", 1, ThreadPool::NORMAL_PRIORITY)); return value.get(); }
ThreadPool* PrimaryThreadPool::THREAD_POOL = PrimaryThreadPool::THREAD_POOL_owner();

    auto PrimaryThreadPool::getInstance() -> ThreadPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimaryThreadPool::THREAD_POOL;
    
}


PrimaryThreadPool::PrimaryThreadPool(std::string poolName, int32_t numThreads, int32_t priority) : ThreadPool(poolName, numThreads, priority){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto PrimaryThreadPool::runTask(Runnable* task) -> void{
this->logUtil->putF((new StringMaker())->append(StringUtil::getInstance()->toString(task))->appendlong(System.currentTimeMillis())->toString(), this, this->threadPoolStrings->ADD_TASK);
    
ThreadPool::runTask(task);
    
}


    auto PrimaryThreadPool::startTask(Runnable* task) -> void{
this->logUtil->putF((new StringMaker())->append(this->threadPoolStrings->START_TASK)->append(StringUtil::getInstance()->toString(task))->toString(), this, this->commonStrings->RUN);
    
}


    auto PrimaryThreadPool::completedTask(Runnable* task) -> void{
this->logUtil->putF((new StringMaker())->append(this->threadPoolStrings->COMPLETE_TASK)->append(StringUtil::getInstance()->toString(task))->toString(), this, this->commonStrings->RUN);
    
}




        #endif //ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_CPP
