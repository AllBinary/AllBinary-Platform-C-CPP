
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/media/image/capture/CaptureWorkerInterface.h"
#include "org/allbinary/input/media/image/capture/ScreenScavangerRobot.h"
#include "org/allbinary/input/media/image/capture/ProcessingFrameIndexFactory.h"
#include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"
#include "org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h"

class ScreenCaptureImagesWorker: public BasicEventHandler, public CaptureWorkerInterface {

    private: static inline int64_t index;

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: bool running= false;

    private: ScreenScavangerRobot* screenScavangerRobot;

public: ScreenCaptureImagesWorker(){
screenScavangerRobot= new ScreenScavangerRobot();
    
ScreenCaptureImagesWorker::index= ProcessingFrameIndexFactory::next();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running){
this->running= running;
    
}


                //@Throws(Exception.constructor)
            
    public: void setThread(Thread* thread){
}


    public: void run(){

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    

        while(isRunning())
        {
timeHelper->setStartTimeTNT();
    

    BufferedImage* bufferedImage = this->screenScavangerRobot->getScreenAsBufferedImages()[0];;
    

    int64_t frame = int64_t(index);;
    
ScreenCaptureImagesWorker::index++;
    
CapturedBufferedImagesCacheSingleton::getInstance()->add(new BufferedImageFrameCacheable(bufferedImage, frame));
    

    CapturedImageWorkerResultsEvent* capturedImageEvent = new CapturedImageWorkerResultsEvent(this, frame, bufferedImage);;
    
fireEvent(capturedImageEvent);
    
this->logUtil->putF(CommonLabels::getInstance()->ELAPSED +timeHelper->getElapsedTNT(), this, this->commonStrings->RUN);
    
this->setRunning(false);
    
}

this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}


};

            

