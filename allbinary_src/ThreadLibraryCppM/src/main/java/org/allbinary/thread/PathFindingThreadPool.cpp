
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
        



            #include "../../../java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThreadPool.h"
#include "PriorityRunnable.h"
//This is mainly for network communications.
class PathFindingThreadPool: public ThreadPool {
        

    private: static const instance: ThreadPool = new PathFindingThreadPool("PathFinding", 1, 1);

    public static ThreadPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingThreadPool.instance;
    
}


public constructor (string poolName, int32_t numThreads, int32_t priority){
            super(poolName, numThreads, ThreadPool.NORMAL_PRIORITY);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public runTaskWithPriority(PriorityRunnable task){
super.runTaskWithPriority(task);
    
}


    public runTask(Runnable task){
super.runTask(task);
    
}


    startTask(Runnable task){
}


    completedTask(Runnable task){
}


};

            

