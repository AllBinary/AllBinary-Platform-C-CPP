
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
        



        #ifndef ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_CPP
        #define ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/PathFindingThreadPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadPool.h"
#include "org/allbinary/thread/PriorityRunnable.h"
//This is mainly for network communications.
ThreadPool* PathFindingThreadPool::instance = new PathFindingThreadPool("PathFinding", 1, 1);

    auto PathFindingThreadPool::getInstance() -> ThreadPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PathFindingThreadPool::instance;
    
}


PathFindingThreadPool::PathFindingThreadPool(std::string poolName, int32_t numThreads, int32_t priority) : ThreadPool(poolName, numThreads, ThreadPool::NORMAL_PRIORITY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto PathFindingThreadPool::runTaskWithPriority(PriorityRunnable* task) -> void{
ThreadPool::runTaskWithPriority(task);
    
}


    auto PathFindingThreadPool::runTask(Runnable* task) -> void{
ThreadPool::runTask(task);
    
}


    auto PathFindingThreadPool::startTask(Runnable* task) -> void{
}


    auto PathFindingThreadPool::completedTask(Runnable* task) -> void{
}




        #endif //ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_CPP
