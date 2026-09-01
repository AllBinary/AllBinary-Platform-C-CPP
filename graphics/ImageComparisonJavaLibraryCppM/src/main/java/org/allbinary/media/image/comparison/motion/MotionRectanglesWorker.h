
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

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
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
        #include "MotionRectangleConstraintsInterface.h"
#include "AllMotionRectangles.h"
#include "AllMotionRectanglesResultsCacheSingleton.h"
#include "MotionRectanglesResultsFrameCacheable.h"
#include "ConsolidateMotionRectangles.h"
#include "ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#include "ConstrainedMotionRectangles.h"
#include "ConstrainedMotionRectanglesResultsCacheSingleton.h"
#include "MotionRectanglesResultsEvent.h"
#include "MotionRectangles.h"

class MotionRectanglesWorker: public BasicEventHandler, public ImageComparisonResultsListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const Vector imageComparisonInfoVector = Vector();

    private: MotionRectangleConstraintsInterface motionRectangleConstraintsInterface;

    private: int64_t index= 0;

    private: bool running= false;

public: MotionRectanglesWorker(MotionRectangleConstraintsInterface motionRectangleConstraintsInterface);

    public: void onImageComparisonResultsEvent(ImageComparisonResultsEvent imageComparisonResultsEvent);

    public: void onEvent(AllBinaryEventObject allBinaryEventObject);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_H
