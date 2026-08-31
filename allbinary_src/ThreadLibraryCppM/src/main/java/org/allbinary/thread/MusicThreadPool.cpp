
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThreadPool.h"

class MusicThreadPool: public ThreadPool {
        

    private: static const THREAD_POOL: ThreadPool = new ThreadPool("Music", 2, ThreadPool.NORMAL_PRIORITY);

    public static ThreadPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MusicThreadPool.THREAD_POOL;
    
}


public constructor (string poolName, int32_t numThreads, int32_t priority){
            super(poolName, numThreads, priority);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public runTask(Runnable task){
this.logUtil!.putF(new StringMaker().append(StringUtil.getInstance()!.toString(task))!.appendlong(Date.now())!.toString(), this, this.threadPoolStrings!.ADD_TASK);
    
super.runTask(task);
    
}


    startTask(Runnable task){
this.logUtil!.putF(new StringMaker().append(this.threadPoolStrings!.START_TASK)!.append(StringUtil.getInstance()!.toString(task))!.appendlong(Date.now())!.toString(), this, this.commonStrings!.RUN);
    
}


    completedTask(Runnable task){
this.logUtil!.putF(new StringMaker().append(this.threadPoolStrings!.COMPLETE_TASK)!.append(StringUtil.getInstance()!.toString(task))!.appendlong(Date.now())!.toString(), this, this.commonStrings!.RUN);
    
}


};

            

