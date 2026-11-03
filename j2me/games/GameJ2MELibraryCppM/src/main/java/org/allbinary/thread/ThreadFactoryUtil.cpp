
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
        



        #ifndef ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_CPP
        #define ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/ThreadFactoryUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/canvas/RunnableCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/DemoCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>

      
#include <org/allbinary/game/displayable/canvas/RunnableCanvasSingleThreadStartRunnable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ABRunnable.h"
#include "org/allbinary/thread/PrimaryThreadPool.h"
#include "org/allbinary/thread/ThreadPool.h"


ThreadFactoryUtil::ThreadFactoryUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto ThreadFactoryUtil::instance_owner() -> ThreadFactoryUtil* { static std::unique_ptr<ThreadFactoryUtil> value(new ThreadFactoryUtil()); return value.get(); }
ThreadFactoryUtil* ThreadFactoryUtil::instance = ThreadFactoryUtil::instance_owner();

    auto ThreadFactoryUtil::getInstance() -> ThreadFactoryUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ThreadFactoryUtil::instance;
    
}


    auto ThreadFactoryUtil::getInstanceGameCanvasRunnable(GameCanvasRunnableInterface* runnable) -> Thread*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getInstanceType(runnable, runnable->getType());;
    
}


    auto ThreadFactoryUtil::getInstanceForRunnable(ABRunnable* runnable) -> Thread*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getInstanceType(runnable, runnable->getType());;
    
}


    auto ThreadFactoryUtil::getInstanceType(Runnable* runnable, int32_t type) -> Thread*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    
                        if(type == DemoCanvas::TYPE || type == AllBinaryGameCanvas::TYPE)
                        
                                    {
                                    
    RunnableCanvasSingleThreadStartRunnable* demoGameSingleThreadStartRunnable = new RunnableCanvasSingleThreadStartRunnable(dynamic_cast<RunnableCanvas*>(runnable));;
    
PreLogUtil::put((new StringMaker())->append("Using Pseudo Thread for DemoCanvas/AllBinaryGameCanvas under PlayN/HTML5: ")->append(StringUtil::getInstance()->toString(runnable))->toString(), this, commonStrings->CONSTRUCTOR);
    

    ThreadPool* primaryThreadPool = PrimaryThreadPool::getInstance();;
    
primaryThreadPool->runTask(demoGameSingleThreadStartRunnable);
    

                                    }
                                
                        else {
                            PreLogUtil::put((new StringMaker())->append("Using Pseudo Thread for Runnable under PlayN/HTML5: ")->append(StringUtil::getInstance()->toString(runnable))->toString(), this, commonStrings->CONSTRUCTOR);
    

    ThreadPool* primaryThreadPool = PrimaryThreadPool::getInstance();;
    
primaryThreadPool->runTask(runnable);
    

                        }
                            

                                    }
                                

    Thread* thread = new Thread(runnable, runnable->toString());;
    
this->logUtil->putF(thread->toString(), this, commonStrings->CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return thread;
    
}


    auto ThreadFactoryUtil::start(Thread* thread) -> void{
thread->start();
    
}




        #endif //ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_CPP
