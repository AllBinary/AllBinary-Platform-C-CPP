
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
        



            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/NullThread.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
#include <org/allbinary/thread/ThreadObjectUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Processor.h"
#include "RunnableCanvasRefreshHelper.h"

class RunnableCanvas: public MyCanvas, public RunnableInterface {

    protected: const NullUtil nullUtil = NullUtil::getInstance();

    private: Thread thread = NullThread::NULL_THREAD;

    private: Thread currentThread = NullThread::NULL_THREAD;

    private: bool running= false;

    protected: const TimeDelayHelper loopTimeHelper = TimeDelayHelper(NullWaitGameRunnable::getInstance().WAIT);

    protected: Processor runnableCanvasRefreshHelper = Processor::getInstance();

    protected: const CommonLabels commonLabels = CommonLabels::getInstance();

    protected: const ThreadObjectUtil threadObjectUtil = ThreadObjectUtil::getInstance();

    protected: const std::string SET_RUNNING = "setRunning";

    private: const std::string IS_RUNNING = "isRunning";

    private: const std::string THREAD = "Thread: ";

    private: const std::string NOT_EQUAL = " != ";

    private: const std::string PAUSE_SLEEP = "pause sleep";

    private: const std::string START_PAUSE = "start pause - game thread sleep at: ";

    private: const std::string END_PAUSE = "end pause - game thread sleep at: ";

    private: const std::string PROCESS_LOOP_SLEEP = "processLoopSleep";

public: RunnableCanvas(CommandListener commandListener, BasicArrayList childNameList, bool hasParam){
            super(CommonStrings::getInstance().UNKNOWN, childNameList);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(StringMaker().append("delay: ").appendint(this->loopTimeHelper.delay).toString(), this, this->commonStrings.CONSTRUCTOR);
    
this->runnableCanvasRefreshHelper= RunnableCanvasRefreshHelper(this);
    

                        if(commandListener != 
                                    nullptr
                                )
                        
                                    {
                                    this->initCommands(commandListener);
    

                                    }
                                
                             else 
                        if(hasParam)
                        
                                    {
                                    this->logUtil.putF("commandListener was null", this, "initCommands");
    

                                    }
                                
}


    public: void initCommands(CommandListener cmdListener){
this->logUtil.putF(this->commonStrings.NOT_IMPLEMENTED, this, "initCommands");
    
}


    public: bool isMainCanvas(){

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


    public: void setThread(Thread thread){
this->thread= thread;
    
}


    public: void setRunning(bool running){
this->running= running;
    

                        if(!this->running)
                        
                                    {
                                    this->thread= NullThread::NULL_THREAD;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil.notifyObject(this);
    



                                    }
                                
this->logUtil.putF(StringMaker().append(this->IS_RUNNING).appendboolean(this->running).toString(), this, this->SET_RUNNING);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning(){

                        if(this->thread == this->currentThread)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    

                                    }
                                
                        else {
                            
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->THREAD);
    

                        if(this->thread != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(this->thread.toString());
    

                                    }
                                
stringBuffer.append(this->NOT_EQUAL);
    

                        if(this->currentThread != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(StringUtil::getInstance().toString(this->currentThread));
    

                                    }
                                
this->logUtil.putF(stringBuffer.toString(), this, this->IS_RUNNING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: TimeDelayHelper getLoopTimeHelperP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loopTimeHelper;
    
}


    private: int64_t pauseWait = 0;

    protected: void setWait(int32_t wait){
this->loopTimeHelper.delay= wait;
    
this->pauseWait= wait *3;
    
this->logUtil.putF(StringMaker().append("setWait - delay: ").appendint(this->loopTimeHelper.delay).toString(), this, this->commonStrings.CONSTRUCTOR);
    
}


    protected: int32_t getWait(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loopTimeHelper.delay;
    
}


    public: void setCurrentThread(){
this->currentThread= Thread::currentThread();
    
}


    protected: void setCurrentThreadFake(){
this->currentThread= this->thread;
    
}


    protected: void showNotify(){

        try {
            this->stopWaiting();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "showNotify", e);
    
}

}


    private: bool notified = false;

                //@Throws(Exception.constructor)
            
    private: void stopWaiting(){
this->notified= true;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this->threadObjectUtil.notifyObject(this);
    


this->repaint();
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void waitOnNotify(int64_t wait){

                        if(!this->notified)
                        
                                    {
                                    
                        if(wait > 0)
                        
                                    {
                                    this->threadObjectUtil.waitObjectFor(this, wait);
    

                                    }
                                
                        else {
                            this->threadObjectUtil.waitObject(this);
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void processSleep(){
Thread::sleep(this->pauseWait);
    
}


    public: bool isPausable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: void processGameSleep(int64_t sleep){
Thread::sleep(sleep);
    
}


                //@Throws(Exception.constructor)
            
    public: void processLoopSleep(){
this->runnableCanvasRefreshHelper.process();
    

                        if(this->isPaused())
                        
                                    {
                                    
    StringMaker stringMaker = StringMaker();;
    

                        if(this->isRunning() && !this->isSingleThread())
                        
                                    {
                                    stringMaker.delete(0, stringMaker.length());
    
this->logUtil.putF(stringMaker.append(this->START_PAUSE).appendlong(Date.now()).append(this->PAUSE_SLEEP).appendlong(this->pauseWait).toString(), this, this->PROCESS_LOOP_SLEEP);
    

        while(this->isPaused() && this->isRunning() && !this->isSingleThread())
        {
this->processSleep();
    

                        if(!this->isPausable())
                        
                                    {
                                    stringMaker.delete(0, stringMaker.length());
    
this->logUtil.putF(stringMaker.append(this->END_PAUSE).appendlong(Date.now()).toString(), this, this->PROCESS_LOOP_SLEEP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}


                                    }
                                

                                    }
                                

    int64_t elapsedTime = this->loopTimeHelper.getElapsedTNT();;
    

    int64_t wait = this->loopTimeHelper.delay;;
    

                        if(elapsedTime > wait)
                        
                                    {
                                    elapsedTime= wait;
    

                                    }
                                
                        else {
                            this->processGameSleep(wait -elapsedTime);
    

                        }
                            
}


    public: bool isSingleThread(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void run(){
this->setCurrentThread();
    
}


                //@Throws(Exception.constructor)
            
    public: void end2(){
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


};

            

