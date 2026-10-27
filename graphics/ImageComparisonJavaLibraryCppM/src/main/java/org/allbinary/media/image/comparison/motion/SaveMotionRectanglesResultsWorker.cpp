
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_SAVEMOTIONRECTANGLESRESULTSWORKER_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_SAVEMOTIONRECTANGLESRESULTSWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/SaveMotionRectanglesResultsWorker.h"
        

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
        #include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsListener.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsEvent.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesImageInputOutput.h"


SaveMotionRectanglesResultsWorker::SaveMotionRectanglesResultsWorker() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->motionRectanglesVector= new BasicArrayListD();
    
}


    auto SaveMotionRectanglesResultsWorker::getMotionRectanglesVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectanglesVector;
    
}


    auto SaveMotionRectanglesResultsWorker::onMotionRectanglesImageComparisonResultsEvent(MotionRectanglesResultsEvent* motionRectanglesResultsEvent) -> void{
this->getMotionRectanglesVector()->add(motionRectanglesResultsEvent);
    
this->run();
    
}


    auto SaveMotionRectanglesResultsWorker::onEvent(AllBinaryEventObject* allBinaryEventObject) -> void{
this->onMotionRectanglesImageComparisonResultsEvent(dynamic_cast<MotionRectanglesResultsEvent*>(allBinaryEventObject));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto SaveMotionRectanglesResultsWorker::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto SaveMotionRectanglesResultsWorker::setRunning(bool running) -> void{
this->running= running;
    
}


    auto SaveMotionRectanglesResultsWorker::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    
timeHelper->setStartTimeTNT();
    

    MotionRectanglesResultsEvent* motionRectanglesResultsEvent = dynamic_cast<MotionRectanglesResultsEvent*>(this->getMotionRectanglesVector()->get(0));;
    

    MotionRectangles* motionRectangles = motionRectanglesResultsEvent->getMotionRectangles();;
    
(new MotionRectanglesImageInputOutput())->save(motionRectangles, motionRectanglesResultsEvent->getFrame());
    
this->getMotionRectanglesVector()->remove(motionRectangles);
    
this->logUtil->putF(CommonLabels::getInstance()->ELAPSED +timeHelper->getElapsedTNT(), this, this->commonStrings->RUN);
    
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_SAVEMOTIONRECTANGLESRESULTSWORKER_CPP
