
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/ImageComparisonWorker.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/ImageComparator.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultFrameCacheable.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultCacheSingleton.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h"


ImageComparisonWorker::ImageComparisonWorker(ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), bufferedImageVector(new BasicArrayListD()){
this->imageComparatorConstraintsInterface= imageComparatorConstraintsInterface;
    
this->imageComparator= new ImageComparator(imageComparatorConstraintsInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ImageComparisonWorker::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ImageComparisonWorker::setRunning(bool running) -> void{
this->running= running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ImageComparisonWorker::onCaptureEvent(CapturedImageWorkerResultsEvent* capturedImageWorkerResultsEvent) -> void{
this->bufferedImageVector->add(capturedImageWorkerResultsEvent);
    

                        if(this->bufferedImageVector->size() > 1)
                        
                                    {
                                    this->run();
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ImageComparisonWorker::onEvent(AllBinaryEventObject* allBinaryEventObject) -> void{
this->onCaptureEvent(dynamic_cast<CapturedImageWorkerResultsEvent*>(allBinaryEventObject));
    
}


    auto ImageComparisonWorker::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    
timeHelper->setStartTimeTNT();
    

                        if(this->imageComparatorConstraintsInterface->isFrameAllowed(this->index2))
                        
                                    {
                                    
    std::vector<CapturedImageWorkerResultsEvent*> capturedImageWorkerResultsEvent = std::vector<CapturedImageWorkerResultsEvent*>(2);;
    
capturedImageWorkerResultsEvent[0]= dynamic_cast<CapturedImageWorkerResultsEvent*>(this->bufferedImageVector->get(0));
    
capturedImageWorkerResultsEvent[1]= dynamic_cast<CapturedImageWorkerResultsEvent*>(this->bufferedImageVector->get(1));
    

                        if(this->imageComparatorConstraintsInterface->isImageValid(capturedImageWorkerResultsEvent[0]->getBufferedImage()) && this->imageComparatorConstraintsInterface->isImageValid(capturedImageWorkerResultsEvent[1]->getBufferedImage()))
                        
                                    {
                                    
    ImageComparisonResult* imageComparisonResult = this->imageComparator->compare(capturedImageWorkerResultsEvent[0]->getBufferedImage(), capturedImageWorkerResultsEvent[1]->getBufferedImage(), capturedImageWorkerResultsEvent[0]->getFrame(), capturedImageWorkerResultsEvent[1]->getFrame(), 0);;
    

    int64_t frame = capturedImageWorkerResultsEvent[1]->getFrame();;
    

    ImageComparisonResultFrameCacheable* imageComparisonResultFrameCacheable = new ImageComparisonResultFrameCacheable(imageComparisonResult, frame);;
    
ImageComparisonResultCacheSingleton::getInstance()->add(imageComparisonResultFrameCacheable);
    
this->fireEvent(new ImageComparisonResultsEvent(this, imageComparisonResult));
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Image Comparison Result: ")->append(JavaString::valueOf(imageComparisonResult))->append(" for frame: ")->appendlong(frame)), this, this->commonStrings->RUN);
    

                                    }
                                
                        else {
                            this->logUtil->putF("An Image Was Not Valid: Image Worker Event Processing terminated", this, this->commonStrings->RUN);
    

                        }
                            

                                    }
                                
this->bufferedImageVector->remove(0);
    
this->index2++;
    

    std::string message = JavaString::valueOf((new StringMaker())->append("Frame: ")->appendint(this->index2)->append(CommonLabels::getInstance()->ELAPSED)->appendlong(timeHelper->getElapsedTNT()));;
    
this->logUtil->putF(message, this, this->commonStrings->RUN);
    
this->setRunning(false);
    
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONWORKER_CPP
