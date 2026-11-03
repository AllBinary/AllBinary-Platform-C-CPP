
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto NoCompleteMotionGestureInputEventListener::instance_owner() -> NoCompleteMotionGestureInputEventListener* { static std::unique_ptr<NoCompleteMotionGestureInputEventListener> value(new NoCompleteMotionGestureInputEventListener()); return value.get(); }
NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener::instance = NoCompleteMotionGestureInputEventListener::instance_owner();

NoCompleteMotionGestureInputEventListener::NoCompleteMotionGestureInputEventListener(){
}


    auto NoCompleteMotionGestureInputEventListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto NoCompleteMotionGestureInputEventListener::onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) -> void{
}


    auto NoCompleteMotionGestureInputEventListener::getInstance() -> NoCompleteMotionGestureInputEventListener*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoCompleteMotionGestureInputEventListener::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_CPP
