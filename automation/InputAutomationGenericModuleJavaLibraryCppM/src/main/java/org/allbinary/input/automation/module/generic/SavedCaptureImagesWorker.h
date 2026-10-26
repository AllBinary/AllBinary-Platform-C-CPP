
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_SAVEDCAPTUREIMAGESWORKER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_SAVEDCAPTUREIMAGESWORKER_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h>

      
#include <org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>

      
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>

      
#include <org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h>

      
#include <org/allbinary/input/media/image/capture/ProcessingFrameIndexFactory.h>

      
#include <org/allbinary/input/media/image/capture/ScreenScavangerRobot.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>

      
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SavedCaptureImagesWorker: public BasicEventHandler, public CaptureWorkerInterface {

    private: static int64_t index;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: bool running= false;

    private: ScreenScavangerRobot screenScavangerRobot;

    private: SavedCaptureGenericProfileDataWorkerType savedCaptureGenericProfileDataWorkerType;

public: SavedCaptureImagesWorker(SavedCaptureGenericProfileDataWorkerType savedCaptureGenericProfileDataWorkerType);

                //@Throws(Exception.constructor)
            
    public: void setThread(Thread thread);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_SAVEDCAPTUREIMAGESWORKER_H
