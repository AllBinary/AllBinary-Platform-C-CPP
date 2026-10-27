
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;

class LogUtil;
class AllBinaryEventObject;
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
class ImageComparisonResult;
class ImageComparisonResultsEvent;
#include <org/allbinary/media/image/comparison/ImageComparisonResultsListener.h>
class CommonLabels;
class CommonStrings;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MotionRectangleConstraintsInterface;
class AllMotionRectangles;
class AllMotionRectanglesResultsCacheSingleton;
class MotionRectanglesResultsFrameCacheable;
class ConsolidateMotionRectangles;
class ConsolidatedMotionRectanglesResultsCacheSingleton;
class ConstrainedMotionRectangles;
class ConstrainedMotionRectanglesResultsCacheSingleton;
class MotionRectanglesResultsEvent;
class MotionRectangles;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionRectanglesWorker: public BasicEventHandler, public ImageComparisonResultsListener {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: BasicArrayList* imageComparisonInfoVector;

    private: MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface;

    private: int64_t index= 0;

    private: bool running= false;

public: MotionRectanglesWorker(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

    public: void onImageComparisonResultsEvent(ImageComparisonResultsEvent* imageComparisonResultsEvent);

    public: void onEvent(AllBinaryEventObject* allBinaryEventObject);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparisonResult.h>)
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h>)
#include <org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparisonResultsListener.h>)
#include <org/allbinary/media/image/comparison/ImageComparisonResultsListener.h>
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
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/AllMotionRectangles.h")
#include "org/allbinary/media/image/comparison/motion/AllMotionRectangles.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/AllMotionRectanglesResultsCacheSingleton.h")
#include "org/allbinary/media/image/comparison/motion/AllMotionRectanglesResultsCacheSingleton.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectanglesResultsFrameCacheable.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsFrameCacheable.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/ConsolidateMotionRectangles.h")
#include "org/allbinary/media/image/comparison/motion/ConsolidateMotionRectangles.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/ConsolidatedMotionRectanglesResultsCacheSingleton.h")
#include "org/allbinary/media/image/comparison/motion/ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/ConstrainedMotionRectangles.h")
#include "org/allbinary/media/image/comparison/motion/ConstrainedMotionRectangles.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/ConstrainedMotionRectanglesResultsCacheSingleton.h")
#include "org/allbinary/media/image/comparison/motion/ConstrainedMotionRectanglesResultsCacheSingleton.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectanglesResultsEvent.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsEvent.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangles.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#endif

        #endif
    
