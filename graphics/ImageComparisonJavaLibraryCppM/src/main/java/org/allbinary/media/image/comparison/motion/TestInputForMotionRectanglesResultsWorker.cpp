
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/TestInputForMotionRectanglesResultsWorker.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt/Rectangle.h>

      
#include <java/awt/event/InputEvent.h>

      
#include <java/awt/event/KeyEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsListener.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsEvent.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"


TestInputForMotionRectanglesResultsWorker::TestInputForMotionRectanglesResultsWorker() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->motionRectanglesVector= new BasicArrayListD();
    
}


    auto TestInputForMotionRectanglesResultsWorker::getMotionRectanglesVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectanglesVector;
    
}


    auto TestInputForMotionRectanglesResultsWorker::onMotionRectanglesImageComparisonResultsEvent(MotionRectanglesResultsEvent* motionRectanglesImageComparisonResultsEvent) -> void{
this->getMotionRectanglesVector()->add(motionRectanglesImageComparisonResultsEvent->getMotionRectangles());
    
this->run();
    
}


    auto TestInputForMotionRectanglesResultsWorker::onEvent(AllBinaryEventObject* allBinaryEventObject) -> void{
this->onMotionRectanglesImageComparisonResultsEvent(dynamic_cast<MotionRectanglesResultsEvent*>(allBinaryEventObject));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TestInputForMotionRectanglesResultsWorker::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TestInputForMotionRectanglesResultsWorker::setRunning(bool running) -> void{
this->running= running;
    
}


    auto TestInputForMotionRectanglesResultsWorker::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    
timeHelper->setStartTimeTNT();
    

    MotionRectangles* motionRectangles = dynamic_cast<MotionRectangles*>(this->getMotionRectanglesVector()->get(0));;
    

    BasicArrayList* motionRectangleVector = motionRectangles->getVector();;
    

                        if(motionRectangleVector->size() > 0)
                        
                                    {
                                    
    Rectangle* rectangle = dynamic_cast<Rectangle*>(motionRectangleVector->get(0));;
    

    ABHashtable<Object*, Object*>* robotHashtable = InputRobotFactory::getInstance()->get();;
    

    std::vector<Object*> inputTypeNameArray = robotHashtable->keys().();;
    

    int32_t size = inputTypeNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string inputTypeNameString = inputTypeNameArray[index];;
    

    InputRobotInterface* inputRobotInterface = dynamic_cast<InputRobotInterface*>(robotHashtable->get(inputTypeNameString));;
    
inputRobotInterface->mouseMoveToTarget(rectangle);
    

                        if(inputRobotInterface->getName().compareTo(TempInputRobotNames::DX_NAME) == 0)
                        
                                    {
                                    inputRobotInterface->mousePress(InputEvent::BUTTON1_MASK);
    
Thread::sleep(300);
    
inputRobotInterface->mouseRelease(InputEvent::BUTTON1_MASK);
    
inputRobotInterface->mousePress(InputEvent::BUTTON2_MASK);
    
Thread::sleep(300);
    
inputRobotInterface->mouseRelease(InputEvent::BUTTON2_MASK);
    
inputRobotInterface->mousePress(InputEvent::BUTTON3_MASK);
    
Thread::sleep(300);
    
inputRobotInterface->mouseRelease(InputEvent::BUTTON3_MASK);
    
inputRobotInterface->keyPress(KeyEvent::VK_1);
    
Thread::sleep(300);
    
inputRobotInterface->keyRelease(KeyEvent::VK_1);
    
inputRobotInterface->keyPress(KeyEvent::VK_2);
    
Thread::sleep(300);
    
inputRobotInterface->keyRelease(KeyEvent::VK_2);
    
inputRobotInterface->keyPress(KeyEvent::VK_3);
    
Thread::sleep(300);
    
inputRobotInterface->keyRelease(KeyEvent::VK_3);
    
inputRobotInterface->keyPress(KeyEvent::VK_4);
    
Thread::sleep(300);
    
inputRobotInterface->keyRelease(KeyEvent::VK_4);
    
inputRobotInterface->keyPress(KeyEvent::VK_F1);
    
Thread::sleep(300);
    
inputRobotInterface->keyRelease(KeyEvent::VK_F1);
    

                                    }
                                
}


                                    }
                                
this->index++;
    
this->getMotionRectanglesVector()->remove(motionRectangles);
    
this->logUtil->putF(CommonLabels::getInstance()->ELAPSED +timeHelper->getElapsedTNT(), this, this->commonStrings->RUN);
    
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_CPP
