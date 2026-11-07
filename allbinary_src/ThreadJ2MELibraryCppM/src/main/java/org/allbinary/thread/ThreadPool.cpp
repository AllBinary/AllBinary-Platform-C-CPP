
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
        



        #ifndef ORG_ALLBINARY_THREAD_THREADPOOL_CPP
        #define ORG_ALLBINARY_THREAD_THREADPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/ThreadPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/thread/NullRunnable.h"
#include "org/allbinary/thread/ThreadPoolStrings.h"
#include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/thread/PooledThread.h"
#include "org/allbinary/thread/PriorityRunnable.h"


ThreadPool::ThreadPool(std::string poolName, int32_t numThreads, int32_t priority) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), NULL_RUNNABLE(NullRunnable::getInstance()), threadPoolStrings(ThreadPoolStrings::getInstance()), threadObjectUtil(ThreadObjectUtil::getInstance()), taskQueue(BasicArrayListUtil::getInstance()->getImmutableInstance()){
this->poolName= poolName;
    
this->priority= priority;
    
this->numThreads= numThreads;
    
}


    auto ThreadPool::init() -> void{

                        if(!this->isAlive)
                        
                                    {
                                    this->isAlive= true;
    
this->taskQueue= new BasicArrayListD();
    

    PooledThread* pooledThread;;
    




                        for (
    int32_t i = 0;i < this->numThreads; i++)
        {
pooledThread= new PooledThread(this);
    
pooledThread->setPriority(this->priority);
    
pooledThread->start();
    
}


                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto ThreadPool::runAPriorityTask() -> void{



                            throw RuntimeException();
                    
}


    auto ThreadPool::runTaskWithPriority(PriorityRunnable* task) -> void{

        
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
                                    
    int32_t size = this->taskQueue->size();;
    

    PriorityRunnable* runnable;;
    

    PriorityRunnable* lowerPriorityRunnable = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
runnable= dynamic_cast<PriorityRunnable*>(this->taskQueue->get(index));
    

                        if(runnable->getPriority() > task->getPriority())
                        
                                    {
                                    lowerPriorityRunnable= runnable;
    
break;

                    

                                    }
                                
}


                        if(lowerPriorityRunnable == this->threadObjectUtil->NULL_PRIORITY_RUNNABLE)
                        
                                    {
                                    this->taskQueue->add(task);
    

                                    }
                                
                        else {
                            
    int32_t index = this->taskQueue->indexOf(lowerPriorityRunnable);;
    
this->taskQueue->addAt(index, task);
    

                        }
                            
this->notify();
    

                                    }
                                


}


    auto ThreadPool::runTask(Runnable* task) -> void{

        
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
                                    this->taskQueue->add(task);
    
this->notify();
    

                                    }
                                


}


                //@Throws(InterruptedException.constructor)
            
    auto ThreadPool::getTask() -> Runnable*{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

        while(this->taskQueue->size() == 0)
        {

                        if(!this->isAlive)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NULL_RUNNABLE;
    

                                    }
                                
this->wait();
    
}


    Runnable* runnable = dynamic_cast<Runnable*>(this->taskQueue->removeAt(0));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return runnable;
    


}


    auto ThreadPool::clear() -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(this->isAlive)
                        
                                    {
                                    this->taskQueue->clear();
    

                                    }
                                


}


    auto ThreadPool::close() -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(this->isAlive)
                        
                                    {
                                    this->isAlive= false;
    
this->taskQueue->clear();
    

                                    }
                                


}


    auto ThreadPool::join() -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->isAlive= false;
    
this->taskQueue->clear();
    
this->notifyAll();
    


}


    auto ThreadPool::isBusy() -> bool{

                        if(!this->isAlive)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                

                        if(this->taskQueue->size() > 0)
                        
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


    auto ThreadPool::threadStarted() -> void{
}


    auto ThreadPool::threadStopped() -> void{

                        if(this->numThreads == 1)
                        
                                    {
                                    this->isAlive= false;
    
this->taskQueue->clear();
    

                                    }
                                
}


    auto ThreadPool::startTask(Runnable* task) -> void{
}


    auto ThreadPool::completedTask(Runnable* task) -> void{
}


    auto ThreadPool::createName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf((new StringMaker())->append(this->poolName)->append(ThreadPool::ROOT_NAME)->appendint(this->threadID++));;
    
}




        #endif //ORG_ALLBINARY_THREAD_THREADPOOL_CPP
