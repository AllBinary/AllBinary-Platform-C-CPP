
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
        



        #ifndef ORG_ALLBINARY_THREAD_SECONDARYTHREADPOOL_CPP
        #define ORG_ALLBINARY_THREAD_SECONDARYTHREADPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/SecondaryThreadPool.h"
        

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
//This is mainly for network communications.
ThreadPool* SecondaryThreadPool::instance = new SecondaryThreadPool("Secondary", 1, ThreadPool::NORMAL_PRIORITY);

    auto SecondaryThreadPool::getInstance() -> ThreadPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SecondaryThreadPool::instance;
    
}


SecondaryThreadPool::SecondaryThreadPool(std::string poolName, int32_t numThreads, int32_t priority) : ThreadPool(poolName, numThreads, priority){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto SecondaryThreadPool::runTask(Runnable* task) -> void{
this->logUtil->putF((new StringMaker())->append(StringUtil::getInstance()->toString(task))->appendlong(System.currentTimeMillis())->toString(), this, this->threadPoolStrings->ADD_TASK);
    
ThreadPool::runTask(task);
    
}


    auto SecondaryThreadPool::startTask(Runnable* task) -> void{
this->logUtil->putF((new StringMaker())->append(this->threadPoolStrings->START_TASK)->append(StringUtil::getInstance()->toString(task))->appendlong(System.currentTimeMillis())->toString(), this, this->commonStrings->RUN);
    
}


    auto SecondaryThreadPool::completedTask(Runnable* task) -> void{
this->logUtil->putF((new StringMaker())->append(this->threadPoolStrings->COMPLETE_TASK)->append(StringUtil::getInstance()->toString(task))->appendlong(System.currentTimeMillis())->toString(), this, this->commonStrings->RUN);
    
}




        #endif //ORG_ALLBINARY_THREAD_SECONDARYTHREADPOOL_CPP
