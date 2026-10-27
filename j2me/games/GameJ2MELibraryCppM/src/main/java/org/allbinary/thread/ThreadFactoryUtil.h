
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
        



        #ifndef ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H
        #define ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
class J2MEUtil;
class RunnableCanvas;
class AllBinaryGameCanvas;
class DemoCanvas;
class GameCanvasRunnableInterface;
class RunnableCanvasSingleThreadStartRunnable;
class LogUtil;
class PreLogUtil;
class StringMaker;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ABRunnable;
class PrimaryThreadPool;
class ThreadPool;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThreadFactoryUtil
            : public virtual Object
         {

    private: static ThreadFactoryUtil* instance_owner();
    private: static ThreadFactoryUtil* instance;

    public: static ThreadFactoryUtil* getInstance();


            
    public: ThreadFactoryUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    public: Thread* getInstanceGameCanvasRunnable(GameCanvasRunnableInterface* runnable);

    public: Thread* getInstanceForRunnable(ABRunnable* runnable);

    private: Thread* getInstanceType(Runnable* runnable, int32_t type);

    public: void start(Thread* thread);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/canvas/RunnableCanvas.h>)
#include <org/allbinary/canvas/RunnableCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/DemoCanvas.h>)
#include <org/allbinary/game/displayable/canvas/DemoCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>)
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/RunnableCanvasSingleThreadStartRunnable.h>)
#include <org/allbinary/game/displayable/canvas/RunnableCanvasSingleThreadStartRunnable.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/thread/ABRunnable.h")
#include "org/allbinary/thread/ABRunnable.h"
#endif
#if __has_include("org/allbinary/thread/PrimaryThreadPool.h")
#include "org/allbinary/thread/PrimaryThreadPool.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif

        #endif
    
