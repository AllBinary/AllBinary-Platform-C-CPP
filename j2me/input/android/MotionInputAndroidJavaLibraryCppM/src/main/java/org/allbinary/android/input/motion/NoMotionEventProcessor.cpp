
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_NOMOTIONEVENTPROCESSOR_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_NOMOTIONEVENTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/NoMotionEventProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/MotionEventProcessor.h"


NoMotionEventProcessor::NoMotionEventProcessor() {
        }
        auto NoMotionEventProcessor::SINGLETON_owner() -> MotionEventProcessor* { static std::unique_ptr<MotionEventProcessor> value(new MotionEventProcessor()); return value.get(); }
MotionEventProcessor* NoMotionEventProcessor::SINGLETON = NoMotionEventProcessor::SINGLETON_owner();

    auto NoMotionEventProcessor::getInstance() -> MotionEventProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoMotionEventProcessor::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_NOMOTIONEVENTPROCESSOR_CPP
