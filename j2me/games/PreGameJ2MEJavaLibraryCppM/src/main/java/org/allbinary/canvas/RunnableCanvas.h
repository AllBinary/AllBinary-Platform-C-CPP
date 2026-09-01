
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

public: RunnableCanvas(CommandListener commandListener, BasicArrayList childNameList, bool hasParam);

    public: void initCommands(CommandListener cmdListener);

    public: bool isMainCanvas();

    public: void setThread(Thread thread);

    public: void setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();

    public: TimeDelayHelper getLoopTimeHelperP();

    private: int64_t pauseWait = 0;

    protected: void setWait(int32_t wait);

    protected: int32_t getWait();

    public: void setCurrentThread();

    protected: void setCurrentThreadFake();

    protected: void showNotify();

    private: bool notified = false;

                //@Throws(Exception.constructor)
            
    private: void stopWaiting();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void waitOnNotify(int64_t wait);

                //@Throws(Exception.constructor)
            
    public: void processSleep();

    public: bool isPausable();

                //@Throws(Exception.constructor)
            
    public: void processGameSleep(int64_t sleep);

                //@Throws(Exception.constructor)
            
    public: void processLoopSleep();

    public: bool isSingleThread();

    public: void run();

                //@Throws(Exception.constructor)
            
    public: void end2();

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H
