
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H

            #include "../../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseMotionGestureEventListener.h"
#include "MotionGestureEvent.h"

class MotionGestureEventListener: public BaseMotionGestureEventListener {
        

    onPressedMotionGestureEvent(MotionGestureEvent ev);

    onUpMotionGestureEvent(MotionGestureEvent ev);

    onDownMotionGestureEvent(MotionGestureEvent ev);

    onLeftMotionGestureEvent(MotionGestureEvent ev);

    onRightMotionGestureEvent(MotionGestureEvent ev);

    onDiagonalDownRightMotionGestureEvent(MotionGestureEvent ev);

    onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent ev);

    onDiagonalUpRightMotionGestureEvent(MotionGestureEvent ev);

    onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent ev);

                //@Throws(Exception.constructor)
            
    released(MotionGestureEvent ev);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H
