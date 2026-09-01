
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

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
            #include "../../../../../../java/lang/Thread.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CaptureWorkerInterface.h"
#include "ScreenScavangerRobot.h"
#include "ProcessingFrameIndexFactory.h"
#include "CapturedBufferedImagesCacheSingleton.h"
#include "CapturedImageWorkerResultsEvent.h"

class ScreenCaptureImagesWorker: public BasicEventHandler, public CaptureWorkerInterface {

    private: static int64_t index;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: bool running= false;

    private: ScreenScavangerRobot screenScavangerRobot;

public: ScreenCaptureImagesWorker();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

                //@Throws(Exception.constructor)
            
    public: void setThread(Thread thread);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENCAPTUREIMAGESWORKER_H
