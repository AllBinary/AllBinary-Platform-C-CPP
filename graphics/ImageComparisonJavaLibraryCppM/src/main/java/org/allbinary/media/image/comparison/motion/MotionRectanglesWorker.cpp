
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/motion/AllMotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/AllMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsFrameCacheable.h"
#include "org/allbinary/media/image/comparison/motion/ConsolidateMotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/ConstrainedMotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/ConstrainedMotionRectanglesResultsCacheSingleton.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsEvent.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"


MotionRectanglesWorker::MotionRectanglesWorker(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageComparisonInfoVector(new BasicArrayListD()){
this->motionRectangleConstraintsInterface= motionRectangleConstraintsInterface;
    
}


    auto MotionRectanglesWorker::onImageComparisonResultsEvent(ImageComparisonResultsEvent* imageComparisonResultsEvent) -> void{
this->imageComparisonInfoVector->add(imageComparisonResultsEvent);
    
this->run();
    
}


    auto MotionRectanglesWorker::onEvent(AllBinaryEventObject* allBinaryEventObject) -> void{
this->onImageComparisonResultsEvent(dynamic_cast<ImageComparisonResultsEvent*>(allBinaryEventObject));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MotionRectanglesWorker::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MotionRectanglesWorker::setRunning(bool running) -> void{
this->running= running;
    
}


    auto MotionRectanglesWorker::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    
timeHelper->setStartTimeTNT();
    

    ImageComparisonResultsEvent* imageComparisonResultsEvent = dynamic_cast<ImageComparisonResultsEvent*>(this->imageComparisonInfoVector->get(0));;
    

    ImageComparisonResult* imageComparisonInfo = dynamic_cast<ImageComparisonResult*>(imageComparisonResultsEvent->getImageComparisonResult());;
    
this->logUtil->putF(imageComparisonInfo->toString(), this, this->commonStrings->RUN);
    

    AllMotionRectangles* allMotionRectangles = new AllMotionRectangles(imageComparisonInfo);;
    
AllMotionRectanglesResultsCacheSingleton::getInstance()->add(new MotionRectanglesResultsFrameCacheable(allMotionRectangles, imageComparisonInfo->getFrameTwo()));
    

    ConsolidateMotionRectangles* consolidatedMotionRectangles = new ConsolidateMotionRectangles(allMotionRectangles);;
    
ConsolidatedMotionRectanglesResultsCacheSingleton::getInstance()->add(new MotionRectanglesResultsFrameCacheable(consolidatedMotionRectangles, imageComparisonInfo->getFrameTwo()));
    

    ConstrainedMotionRectangles* constrainedMotionRectangles = new ConstrainedMotionRectangles(this->motionRectangleConstraintsInterface, consolidatedMotionRectangles);;
    
constrainedMotionRectangles->applyMotionRectangleConstraints(consolidatedMotionRectangles);
    
ConstrainedMotionRectanglesResultsCacheSingleton::getInstance()->add(new MotionRectanglesResultsFrameCacheable(constrainedMotionRectangles, imageComparisonInfo->getFrameTwo()));
    
this->fireEvent(new MotionRectanglesResultsEvent(this, imageComparisonInfo->getFrameTwo(), dynamic_cast<MotionRectangles*>(constrainedMotionRectangles)));
    
this->imageComparisonInfoVector->remove(imageComparisonResultsEvent);
    
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




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESWORKER_CPP
