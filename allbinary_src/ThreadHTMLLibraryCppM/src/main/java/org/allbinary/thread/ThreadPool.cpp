
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
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullRunnable.h"
#include "ThreadPoolStrings.h"
#include "ThreadObjectUtil.h"
#include "PriorityRunnable.h"

class ThreadPool
            : public Object
         {

    public: static const int32_t NORMAL_PRIORITY = 5;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const NullRunnable NULL_RUNNABLE = NullRunnable::getInstance();

    protected: const ThreadPoolStrings threadPoolStrings = ThreadPoolStrings::getInstance();

    protected: const ThreadObjectUtil threadObjectUtil = ThreadObjectUtil::getInstance();

    private: bool isAlive= false;

    private: BasicArrayList taskQueue = BasicArrayListD();

    private: int32_t numThreads= 0;

    private: bool runningTask= false;

public: ThreadPool(std::string poolName, int32_t numThreads, int32_t priority){
}


    private: PriorityRunnable currentPriorityRunnable = this->threadObjectUtil.NULL_PRIORITY_RUNNABLE;

                //@Throws(Exception.constructor)
            
    public: void runAPriorityTask(){

                        if(!this->currentPriorityRunnable.isDone())
                        
                                    {
                                    this->currentPriorityRunnable.run();
    

                                    }
                                
                        else {
                            
    Runnable runnable = this->getTask();;
    

                        if(runnable == this->NULL_RUNNABLE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->currentPriorityRunnable= runnable;
    

                        if(!(this->currentPriorityRunnable == this->threadObjectUtil.NULL_PRIORITY_RUNNABLE))
                        
                                    {
                                    this->currentPriorityRunnable.reset();
    
this->currentPriorityRunnable.run();
    

                                    }
                                

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void runATask(){

    Runnable runnable = this->getTask();;
    

                        if(runnable != 
                                    nullptr
                                )
                        
                                    {
                                    runnable.run();
    

                                    }
                                
}


    public: void init(){

                        if(!this->isAlive)
                        
                                    {
                                    this->isAlive= true;
    
this->taskQueue= BasicArrayListD();
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void runTaskWithPriority(PriorityRunnable task){

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
                            

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void runTask(Runnable task){

                        if(!this->isAlive)
                        
                                    {
                                    this->init();
    

                                    }
                                

                        if(task != 
                                    nullptr
                                )
                        
                                    {
                                    this->taskQueue.add(task);
    

                                    }
                                
}


                //@Throws(InterruptedException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: Runnable getTask(){

                        if(this->taskQueue.isEmpty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_RUNNABLE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->taskQueue.removeAt(0);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void clear(){
this->taskQueue.clear();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void close(){

                        if(this->isAlive)
                        
                                    {
                                    this->isAlive= false;
    
this->taskQueue.clear();
    
this->currentPriorityRunnable= this->threadObjectUtil.NULL_PRIORITY_RUNNABLE;
    

                                    }
                                
}


    public: void join(){
this->isAlive= false;
    
this->taskQueue.clear();
    
this->currentPriorityRunnable= this->threadObjectUtil.NULL_PRIORITY_RUNNABLE;
    
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
    
this->currentPriorityRunnable= this->threadObjectUtil.NULL_PRIORITY_RUNNABLE;
    

                                    }
                                
}


    protected: void startTask(Runnable task){
}


    protected: void completedTask(Runnable task){
}


};

            

