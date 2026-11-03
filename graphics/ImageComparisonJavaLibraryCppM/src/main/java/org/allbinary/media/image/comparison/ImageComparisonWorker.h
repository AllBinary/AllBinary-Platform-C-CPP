
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
class BasicArrayList;
class BasicArrayListD;
class CapturedImageWorkerResultsEvent;
#include <org/allbinary/input/media/image/capture/CapturedImageWorkerResultsListener.h>

class LogUtil;
class StringMaker;
class AllBinaryEventObject;
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
class CommonLabels;
class CommonStrings;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageComparatorConstraintsInterface;
class ImageComparator;
class ImageComparisonResult;
class ImageComparisonResultFrameCacheable;
class ImageComparisonResultCacheSingleton;
class ImageComparisonResultsEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageComparisonWorker: public BasicEventHandler, public virtual CapturedImageWorkerResultsListener {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: BasicArrayList* bufferedImageVector;

    private: ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface;

    private: ImageComparator* imageComparator;

    private: bool running= false;

    private: int32_t index2= 0;

public: ImageComparisonWorker(ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onCaptureEvent(CapturedImageWorkerResultsEvent* capturedImageWorkerResultsEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onEvent(AllBinaryEventObject* allBinaryEventObject);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h>)
#include <org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h>
#endif
#if __has_include(<org/allbinary/input/media/image/capture/CapturedImageWorkerResultsListener.h>)
#include <org/allbinary/input/media/image/capture/CapturedImageWorkerResultsListener.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
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
#if __has_include("org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h")
#include "org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparator.h")
#include "org/allbinary/media/image/comparison/ImageComparator.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResult.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResultFrameCacheable.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResultFrameCacheable.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResultCacheSingleton.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResultCacheSingleton.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h"
#endif

        #endif
    
