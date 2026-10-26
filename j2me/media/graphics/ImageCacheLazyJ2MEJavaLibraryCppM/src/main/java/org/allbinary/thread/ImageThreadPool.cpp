
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
        
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThreadPool.h"
//This is mainly for network communications.
class ImageThreadPool: public ThreadPool {

    private: static const ThreadPool instance = ImageThreadPool("ImageLoader", 1, ThreadPool::NORMAL_PRIORITY);

    public: static ThreadPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageThreadPool::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

public: ImageThreadPool(std::string poolName, int32_t numThreads, int32_t priority) : ThreadPool(poolName, numThreads, priority){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void runTask(Runnable task){
super.runTask(task);
    
}


    protected: void startTask(Runnable task){
}


    protected: void completedTask(Runnable task){
}


};

            

