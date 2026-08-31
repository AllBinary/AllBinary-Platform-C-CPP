
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/InterruptedException.h"
        
            #include "../../../java/lang/Thread.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThreadObjectUtil.h"
#include "ThreadPool.h"

class PooledThread: public Thread {
        

    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const threadObjectUtil: ThreadObjectUtil = ThreadObjectUtil.getInstance()!;

    private: const threadPool: ThreadPool;

public constructor (ThreadPool threadPool){
            super(threadPool!.createName());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(this.commonStrings!.CONSTRUCTOR, this, this.commonStrings!.CONSTRUCTOR);
    
this.threadPool= threadPool;
    
}


    private: const INTERRUPT_EXCEPTION: string = "Exit InterruptedException";

    public run(){
this.threadPool!.threadStarted();
    

        while(true)
        {

    task2: Runnable = this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE;;
    

        try {
            task2= this.threadPool!.getTask();
    
this.threadPool!.runningTask= true;
    
this.threadPool!.startTask(task2);
    

                //: 
} catch(ex) 
            {

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.putF(this.INTERRUPT_EXCEPTION, this, this.commonStrings!.RUN);
    
break;

                    
}


                        if(task2 == this.threadObjectUtil!.NULL_PRIORITY_RUNNABLE)
                        
                                    {
                                    break;

                    

                                    }
                                

        try {
            task2.run();
    
this.threadPool!.completedTask(task2);
    
this.threadPool!.runningTask= false;
    

                //: 
} catch(e) 
            {

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.put(new StringMaker().append(this.commonStrings!.EXCEPTION_LABEL)!.append(StringUtil.getInstance()!.toString(task2))!.toString(), this, this.commonStrings!.RUN, e);
    
}

}

this.threadPool!.threadStopped();
    
}


};

            

