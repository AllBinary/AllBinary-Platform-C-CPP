
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
        



        #ifndef ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_H
        #define ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadPool.h"
#include "org/allbinary/thread/PriorityRunnable.h"
//This is mainly for network communications.
class PathFindingThreadPool: public ThreadPool {

    private: static inline ThreadPool* instance = new PathFindingThreadPool("PathFinding", 1, 1);

    public: static ThreadPool* getInstance();

public: PathFindingThreadPool(std::string poolName, int32_t numThreads, int32_t priority);

    public: void runTaskWithPriority(PriorityRunnable* task);

    public: void runTask(Runnable* task);

    protected: void startTask(Runnable* task);

    protected: void completedTask(Runnable* task);

};

            


        #endif //ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_H
