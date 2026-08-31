
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
            #include "../../../java/lang/InterruptedException.h"
        
            #include "../../../java/lang/Thread.h"
        
            #include "../../../java/lang/Runnable.h"
        
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
        

    private: static const ROOT_NAME: string = "-PooledThread-";

    public static const NORMAL_PRIORITY: int32_t = Thread.NORM_PRIORITY;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const NULL_RUNNABLE: NullRunnable = NullRunnable.getInstance()!;

    const threadPoolStrings: ThreadPoolStrings = ThreadPoolStrings.getInstance()!;

    const threadObjectUtil: ThreadObjectUtil = ThreadObjectUtil.getInstance()!;

    private: const poolName: string;

    private: const priority: int32_t;

    private: isAlive: bool = false;

    private: taskQueue: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: threadID: int32_t= 0;

    private: numThreads: int32_t;

    runningTask: bool= false;

public constructor (string poolName, int32_t numThreads, int32_t priority){

            super();
        this.poolName= poolName;
    
this.priority= priority;
    
this.numThreads= numThreads;
    
}


    public init(){

                        if(!this.isAlive)
                        
                                    {
                                    this.isAlive= true;
    
this.taskQueue= new BasicArrayListD();
    

    pooledThread: PooledThread;;
    




                        for (
    i: int32_t = 0;i < this.numThreads; i++)
        {
pooledThread= new PooledThread(this);
    
pooledThread!.setPriority(this.priority);
    
pooledThread!.start();
    
}


                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public runAPriorityTask(){



                            throw new RuntimeException();
                    
}


    public runTaskWithPriority(PriorityRunnable task){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(!this.isAlive)
                        
                                    {
                                    this.init();
    

                                    }
                                

                        if(task != 
                                    null
                                )
                        
                                    {
                                    
    size: int32_t = this.taskQueue!.size()!;;
    

    runnable: PriorityRunnable;;
    

    lowerPriorityRunnable: PriorityRunnable = this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
runnable= this.taskQueue!.get(index) as PriorityRunnable;
    

                        if(runnable.getPriority() > task.getPriority())
                        
                                    {
                                    lowerPriorityRunnable= runnable;
    
break;

                    

                                    }
                                
}


                        if(lowerPriorityRunnable == this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE)
                        
                                    {
                                    this.taskQueue!.add(task);
    

                                    }
                                
                        else {
                            
    index: int32_t = this.taskQueue!.indexOf(lowerPriorityRunnable)!;;
    
this.taskQueue!.addAt(index, task);
    

                        }
                            
this.notify();
    

                                    }
                                


}


    public runTask(Runnable task){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(!this.isAlive)
                        
                                    {
                                    this.init();
    

                                    }
                                

                        if(task != 
                                    null
                                )
                        
                                    {
                                    this.taskQueue!.add(task);
    
this.notify();
    

                                    }
                                


}


                //@Throws(InterruptedException.constructor)
            
    Runnable getTask(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

        while(this.taskQueue!.size() == 0)
        {

                        if(!this.isAlive)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NULL_RUNNABLE;
    

                                    }
                                
this.wait();
    
}


    runnable: Runnable = this.taskQueue!.removeAt(0) as Runnable;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return runnable;
    


}


    public clear(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(this.isAlive)
                        
                                    {
                                    this.taskQueue!.clear();
    

                                    }
                                


}


    public close(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

                        if(this.isAlive)
                        
                                    {
                                    this.isAlive= false;
    
this.taskQueue!.clear();
    

                                    }
                                


}


    public join(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this.isAlive= false;
    
this.taskQueue!.clear();
    
this.notifyAll();
    


}


    public bool isBusy(){

                        if(!this.isAlive)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(this.taskQueue!.size() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this.runningTask)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    threadStarted(){
}


    threadStopped(){

                        if(this.numThreads == 1)
                        
                                    {
                                    this.isAlive= false;
    
this.taskQueue!.clear();
    

                                    }
                                
}


    startTask(Runnable task){
}


    completedTask(Runnable task){
}


    public string createName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(this.poolName)!.append(ThreadPool.ROOT_NAME)!.appendint(this.threadID++)!.toString();;
    
}


};

            

