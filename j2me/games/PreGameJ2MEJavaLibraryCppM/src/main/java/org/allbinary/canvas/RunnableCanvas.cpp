
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

class RunnableCanvas: public MyCanvas: public RunnableInterface {
        

    const nullUtil: NullUtil = NullUtil.getInstance()!;

    private: thread: Thread = NullThread.NULL_THREAD;

    private: currentThread: Thread = NullThread.NULL_THREAD;

    private: running: bool= false;

    const loopTimeHelper: TimeDelayHelper = new TimeDelayHelper(NullWaitGameRunnable.getInstance()!.WAIT);

    runnableCanvasRefreshHelper: Processor = Processor.getInstance()!;

    const commonLabels: CommonLabels = CommonLabels.getInstance()!;

    const threadObjectUtil: ThreadObjectUtil = ThreadObjectUtil.getInstance()!;

    const SET_RUNNING: string = "setRunning";

    private: const IS_RUNNING: string = "isRunning";

    private: const THREAD: string = "Thread: ";

    private: const NOT_EQUAL: string = " != ";

    private: const PAUSE_SLEEP: string = "pause sleep";

    private: const START_PAUSE: string = "start pause - game thread sleep at: ";

    private: const END_PAUSE: string = "end pause - game thread sleep at: ";

    private: const PROCESS_LOOP_SLEEP: string = "processLoopSleep";

public constructor (CommandListener commandListener, BasicArrayList childNameList, bool hasParam){
            super(CommonStrings.getInstance()!.UNKNOWN, childNameList);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(new StringMaker().append("delay: ")!.appendint(this.loopTimeHelper!.delay)!.toString(), this, this.commonStrings!.CONSTRUCTOR);
    
this.runnableCanvasRefreshHelper= new RunnableCanvasRefreshHelper(this);
    

                        if(commandListener != 
                                    null
                                )
                        
                                    {
                                    this.initCommands(commandListener);
    

                                    }
                                
                             else 
                        if(hasParam)
                        
                                    {
                                    this.logUtil!.putF("commandListener was null", this, "initCommands");
    

                                    }
                                
}


    public initCommands(CommandListener cmdListener){
this.logUtil!.putF(this.commonStrings!.NOT_IMPLEMENTED, this, "initCommands");
    
}


    public bool isMainCanvas(){

                        if(this.getCustomCommandListener() != 
                                    null
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


    public setThread(Thread thread){
this.thread= thread;
    
}


    public setRunning(bool running){
this.running= running;
    

                        if(!this.running)
                        
                                    {
                                    this.thread= NullThread.NULL_THREAD;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this.threadObjectUtil!.notifyObject(this);
    



                                    }
                                
this.logUtil!.putF(new StringMaker().append(this.IS_RUNNING)!.appendboolean(this.running)!.toString(), this, this.SET_RUNNING);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning(){

                        if(this.thread == this.currentThread)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.running;
    

                                    }
                                
                        else {
                            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.THREAD);
    

                        if(this.thread != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(this.thread.toString());
    

                                    }
                                
stringBuffer!.append(this.NOT_EQUAL);
    

                        if(this.currentThread != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(StringUtil.getInstance()!.toString(this.currentThread));
    

                                    }
                                
this.logUtil!.putF(stringBuffer!.toString(), this, this.IS_RUNNING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public TimeDelayHelper getLoopTimeHelperP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.loopTimeHelper;
    
}


    private: pauseWait: int64_t = 0;

    setWait(int32_t wait){
this.loopTimeHelper!.delay= wait;
    
this.pauseWait= wait *3;
    
this.logUtil!.putF(new StringMaker().append("setWait - delay: ")!.appendint(this.loopTimeHelper!.delay)!.toString(), this, this.commonStrings!.CONSTRUCTOR);
    
}


    int32_t getWait(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.loopTimeHelper!.delay;
    
}


    public setCurrentThread(){
this.currentThread= Thread.currentThread();
    
}


    setCurrentThreadFake(){
this.currentThread= this.thread;
    
}


    showNotify(){

        try {
            this.stopWaiting();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "showNotify", e);
    
}

}


    private: notified: bool = false;

                //@Throws(Exception.constructor)
            
    stopWaiting(){
this.notified= true;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        
this.threadObjectUtil!.notifyObject(this);
    


this.repaint();
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public waitOnNotify(int64_t wait){

                        if(!this.notified)
                        
                                    {
                                    
                        if(wait > 0)
                        
                                    {
                                    this.threadObjectUtil!.waitObjectFor(this, wait);
    

                                    }
                                
                        else {
                            this.threadObjectUtil!.waitObject(this);
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processSleep(){
Thread.sleep(this.pauseWait);
    
}


    public bool isPausable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public processGameSleep(int64_t sleep){
Thread.sleep(sleep);
    
}


                //@Throws(Exception.constructor)
            
    public processLoopSleep(){
this.runnableCanvasRefreshHelper!.process();
    

                        if(this.isPaused())
                        
                                    {
                                    
    stringMaker: StringMaker = new StringMaker();;
    

                        if(this.isRunning() && !this.isSingleThread())
                        
                                    {
                                    stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.START_PAUSE)!.appendlong(Date.now())!.append(this.PAUSE_SLEEP)!.appendlong(this.pauseWait)!.toString(), this, this.PROCESS_LOOP_SLEEP);
    

        while(this.isPaused() && this.isRunning() && !this.isSingleThread())
        {
this.processSleep();
    

                        if(!this.isPausable())
                        
                                    {
                                    stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(this.END_PAUSE)!.appendlong(Date.now())!.toString(), this, this.PROCESS_LOOP_SLEEP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}


                                    }
                                

                                    }
                                

    elapsedTime: int64_t = this.loopTimeHelper!.getElapsedTNT()!;;
    

    wait: int64_t = this.loopTimeHelper!.delay;;
    

                        if(elapsedTime > wait)
                        
                                    {
                                    elapsedTime= wait;
    

                                    }
                                
                        else {
                            this.processGameSleep(wait -elapsedTime);
    

                        }
                            
}


    public bool isSingleThread(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public run(){
this.setCurrentThread();
    
}


                //@Throws(Exception.constructor)
            
    public end2(){
}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


};

            

