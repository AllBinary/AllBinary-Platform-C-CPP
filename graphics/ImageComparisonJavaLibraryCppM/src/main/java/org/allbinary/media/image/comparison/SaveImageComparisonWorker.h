
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;

class LogUtil;
class AllBinaryEventObject;
class CommonLabels;
class CommonStrings;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/ImageComparisonResultsListener.h"
class ImageComparisonResultsEvent;
class ImageComparisonResult;
class ComparisonImageInputOutput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SaveImageComparisonWorker
            : public virtual Object
        , public virtual ImageComparisonResultsListener {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: bool running= false;

    private: BasicArrayList* imageComparisonInfoVector;

public: SaveImageComparisonWorker();

    public: void onImageComparisonResultsEvent(ImageComparisonResultsEvent* imageComparisonResultsEvent);

    public: void onEvent(AllBinaryEventObject* allBinaryEventObject);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_H_COMPLETE
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
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResultsListener.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResultsListener.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResult.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ComparisonImageInputOutput.h")
#include "org/allbinary/media/image/comparison/ComparisonImageInputOutput.h"
#endif

        #endif
    
