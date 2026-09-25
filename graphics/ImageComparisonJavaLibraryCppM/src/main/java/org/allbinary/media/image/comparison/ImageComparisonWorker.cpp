
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
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

public: ImageComparisonWorker(ImageComparatorConstraintsInterface imageComparatorConstraintsInterface){
this->imageComparatorConstraintsInterface= imageComparatorConstraintsInterface;
    
this->imageComparator= ImageComparator(imageComparatorConstraintsInterface);
    
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

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onCaptureEvent(CapturedImageWorkerResultsEvent capturedImageWorkerResultsEvent){
this->bufferedImageVector.add(capturedImageWorkerResultsEvent);
    

                        if(this->bufferedImageVector.size() > 1)
                        
                                    {
                                    this->run();
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onEvent(AllBinaryEventObject allBinaryEventObject){
this->onCaptureEvent(allBinaryEventObject as CapturedImageWorkerResultsEvent);
    
}


    public: void run(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.RUN);
    
this->setRunning(true);
    

    TimeDelayHelper timeHelper = TimeDelayHelper(1000);;
    
timeHelper.setStartTimeTNT();
    

                        if(this->imageComparatorConstraintsInterface.isFrameAllowed(this->index2))
                        
                                    {
                                    
    std::vector<CapturedImageWorkerResultsEvent> capturedImageWorkerResultsEvent = new Array(2);;
    
capturedImageWorkerResultsEvent[0]= this->bufferedImageVector.get(0) as CapturedImageWorkerResultsEvent;
    
capturedImageWorkerResultsEvent[1]= this->bufferedImageVector.get(1) as CapturedImageWorkerResultsEvent;
    

                        if(this->imageComparatorConstraintsInterface.isImageValid(capturedImageWorkerResultsEvent[0]!.getBufferedImage()) && this->imageComparatorConstraintsInterface.isImageValid(capturedImageWorkerResultsEvent[1]!.getBufferedImage()))
                        
                                    {
                                    
    ImageComparisonResult imageComparisonResult = this->imageComparator.compare(capturedImageWorkerResultsEvent[0]!.getBufferedImage(), capturedImageWorkerResultsEvent[1]!.getBufferedImage(), capturedImageWorkerResultsEvent[0]!.getFrame(), capturedImageWorkerResultsEvent[1]!.getFrame(), 0);;
    

    Long frame = capturedImageWorkerResultsEvent[1]!.getFrame();;
    

    ImageComparisonResultFrameCacheable imageComparisonResultFrameCacheable = ImageComparisonResultFrameCacheable(imageComparisonResult, frame);;
    
ImageComparisonResultCacheSingleton::getInstance().add(imageComparisonResultFrameCacheable);
    
this->fireEvent(ImageComparisonResultsEvent(this, imageComparisonResult));
    
this->logUtil.putF(StringMaker().append("Image Comparison Result: ").append(imageComparisonResult.toString()).append(" for frame: ").appendlong(frame).toString(), this, this->commonStrings.RUN);
    

                                    }
                                
                        else {
                            this->logUtil.putF("An Image Was Not Valid: Image Worker Event Processing terminated", this, this->commonStrings.RUN);
    

                        }
                            

                                    }
                                
this->bufferedImageVector.remove(0);
    
this->index2++;
    

    std::string message = StringMaker().append("Frame: ").appendint(this->index2).append(CommonLabels::getInstance().ELAPSED).appendlong(timeHelper.getElapsedTNT()).toString();;
    
this->logUtil.putF(message, this, this->commonStrings.RUN);
    
this->setRunning(false);
    
this->logUtil.putF(this->commonStrings.END, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


};

            

