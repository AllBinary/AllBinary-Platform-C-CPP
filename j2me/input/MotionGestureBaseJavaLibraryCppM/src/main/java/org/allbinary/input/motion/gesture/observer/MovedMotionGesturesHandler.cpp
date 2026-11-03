
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOVEDMOTIONGESTURESHANDLER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOVEDMOTIONGESTURESHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/observer/MovedMotionGesturesHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"

auto MovedMotionGesturesHandler::SINGLETON_owner() -> MovedMotionGesturesHandler* { static std::unique_ptr<MovedMotionGesturesHandler> value(new MovedMotionGesturesHandler()); return value.get(); }
MovedMotionGesturesHandler* MovedMotionGesturesHandler::SINGLETON = MovedMotionGesturesHandler::SINGLETON_owner();

    auto MovedMotionGesturesHandler::getInstance() -> MovedMotionGesturesHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return MovedMotionGesturesHandler::SINGLETON;
    
}


MovedMotionGesturesHandler::MovedMotionGesturesHandler(){
}


                //@Throws(Exception.constructor)
            
    auto MovedMotionGesturesHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    BaseMotionGestureEventListener* baseMotionGestureEventListener = dynamic_cast<BaseMotionGestureEventListener*>(eventListenerInterface);;
    
baseMotionGestureEventListener->onMotionGestureEvent(dynamic_cast<MotionGestureEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOVEDMOTIONGESTURESHANDLER_CPP
