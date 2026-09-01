
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASEMOTIONGESTUREEVENTLISTENER_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASEMOTIONGESTUREEVENTLISTENER_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionGestureEvent.h"

class BaseMotionGestureEventListener: public EventListenerInterface {

    void onMotionGestureEvent(MotionGestureEvent motionGestureEvent);

    void onScrolledMotionGestureEvent(MotionGestureEvent motionGestureEvent);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASEMOTIONGESTUREEVENTLISTENER_H
