
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullRunnable.h"
#include "ThreadPoolStrings.h"
#include "ThreadObjectUtil.h"
#include "PooledThread.h"
#include "PriorityRunnable.h"

class ThreadPool
            : public Object
         {

    private: static const std::string ROOT_NAME = "-PooledThread-";

    public: static const int32_t NORMAL_PRIORITY = Thread::NORM_PRIORITY;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const NullRunnable NULL_RUNNABLE = NullRunnable::getInstance();

    protected: const ThreadPoolStrings threadPoolStrings = ThreadPoolStrings::getInstance();

    protected: const ThreadObjectUtil threadObjectUtil = ThreadObjectUtil::getInstance();

    private: std::string poolName;

    private: int32_t priority;

    private: bool isAlive = false;

    private: BasicArrayList taskQueue = BasicArrayListUtil::getInstance().getImmutableInstance();

    private: int32_t threadID= 0;

    private: int32_t numThreads;

    protected: bool runningTask= false;

public: ThreadPool(std::string poolName, int32_t numThreads, int32_t priority){
this->poolName= poolName;
    
this->priority= priority;
    
this->numThreads= numThreads;
    
}


    public: void init(){

                        if(!this->isAlive)
                        
                                    {
                                    this->isAlive= true;
    
this->taskQueue= BasicArrayListD();
    

    PooledThread pooledThread;;
    




                        for (
    int32_t i = 0;i < this->numThreads; i++)
        {
pooledThread= PooledThread(this);
    
pooledThread.setPriority(this->priority);
    
pooledThread.start();
    
}


                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void runAPriorityTask(){



                            throw RuntimeException();
                    
}


    public: void runTaskWithPriority(PriorityRunnable task){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(!this->isAlive)
                        
                                    {
                                    this->init();
    

                                    }
                                

                        if(task != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t size = this->taskQueue.size();;
    

    PriorityRunnable runnable;;
    

    PriorityRunnable lowerPriorityRunnable = this->threadObjectUtil.NULL_PRIORITY_RUNNABLE;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
runnable= this->taskQueue.get(index);
    

                        if(runnable.getPriority() > task.getPriority())
                        
                                    {
                                    lowerPriorityRunnable= runnable;
    
break;

                    

                                    }
                                
}


                        if(lowerPriorityRunnable == this->threadObjectUtil.NULL_PRIORITY_RUNNABLE)
                        
                                    {
                                    this->taskQueue.add(task);
    

                                    }
                                
                        else {
                            
    int32_t index = this->taskQueue.indexOf(lowerPriorityRunnable);;
    
this->taskQueue.addAt(index, task);
    

                        }
                            
this->notify();
    

                                    }
                                


}


    public: void runTask(Runnable task){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(!this->isAlive)
                        
                                    {
                                    this->init();
    

                                    }
                                

                        if(task != 
                                    nullptr
                                )
                        
                                    {
                                    this->taskQueue.add(task);
    
this->notify();
    

                                    }
                                


}


                //@Throws(InterruptedException.constructor)
            
    protected: Runnable getTask(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

        while(this->taskQueue.size() == 0)
        {

                        if(!this->isAlive)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_RUNNABLE;
    

                                    }
                                
this->wait();
    
}


    Runnable runnable = this->taskQueue.removeAt(0);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return runnable;
    


}


    public: void clear(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(this->isAlive)
                        
                                    {
                                    this->taskQueue.clear();
    

                                    }
                                


}


    public: void close(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(this->isAlive)
                        
                                    {
                                    this->isAlive= false;
    
this->taskQueue.clear();
    

                                    }
                                


}


    public: void join(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->isAlive= false;
    
this->taskQueue.clear();
    
this->notifyAll();
    


}


    public: bool isBusy(){

                        if(!this->isAlive)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(this->taskQueue.size() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this->runningTask)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    protected: void threadStarted(){
}


    protected: void threadStopped(){

                        if(this->numThreads == 1)
                        
                                    {
                                    this->isAlive= false;
    
this->taskQueue.clear();
    

                                    }
                                
}


    protected: void startTask(Runnable task){
}


    protected: void completedTask(Runnable task){
}


    public: std::string createName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(this->poolName).append(ThreadPool::ROOT_NAME).appendint(this->threadID++).toString();;
    
}


};

            

