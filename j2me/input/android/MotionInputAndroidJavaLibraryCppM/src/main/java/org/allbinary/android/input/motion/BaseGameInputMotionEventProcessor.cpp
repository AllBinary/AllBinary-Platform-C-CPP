
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_BASEGAMEINPUTMOTIONEVENTPROCESSOR_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_BASEGAMEINPUTMOTIONEVENTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/MotionEventProcessor.h"


BaseGameInputMotionEventProcessor::BaseGameInputMotionEventProcessor() : commonStrings(CommonStrings::getInstance()){
this->gameMotionGestureListener= new GameMotionGestureListener(MotionGestureReceiveInterfaceFactory::getInstance());
    
this->addListener();
    
}


    auto BaseGameInputMotionEventProcessor::process(MotionEvent* motionEvent) -> void{
}


    auto BaseGameInputMotionEventProcessor::addListener() -> void{

    BasicMotionGesturesHandler* motionGesturesHandler = BasicMotionGesturesHandler::getInstance();;
    
motionGesturesHandler->addListenerInterface(this->gameMotionGestureListener);
    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_BASEGAMEINPUTMOTIONEVENTPROCESSOR_CPP
