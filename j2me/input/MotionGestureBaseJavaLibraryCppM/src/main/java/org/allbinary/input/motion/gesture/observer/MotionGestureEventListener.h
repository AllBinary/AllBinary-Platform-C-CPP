
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

    void onPressedMotionGestureEvent(MotionGestureEvent ev);

    void onUpMotionGestureEvent(MotionGestureEvent ev);

    void onDownMotionGestureEvent(MotionGestureEvent ev);

    void onLeftMotionGestureEvent(MotionGestureEvent ev);

    void onRightMotionGestureEvent(MotionGestureEvent ev);

    void onDiagonalDownRightMotionGestureEvent(MotionGestureEvent ev);

    void onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent ev);

    void onDiagonalUpRightMotionGestureEvent(MotionGestureEvent ev);

    void onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent ev);

                //@Throws(Exception.constructor)
            
    void released(MotionGestureEvent ev);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H
