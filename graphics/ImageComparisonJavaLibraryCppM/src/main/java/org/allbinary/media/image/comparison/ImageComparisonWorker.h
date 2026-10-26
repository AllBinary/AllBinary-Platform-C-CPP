
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h>

      
#include <org/allbinary/input/media/image/capture/CapturedImageWorkerResultsListener.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
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

class ImageComparisonWorker: public BasicEventHandler, public CapturedImageWorkerResultsListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const BasicArrayList bufferedImageVector = BasicArrayListD();

    private: ImageComparatorConstraintsInterface imageComparatorConstraintsInterface;

    private: ImageComparator imageComparator;

    private: bool running= false;

    private: int32_t index2= 0;

public: ImageComparisonWorker(ImageComparatorConstraintsInterface imageComparatorConstraintsInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onCaptureEvent(CapturedImageWorkerResultsEvent capturedImageWorkerResultsEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onEvent(AllBinaryEventObject allBinaryEventObject);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_H
