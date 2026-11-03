
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENCAPTUREIMAGESWORKER_H
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENCAPTUREIMAGESWORKER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt/image/BufferedImage.h>
class LogUtil;
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
class BufferedImageFrameCacheable;
class CommonLabels;
class CommonStrings;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/media/image/capture/CaptureWorkerInterface.h"
class ScreenScavangerRobot;
class ProcessingFrameIndexFactory;
class CapturedBufferedImagesCacheSingleton;
class CapturedImageWorkerResultsEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScreenCaptureImagesWorker: public BasicEventHandler, public virtual CaptureWorkerInterface {

    private: static inline int64_t index;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: bool running= false;

    private: ScreenScavangerRobot* screenScavangerRobot;

public: ScreenCaptureImagesWorker();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

                //@Throws(Exception.constructor)
            
    public: void setThread(Thread* thread);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENCAPTUREIMAGESWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENCAPTUREIMAGESWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENCAPTUREIMAGESWORKER_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include(<org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>)
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/input/media/image/capture/CaptureWorkerInterface.h")
#include "org/allbinary/input/media/image/capture/CaptureWorkerInterface.h"
#endif
#if __has_include("org/allbinary/input/media/image/capture/ScreenScavangerRobot.h")
#include "org/allbinary/input/media/image/capture/ScreenScavangerRobot.h"
#endif
#if __has_include("org/allbinary/input/media/image/capture/ProcessingFrameIndexFactory.h")
#include "org/allbinary/input/media/image/capture/ProcessingFrameIndexFactory.h"
#endif
#if __has_include("org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h")
#include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"
#endif
#if __has_include("org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h")
#include "org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h"
#endif

        #endif
    
