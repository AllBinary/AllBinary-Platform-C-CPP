
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonResultsListener.h"
#include "ImageComparisonResultsEvent.h"
#include "ImageComparisonResult.h"
#include "ComparisonImageInputOutput.h"

class SaveImageComparisonWorker
            : public Object
        : public ImageComparisonResultsListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: bool running= false;

    private: const BasicArrayList imageComparisonInfoVector = BasicArrayListD();

public: SaveImageComparisonWorker();

    public: void onImageComparisonResultsEvent(ImageComparisonResultsEvent imageComparisonResultsEvent);

    public: void onEvent(AllBinaryEventObject allBinaryEventObject);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_H
