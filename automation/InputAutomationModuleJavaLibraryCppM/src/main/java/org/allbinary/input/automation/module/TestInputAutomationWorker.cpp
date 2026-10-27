
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/TestInputAutomationWorker.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/SaveImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/SaveMotionRectanglesResultsWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/TestInputForMotionRectanglesResultsWorker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TestInputAutomationWorker::TestInputAutomationWorker(){
this->captureWorker= new ScreenCaptureImagesWorker();
    
this->changedPixelsImageComparisonResultsWorker= new SaveImageComparisonWorker();
    
this->saveMotionRectanglesAsImagesWorker= new SaveMotionRectanglesResultsWorker();
    
this->moveMouseToFirstMotionRectanglesResultsWorker= new TestInputForMotionRectanglesResultsWorker();
    
this->motionRectanglesWorker->addListenerInterface(this->saveMotionRectanglesAsImagesWorker);
    
this->motionRectanglesWorker->addListenerInterface(this->moveMouseToFirstMotionRectanglesResultsWorker);
    
this->imageComparisonWorker->addListenerInterface(this->changedPixelsImageComparisonResultsWorker);
    
this->imageComparisonWorker->addListenerInterface(this->motionRectanglesWorker);
    
this->captureWorker->addListenerInterface(this->imageComparisonWorker);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_CPP
