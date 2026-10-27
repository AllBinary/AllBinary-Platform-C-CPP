
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResultsListener.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/motion/AllMotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/AllMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsFrameCacheable.h"
#include "org/allbinary/media/image/comparison/motion/ConsolidateMotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/ConstrainedMotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/ConstrainedMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsEvent.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"

class MotionRectanglesWorker: public BasicEventHandler, public ImageComparisonResultsListener {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: BasicArrayList* imageComparisonInfoVector = new BasicArrayListD();

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
