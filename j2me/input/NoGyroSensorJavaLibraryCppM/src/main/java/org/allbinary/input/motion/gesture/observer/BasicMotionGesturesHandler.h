
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASICMOTIONGESTURESHANDLER_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASICMOTIONGESTURESHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryEventObject;
class EventListenerInterface;
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BaseMotionGestureEventListener;
class MotionGestureEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicMotionGesturesHandler: public BasicEventHandler {

    private: static BasicMotionGesturesHandler* SINGLETON_owner();
    private: static BasicMotionGesturesHandler* SINGLETON;

    public: static BasicMotionGesturesHandler* getInstance();

/*protected*/ public: BasicMotionGesturesHandler();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASICMOTIONGESTURESHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASICMOTIONGESTURESHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASICMOTIONGESTURESHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h")
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#endif

        #endif
    
