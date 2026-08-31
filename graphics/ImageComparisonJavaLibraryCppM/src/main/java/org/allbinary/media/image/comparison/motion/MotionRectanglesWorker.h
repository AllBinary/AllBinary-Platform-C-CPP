
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

class MotionRectanglesWorker: public BasicEventHandler: public ImageComparisonResultsListener {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageComparisonInfoVector: Vector = new Vector();

    private: const motionRectangleConstraintsInterface: MotionRectangleConstraintsInterface;

    private: index: int64_t= 0;

    private: running: bool= false;

public constructor (MotionRectangleConstraintsInterface motionRectangleConstraintsInterface);

    public onImageComparisonResultsEvent(ImageComparisonResultsEvent imageComparisonResultsEvent);

    public onEvent(AllBinaryEventObject allBinaryEventObject);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setRunning(bool running);

    public run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_H
