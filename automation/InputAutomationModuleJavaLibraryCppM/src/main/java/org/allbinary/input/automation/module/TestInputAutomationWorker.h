
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/SaveImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/SaveMotionRectanglesResultsWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/TestInputForMotionRectanglesResultsWorker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TestInputAutomationWorker
            : public Object
         {

    private: ScreenCaptureImagesWorker captureWorker;

    private: ImageComparisonWorker imageComparisonWorker;

    private: MotionRectanglesWorker motionRectanglesWorker;

    private: SaveImageComparisonWorker changedPixelsImageComparisonResultsWorker;

    private: SaveMotionRectanglesResultsWorker saveMotionRectanglesAsImagesWorker;

    private: TestInputForMotionRectanglesResultsWorker moveMouseToFirstMotionRectanglesResultsWorker;

public: TestInputAutomationWorker();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_H
