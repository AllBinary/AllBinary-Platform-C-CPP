
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
        



        #ifndef ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_CPP
        #define ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/RunnableCanvas.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/NullThread.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
#include <org/allbinary/thread/ThreadObjectUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/canvas/RunnableCanvasRefreshHelper.h"


RunnableCanvas::RunnableCanvas(CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam) : MyCanvas(CommonStrings::getInstance()->UNKNOWN, childNameList), nullUtil(NullUtil::getInstance()), stdUtil(StdUtil::getInstance()), systemWrapper(ABSystemWrapper::getInstance()), tsUtil(TsUtil::getInstance()), thread(NullThread::NULL_THREAD), currentThread(NullThread::NULL_THREAD), loopTimeHelper(new TimeDelayHelper(NullWaitGameRunnable::getInstance()->WAIT)), runnableCanvasRefreshHelper(Processor::getInstance()), commonLabels(CommonLabels::getInstance()), threadObjectUtil(ThreadObjectUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF((new StringMaker())->append("RunnableCanvas delay: ")->appendint(this->loopTimeHelper->delay)->toString(), this, this->commonStrings->CONSTRUCTOR);
    
this->runnableCanvasRefreshHelper= new RunnableCanvasRefreshHelper(this);
    

                        if(commandListener != 
                                    nullptr
                                )
                        
                                    {
                                    this->initCommands(commandListener);
    

                                    }
                                
                             else 
                        if(hasParam)
                        
                                    {
                                    this->logUtil->putF("commandListener was null", this, "initCommands");
    

                                    }
                                
}


    auto RunnableCanvas::initCommands(CommandListener* cmdListener) -> void{
this->logUtil->putF(this->commonStrings->NOT_IMPLEMENTED, this, "initCommands");
    
}


    auto RunnableCanvas::isMainCanvas() -> bool{

                        if(this->getCustomCommandListener() != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto RunnableCanvas::setThread(Thread* thread) -> void{
this->thread= thread;
    
}


    auto RunnableCanvas::setRunning(bool running) -> void{
this->running= running;
    

                        if(!this->running)
                        
                                    {
                                    this->thread= NullThread::NULL_THREAD;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil->notifyObject(this);
    



                                    }
                                
this->logUtil->putF((new StringMaker())->append(this->IS_RUNNING)->appendboolean(this->running)->toString(), this, this->SET_RUNNING);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto RunnableCanvas::isRunning() -> bool{

                        if(this->thread == this->currentThread)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    

                                    }
                                
                        else {
                            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->THREAD);
    

                        if(this->thread != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(this->thread->toString());
    

                                    }
                                
stringBuffer->append(this->NOT_EQUAL);
    

                        if(this->currentThread != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(StringUtil::getInstance()->toString(this->currentThread));
    

                                    }
                                
this->logUtil->putF(stringBuffer->toString(), this, this->IS_RUNNING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto RunnableCanvas::getLoopTimeHelperP() -> TimeDelayHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loopTimeHelper;
    
}


    auto RunnableCanvas::setWait(int32_t wait) -> void{
this->loopTimeHelper->delay= wait;
    
this->pauseWait= wait *3;
    
this->logUtil->putF((new StringMaker())->append("setWait - delay: ")->appendint(this->loopTimeHelper->delay)->toString(), this, this->commonStrings->CONSTRUCTOR);
    
}


    auto RunnableCanvas::getWait() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loopTimeHelper->delay;
    
}


    auto RunnableCanvas::setCurrentThread() -> void{
this->currentThread= Thread::currentThread();
    
}


    auto RunnableCanvas::setCurrentThreadFake() -> void{
this->currentThread= this->thread;
    
}


    auto RunnableCanvas::showNotify() -> void{

        try {
            this->stopWaiting();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "showNotify", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto RunnableCanvas::stopWaiting() -> void{
this->notified= true;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil->notifyObject(this);
    


this->repaint();
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto RunnableCanvas::waitOnNotify(int64_t wait) -> void{

                        if(!this->notified)
                        
                                    {
                                    
                        if(wait > 0)
                        
                                    {
                                    this->threadObjectUtil->waitObjectFor(this, wait);
    

                                    }
                                
                        else {
                            this->threadObjectUtil->waitObject(this);
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto RunnableCanvas::processSleep() -> void{
Thread::sleep(this->pauseWait);
    
}


    auto RunnableCanvas::isPausable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto RunnableCanvas::processGameSleep(int64_t sleep) -> void{
Thread::sleep(sleep);
    
}


                //@Throws(Exception.constructor)
            
    auto RunnableCanvas::processLoopSleep() -> void{
this->runnableCanvasRefreshHelper->process();
    

                        if(this->isPaused())
                        
                                    {
                                    
    StringMaker* stringMaker = new StringMaker();;
    

                        if(this->isRunning() && !this->isSingleThread())
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    

    int64_t currentTimeMillis = this->systemWrapper->currentTimeMillis();;
    
this->logUtil->putF(stringMaker->append(this->START_PAUSE)->appendlong(currentTimeMillis)->append(this->PAUSE_SLEEP)->appendlong(this->pauseWait)->toString(), this, this->PROCESS_LOOP_SLEEP);
    

        while(this->isPaused() && this->isRunning() && !this->isSingleThread())
        {
this->processSleep();
    

                        if(!this->isPausable())
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(this->END_PAUSE)->appendlong(currentTimeMillis)->toString(), this, this->PROCESS_LOOP_SLEEP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}


                                    }
                                

                                    }
                                

    int64_t elapsedTime = this->loopTimeHelper->getElapsedTNT();;
    

    int64_t wait = this->loopTimeHelper->delay;;
    

                        if(elapsedTime > wait)
                        
                                    {
                                    elapsedTime= wait;
    

                                    }
                                
                        else {
                            this->processGameSleep(wait -elapsedTime);
    

                        }
                            
}


    auto RunnableCanvas::isSingleThread() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto RunnableCanvas::run() -> void{
this->setCurrentThread();
    
}


                //@Throws(Exception.constructor)
            
    auto RunnableCanvas::end2() -> void{
}


    auto RunnableCanvas::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}




        #endif //ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_CPP
