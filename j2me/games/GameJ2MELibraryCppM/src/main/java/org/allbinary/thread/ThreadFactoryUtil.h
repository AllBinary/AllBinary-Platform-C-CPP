
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

class ThreadFactoryUtil
            : public Object
         {

    private: static ThreadFactoryUtil* instance() { static std::unique_ptr<ThreadFactoryUtil> value(new ThreadFactoryUtil()); return value.get(); }

    public: static ThreadFactoryUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: Thread* getInstanceGameCanvasRunnable(GameCanvasRunnableInterface* runnable);

    public: Thread* getInstanceForRunnable(ABRunnable* runnable);

    private: Thread* getInstanceType(Runnable* runnable, int32_t type);

    public: void start(Thread* thread);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H
