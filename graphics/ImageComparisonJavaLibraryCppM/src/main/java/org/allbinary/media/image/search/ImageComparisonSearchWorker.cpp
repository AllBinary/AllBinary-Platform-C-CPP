
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCHWORKER_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCHWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/search/ImageComparisonSearchWorker.h"
        

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

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResultsListener.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/search/ImageComparisonSearchConstraintsInterface.h"


ImageComparisonSearchWorker::ImageComparisonSearchWorker(ImageComparisonSearchConstraintsInterface* imageSearchConstraintsInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->imageComparisonInfoVector= new BasicArrayListD();
    
this->imageSearchConstraintsInterface= imageSearchConstraintsInterface;
    
}


    auto ImageComparisonSearchWorker::onImageComparisonResultsEvent(ImageComparisonResultsEvent* imageComparisonResultsEvent) -> void{
this->imageComparisonInfoVector->add(imageComparisonResultsEvent->getImageComparisonResult());
    
this->run();
    
}


    auto ImageComparisonSearchWorker::onEvent(AllBinaryEventObject* allBinaryEventObject) -> void{
this->onImageComparisonResultsEvent(dynamic_cast<ImageComparisonResultsEvent*>(allBinaryEventObject));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ImageComparisonSearchWorker::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ImageComparisonSearchWorker::setRunning(bool running) -> void{
this->running= running;
    
}


    auto ImageComparisonSearchWorker::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    
timeHelper->setStartTimeTNT();
    

    ImageComparisonResult* imageComparisonInfo = dynamic_cast<ImageComparisonResult*>(this->imageComparisonInfoVector->get(0));;
    
this->logUtil->putF(JavaString::valueOf(imageComparisonInfo), this, this->commonStrings->RUN);
    

    BufferedImage* latestBufferedImage = imageComparisonInfo->getBufferedImages()[1];;
    
this->imageComparisonInfoVector->remove(imageComparisonInfo);
    
this->index++;
    
this->logUtil->putF(CommonLabels::getInstance()->ELAPSED +timeHelper->getElapsedTNT(), this, this->commonStrings->RUN);
    
this->setRunning(false);
    
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCHWORKER_CPP
