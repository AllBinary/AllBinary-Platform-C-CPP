
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ScreenCaptureImagesWorker;
class ImageComparisonWorker;
class SaveImageComparisonWorker;
class MotionRectanglesWorker;
class SaveMotionRectanglesResultsWorker;
class TestInputForMotionRectanglesResultsWorker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TestInputAutomationWorker
            : public virtual Object
         {

    private: ScreenCaptureImagesWorker* captureWorker;

    private: ImageComparisonWorker* imageComparisonWorker;

    private: MotionRectanglesWorker* motionRectanglesWorker;

    private: SaveImageComparisonWorker* changedPixelsImageComparisonResultsWorker;

    private: SaveMotionRectanglesResultsWorker* saveMotionRectanglesAsImagesWorker;

    private: TestInputForMotionRectanglesResultsWorker* moveMouseToFirstMotionRectanglesResultsWorker;

public: TestInputAutomationWorker();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONWORKER_H_COMPLETE
        #if __has_include(<org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h>)
#include <org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparisonWorker.h>)
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/SaveImageComparisonWorker.h>)
#include <org/allbinary/media/image/comparison/SaveImageComparisonWorker.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>)
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/SaveMotionRectanglesResultsWorker.h>)
#include <org/allbinary/media/image/comparison/motion/SaveMotionRectanglesResultsWorker.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/TestInputForMotionRectanglesResultsWorker.h>)
#include <org/allbinary/media/image/comparison/motion/TestInputForMotionRectanglesResultsWorker.h>
#endif

        #endif
    
