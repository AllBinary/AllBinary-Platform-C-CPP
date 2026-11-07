
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/AbstractInputAutomationWorker.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/InputAutomationActionInterface.h"


AbstractInputAutomationWorker::AbstractInputAutomationWorker(InputAutomationActionInterface* inputAutomationActionInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto AbstractInputAutomationWorker::setThread(Thread* thread) -> void{
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbstractInputAutomationWorker::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbstractInputAutomationWorker::setRunning(bool running) -> void{
this->running= running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbstractInputAutomationWorker::isAnyDataWorkerRunning() -> bool{

                        if(this->captureThread != 
                                    nullptr
                                 && (this->captureThread->isAlive() || this->getCaptureWorker()->isRunning() || this->getMotionRectanglesWorker()->isRunning() || this->getImageComparisonWorker()->isRunning()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbstractInputAutomationWorker::startDataWorkers() -> void{

                        if(!isAnyDataWorkerRunning())
                        
                                    {
                                    this->captureThread= new Thread(this->getCaptureWorker());
    
this->logUtil->putF(JavaString::valueOf("Starting CaptureWorkers - Need more images - Thread State: ") +JavaString::valueOf(JavaString::valueOf(this->captureThread->getState())), this, "startCaptureWorkers");
    
this->captureThread->start();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbstractInputAutomationWorker::waitForDataWorkers() -> void{

        while(isAnyDataWorkerRunning())
        {
this->logUtil->putF("Waiting", this, this->commonStrings->RUN);
    
Thread::sleep(250);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AbstractInputAutomationWorker::stopDataWorkers() -> void{
this->getCaptureWorker()->setRunning(false);
    
}


                //@Throws(Exception.constructor)
            
    auto AbstractInputAutomationWorker::process() -> void{



                            throw RuntimeException();
                    
}


    auto AbstractInputAutomationWorker::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    

        while(this->isRunning())
        {
timeHelper->setStartTimeTNT();
    
this->process();
    
this->index++;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(CommonLabels::getInstance()->ELAPSED +timeHelper->getElapsedTNT()) +JavaString::valueOf(" Index: ")) +JavaString::valueOf(this->index), this, this->commonStrings->RUN);
    
}

this->stopDataWorkers();
    
this->waitForDataWorkers();
    
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}


    auto AbstractInputAutomationWorker::getInputAutomationActionInterface() -> InputAutomationActionInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputAutomationActionInterface;
    
}


    auto AbstractInputAutomationWorker::setInputAutomationActionInterface(InputAutomationActionInterface* inputAutomationActionInterface) -> void{
this->inputAutomationActionInterface= inputAutomationActionInterface;
    
}


    auto AbstractInputAutomationWorker::getCaptureWorker() -> CaptureWorkerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->captureWorkerInterface;
    
}


    auto AbstractInputAutomationWorker::setCaptureWorker(CaptureWorkerInterface* captureWorkerInterface) -> void{
this->captureWorkerInterface= captureWorkerInterface;
    
}


    auto AbstractInputAutomationWorker::getImageComparisonWorker() -> ImageComparisonWorker*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageComparisonWorker;
    
}


    auto AbstractInputAutomationWorker::setImageComparisonWorker(ImageComparisonWorker* imageComparisonWorker) -> void{
this->imageComparisonWorker= imageComparisonWorker;
    
}


    auto AbstractInputAutomationWorker::getMotionRectanglesWorker() -> MotionRectanglesWorker*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->motionRectanglesWorker;
    
}


    auto AbstractInputAutomationWorker::setMotionRectanglesWorker(MotionRectanglesWorker* motionRectanglesWorker) -> void{
this->motionRectanglesWorker= motionRectanglesWorker;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_CPP
