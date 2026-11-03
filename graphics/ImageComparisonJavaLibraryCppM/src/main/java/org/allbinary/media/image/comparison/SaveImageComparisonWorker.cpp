
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/SaveImageComparisonWorker.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/ImageComparisonResultsListener.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#include "org/allbinary/media/image/comparison/ComparisonImageInputOutput.h"


SaveImageComparisonWorker::SaveImageComparisonWorker() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageComparisonInfoVector(new BasicArrayListD()){
}


    auto SaveImageComparisonWorker::onImageComparisonResultsEvent(ImageComparisonResultsEvent* imageComparisonResultsEvent) -> void{
this->imageComparisonInfoVector->add(imageComparisonResultsEvent);
    
this->run();
    
}


    auto SaveImageComparisonWorker::onEvent(AllBinaryEventObject* allBinaryEventObject) -> void{
this->onImageComparisonResultsEvent(dynamic_cast<ImageComparisonResultsEvent*>(allBinaryEventObject));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto SaveImageComparisonWorker::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto SaveImageComparisonWorker::setRunning(bool running) -> void{
this->running= running;
    
}


    auto SaveImageComparisonWorker::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    
timeHelper->setStartTimeTNT();
    

    ImageComparisonResultsEvent* imageComparisonResultsEvent = dynamic_cast<ImageComparisonResultsEvent*>(this->imageComparisonInfoVector->get(0));;
    

    ImageComparisonResult* imageComparisonInfo = imageComparisonResultsEvent->getImageComparisonResult();;
    
this->logUtil->putF(imageComparisonInfo->toString(), this, this->commonStrings->RUN);
    
(new ComparisonImageInputOutput())->save(imageComparisonInfo, imageComparisonInfo->getFrameTwo());
    
this->imageComparisonInfoVector->remove(imageComparisonInfo);
    
this->logUtil->putF(CommonLabels::getInstance()->ELAPSED +timeHelper->getElapsedTNT(), this, this->commonStrings->RUN);
    
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_SAVEIMAGECOMPARISONWORKER_CPP
