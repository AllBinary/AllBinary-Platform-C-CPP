
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h>

      
#include <org/allbinary/input/media/image/capture/CapturedImageWorkerResultsListener.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparatorConstraintsInterface.h"
#include "ImageComparator.h"
#include "ImageComparisonResult.h"
#include "ImageComparisonResultFrameCacheable.h"
#include "ImageComparisonResultCacheSingleton.h"
#include "ImageComparisonResultsEvent.h"

class ImageComparisonWorker: public BasicEventHandler: public CapturedImageWorkerResultsListener {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const bufferedImageVector: Vector = new Vector();

    private: const imageComparatorConstraintsInterface: ImageComparatorConstraintsInterface;

    private: const imageComparator: ImageComparator;

    private: running: bool= false;

    private: index2: int32_t= 0;

public constructor (ImageComparatorConstraintsInterface imageComparatorConstraintsInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public onCaptureEvent(CapturedImageWorkerResultsEvent capturedImageWorkerResultsEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public onEvent(AllBinaryEventObject allBinaryEventObject);

    public run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_H
