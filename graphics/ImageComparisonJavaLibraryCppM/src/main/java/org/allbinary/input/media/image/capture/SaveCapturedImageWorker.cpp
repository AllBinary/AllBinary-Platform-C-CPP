
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
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/media/image/capture/CapturedImageWorkerResultsListener.h"
#include "org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h"
#include "org/allbinary/input/media/image/capture/CapturedImageInputOutput.h"

class SaveCapturedImageWorker: public BasicEventHandler, public CapturedImageWorkerResultsListener {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: bool running= false;

    private: BasicArrayList* capturedImageWorkerResultsEventVector = new BasicArrayListD();

public: SaveCapturedImageWorker(){
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


    public: void onCaptureEvent(CapturedImageWorkerResultsEvent* capturedImageEvent){
this->capturedImageWorkerResultsEventVector->add(capturedImageEvent);
    
this->run();
    
}


    public: void onEvent(AllBinaryEventObject* allBinaryEventObject){
this->onCaptureEvent(dynamic_cast<CapturedImageWorkerResultsEvent*>(allBinaryEventObject));
    
}


    public: void run(){

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    
timeHelper->setStartTimeTNT();
    

    CapturedImageWorkerResultsEvent* capturedImageWorkerResultsEvent = (dynamic_cast<CapturedImageWorkerResultsEvent*>(this->capturedImageWorkerResultsEventVector->get(0)));;
    

    BufferedImage* screenBufferedImage = capturedImageWorkerResultsEvent->getBufferedImage();;
    
(new CapturedImageInputOutput())->save(screenBufferedImage, capturedImageWorkerResultsEvent->getFrame());
    
this->capturedImageWorkerResultsEventVector->remove(capturedImageWorkerResultsEvent);
    
this->logUtil->putF(CommonLabels::getInstance()->ELAPSED +timeHelper->getElapsedTNT(), this, this->commonStrings->RUN);
    
this->setRunning(false);
    
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}


};

            

