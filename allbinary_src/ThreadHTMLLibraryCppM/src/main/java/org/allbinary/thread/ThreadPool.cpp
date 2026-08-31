
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
        
            #include "../../../java/lang/InterruptedException.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullRunnable.h"
#include "ThreadPoolStrings.h"
#include "ThreadObjectUtil.h"
#include "PriorityRunnable.h"

class ThreadPool
            : public Object
         {
        

    public static const NORMAL_PRIORITY: int32_t = 5;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const NULL_RUNNABLE: NullRunnable = NullRunnable.getInstance()!;

    const threadPoolStrings: ThreadPoolStrings = ThreadPoolStrings.getInstance()!;

    const threadObjectUtil: ThreadObjectUtil = ThreadObjectUtil.getInstance()!;

    private: isAlive: bool= false;

    private: taskQueue: BasicArrayList = new BasicArrayListD();

    private: numThreads: int32_t= 0;

    private: runningTask: bool= false;

public constructor (string poolName, int32_t numThreads, int32_t priority){

            super();
        }


    private: currentPriorityRunnable: PriorityRunnable = this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE;

                //@Throws(Exception.constructor)
            
    public runAPriorityTask(){

                        if(!this.currentPriorityRunnable!.isDone())
                        
                                    {
                                    this.currentPriorityRunnable!.run();
    

                                    }
                                
                        else {
                            
    runnable: Runnable = this.getTask()!;;
    

                        if(runnable == this.NULL_RUNNABLE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this.currentPriorityRunnable= runnable as PriorityRunnable;
    

                        if(!(this.currentPriorityRunnable == this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE))
                        
                                    {
                                    this.currentPriorityRunnable!.reset();
    
this.currentPriorityRunnable!.run();
    

                                    }
                                

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public runATask(){

    runnable: Runnable = this.getTask()!;;
    

                        if(runnable != 
                                    null
                                )
                        
                                    {
                                    runnable.run();
    

                                    }
                                
}


    public init(){

                        if(!this.isAlive)
                        
                                    {
                                    this.isAlive= true;
    
this.taskQueue= new BasicArrayListD();
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public runTaskWithPriority(PriorityRunnable task){

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
                            

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public runTask(Runnable task){

                        if(!this.isAlive)
                        
                                    {
                                    this.init();
    

                                    }
                                

                        if(task != 
                                    null
                                )
                        
                                    {
                                    this.taskQueue!.add(task);
    

                                    }
                                
}


                //@Throws(InterruptedException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    Runnable getTask(){

                        if(this.taskQueue!.isEmpty())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NULL_RUNNABLE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.taskQueue!.removeAt(0) as Runnable;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public clear(){
this.taskQueue!.clear();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public close(){

                        if(this.isAlive)
                        
                                    {
                                    this.isAlive= false;
    
this.taskQueue!.clear();
    
this.currentPriorityRunnable= this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE;
    

                                    }
                                
}


    public join(){
this.isAlive= false;
    
this.taskQueue!.clear();
    
this.currentPriorityRunnable= this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE;
    
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
    
this.currentPriorityRunnable= this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE;
    

                                    }
                                
}


    startTask(Runnable task){
}


    completedTask(Runnable task){
}


};

            

