
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
class MotionGestureEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionGestureEventListener: public BaseMotionGestureEventListener {

    public: virtual void onPressedMotionGestureEvent(MotionGestureEvent* ev) = 0;

    public: virtual void onUpMotionGestureEvent(MotionGestureEvent* ev) = 0;

    public: virtual void onDownMotionGestureEvent(MotionGestureEvent* ev) = 0;

    public: virtual void onLeftMotionGestureEvent(MotionGestureEvent* ev) = 0;

    public: virtual void onRightMotionGestureEvent(MotionGestureEvent* ev) = 0;

    public: virtual void onDiagonalDownRightMotionGestureEvent(MotionGestureEvent* ev) = 0;

    public: virtual void onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent* ev) = 0;

    public: virtual void onDiagonalUpRightMotionGestureEvent(MotionGestureEvent* ev) = 0;

    public: virtual void onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent* ev) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void released(MotionGestureEvent* ev) = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H_COMPLETE
        #if __has_include("org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h")
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#endif

        #endif
    
