
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class InputFactory;
class MotionGestureInput;
class TouchMotionGestureFactory;
class AllBinaryEventCircularPool;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MotionEventFactory;
class MotionGestureEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionEventCircularPool
            : public virtual Object
         {

    public: static MotionEventCircularPool* createPool(int32_t id);

    private: const int32_t MIN;

    private: AllBinaryEventCircularPool* eventPool;

private: MotionEventCircularPool(int32_t id);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: MotionGestureEvent* getInstance(MotionGestureInput* motionGestureInput);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/MotionGestureInput.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionEventFactory.h")
#include "org/allbinary/input/motion/gesture/observer/MotionEventFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#endif

        #endif
    
