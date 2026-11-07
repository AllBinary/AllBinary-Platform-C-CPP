
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
        



        #ifndef ORG_ALLBINARY_THREAD_POOLEDTHREAD_CPP
        #define ORG_ALLBINARY_THREAD_POOLEDTHREAD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/PooledThread.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/thread/ThreadPool.h"


PooledThread::PooledThread(ThreadPool* threadPool) : Thread(threadPool->createName()), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), threadObjectUtil(ThreadObjectUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
    
this->threadPool= threadPool;
    
}


    auto PooledThread::run() -> void{
this->threadPool->threadStarted();
    

        while(true)
        {

    Runnable* task2 = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;;
    

        try {
            task2= this->threadPool->getTask();
    
this->threadPool->runningTask= true;
    
this->threadPool->startTask(task2);
    

                //: 
} catch(InterruptedException& ex) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF(this->INTERRUPT_EXCEPTION, this, this->commonStrings->RUN);
    
break;

                    
}


                        if(task2 == this->threadObjectUtil->NULL_PRIORITY_RUNNABLE)
                        
                                    {
                                    break;

                    

                                    }
                                

        try {
            task2->run();
    
this->threadPool->completedTask(task2);
    
this->threadPool->runningTask= false;
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->put(JavaString::valueOf((new StringMaker())->append(this->commonStrings->EXCEPTION_LABEL)->append(StringUtil::getInstance()->toString(task2))), this, this->commonStrings->RUN, &e);
    
}

}

this->threadPool->threadStopped();
    
}




        #endif //ORG_ALLBINARY_THREAD_POOLEDTHREAD_CPP
