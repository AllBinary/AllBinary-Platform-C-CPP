
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

class PrimaryThreadPool: public ThreadPool {

    private: static ThreadPool* THREAD_POOL() { static std::unique_ptr<ThreadPool> value(new ThreadPool("Primary", 1, ThreadPool::NORMAL_PRIORITY)); return value.get(); }

    public: static ThreadPool* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimaryThreadPool::THREAD_POOL();
    
}


public: PrimaryThreadPool(std::string poolName, int32_t numThreads, int32_t priority) : ThreadPool(poolName, numThreads, priority){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void runTask(Runnable* task){
this->logUtil.putF((new StringMaker())->append(StringUtil::getInstance()->toString(task))->appendlong(System.currentTimeMillis())->toString(), this, this->threadPoolStrings.ADD_TASK);
    
super.runTask(task);
    
}


    protected: void startTask(Runnable* task){
this->logUtil.putF((new StringMaker())->append(this->threadPoolStrings.START_TASK)->append(StringUtil::getInstance()->toString(task))->toString(), this, this->commonStrings.RUN);
    
}


    protected: void completedTask(Runnable* task){
this->logUtil.putF((new StringMaker())->append(this->threadPoolStrings.COMPLETE_TASK)->append(StringUtil::getInstance()->toString(task))->toString(), this, this->commonStrings.RUN);
    
}


};

            

