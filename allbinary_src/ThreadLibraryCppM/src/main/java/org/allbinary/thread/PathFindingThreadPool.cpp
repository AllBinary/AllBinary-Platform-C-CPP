
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
        



            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThreadPool.h"
#include "PriorityRunnable.h"
//This is mainly for network communications.
class PathFindingThreadPool: public ThreadPool {

    private: static const ThreadPool instance = PathFindingThreadPool("PathFinding", 1, 1);

    public: static ThreadPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingThreadPool::instance();
    
}


public: PathFindingThreadPool(std::string poolName, int32_t numThreads, int32_t priority) : ThreadPool(poolName, numThreads, ThreadPool::NORMAL_PRIORITY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void runTaskWithPriority(PriorityRunnable task){
super.runTaskWithPriority(task);
    
}


    public: void runTask(Runnable task){
super.runTask(task);
    
}


    protected: void startTask(Runnable task){
}


    protected: void completedTask(Runnable task){
}


};

            

