
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
        



        #ifndef ORG_ALLBINARY_THREAD_IMAGETHREADPOOL_CPP
        #define ORG_ALLBINARY_THREAD_IMAGETHREADPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/ImageThreadPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadPool.h"
//This is mainly for network communications.
ThreadPool* ImageThreadPool::instance = new ImageThreadPool("ImageLoader", 1, ThreadPool::NORMAL_PRIORITY);

    auto ImageThreadPool::getInstance() -> ThreadPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageThreadPool::instance;
    
}


ImageThreadPool::ImageThreadPool(std::string poolName, int32_t numThreads, int32_t priority) : ThreadPool(poolName, numThreads, priority), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ImageThreadPool::runTask(Runnable* task) -> void{
ThreadPool::runTask(task);
    
}


    auto ImageThreadPool::startTask(Runnable* task) -> void{
}


    auto ImageThreadPool::completedTask(Runnable* task) -> void{
}




        #endif //ORG_ALLBINARY_THREAD_IMAGETHREADPOOL_CPP
