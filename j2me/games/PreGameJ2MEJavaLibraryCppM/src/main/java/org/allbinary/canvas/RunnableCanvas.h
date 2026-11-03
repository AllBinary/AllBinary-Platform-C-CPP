
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
class CommandListener;
class TsUtil;
class NullWaitGameRunnable;
#include <org/allbinary/graphics/displayable/MyCanvas.h>
class ABSystemWrapper;
class NullUtil;
class StdUtil;
class StringMaker;
class StringUtil;
class CommonLabels;
class CommonStrings;
class NullThread;
#include <org/allbinary/thread/RunnableInterface.h>
class ThreadObjectUtil;
class TimeDelayHelper;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Processor;
class RunnableCanvasRefreshHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RunnableCanvas: public MyCanvas, public virtual RunnableInterface {

    /*protected*/ public: NullUtil* nullUtil;

    /*protected*/ public: StdUtil* stdUtil;

    /*protected*/ public: ABSystemWrapper* systemWrapper;

    /*protected*/ public: TsUtil* tsUtil;

    private: Thread* thread;

    private: Thread* currentThread;

    private: bool running= false;

    /*protected*/ public: TimeDelayHelper* loopTimeHelper;

    /*protected*/ public: Processor* runnableCanvasRefreshHelper;

    /*protected*/ public: CommonLabels* commonLabels;

    /*protected*/ public: ThreadObjectUtil* threadObjectUtil;

    /*protected*/ public: const std::string SET_RUNNING = "setRunning";

    private: const std::string IS_RUNNING = "isRunning";

    private: const std::string THREAD = "Thread: ";

    private: const std::string NOT_EQUAL = " != ";

    private: const std::string PAUSE_SLEEP = "pause sleep";

    private: const std::string START_PAUSE = "start pause - game thread sleep at: ";

    private: const std::string END_PAUSE = "end pause - game thread sleep at: ";

    private: const std::string PROCESS_LOOP_SLEEP = "processLoopSleep";

public: RunnableCanvas(CommandListener* commandListener, BasicArrayList* childNameList, bool hasParam);

    public: void initCommands(CommandListener* cmdListener);

    public: bool isMainCanvas();

    public: void setThread(Thread* thread);

    public: void setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();

    public: TimeDelayHelper* getLoopTimeHelperP();

    private: int64_t pauseWait = 0;

    /*protected*/ public: void setWait(int32_t wait);

    /*protected*/ public: int32_t getWait();

    public: void setCurrentThread();

    /*protected*/ public: void setCurrentThreadFake();

    /*protected*/ public: void showNotify();

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_RUNNABLECANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>)
#include <org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/logic/ABSystemWrapper.h>)
#include <org/allbinary/logic/ABSystemWrapper.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/NullThread.h>)
#include <org/allbinary/thread/NullThread.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include(<org/allbinary/thread/ThreadObjectUtil.h>)
#include <org/allbinary/thread/ThreadObjectUtil.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#if __has_include("org/allbinary/canvas/RunnableCanvasRefreshHelper.h")
#include "org/allbinary/canvas/RunnableCanvasRefreshHelper.h"
#endif

        #endif
    
