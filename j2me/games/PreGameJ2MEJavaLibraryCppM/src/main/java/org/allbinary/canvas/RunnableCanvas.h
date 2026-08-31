
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
        



        #ifndef ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H
        #define ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H

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

public constructor (CommandListener commandListener, BasicArrayList childNameList, bool hasParam);

    public initCommands(CommandListener cmdListener);

    public bool isMainCanvas();

    public setThread(Thread thread);

    public setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning();

    public TimeDelayHelper getLoopTimeHelperP();

    private: pauseWait: int64_t = 0;

    setWait(int32_t wait);

    int32_t getWait();

    public setCurrentThread();

    setCurrentThreadFake();

    showNotify();

    private: notified: bool = false;

                //@Throws(Exception.constructor)
            
    stopWaiting();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public waitOnNotify(int64_t wait);

                //@Throws(Exception.constructor)
            
    public processSleep();

    public bool isPausable();

                //@Throws(Exception.constructor)
            
    public processGameSleep(int64_t sleep);

                //@Throws(Exception.constructor)
            
    public processLoopSleep();

    public bool isSingleThread();

    public run();

                //@Throws(Exception.constructor)
            
    public end2();

    public int32_t getType();

};

            


        #endif //ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H
