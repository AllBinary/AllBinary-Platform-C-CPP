
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class GPoint;
class PointFactory;
class MotionEventCircularPool;
class MotionGestureEvent;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MirrorMotionGestureEventUtil
            : public virtual Object
         {

    private: static MirrorMotionGestureEventUtil* instance_owner();
    private: static MirrorMotionGestureEventUtil* instance;

    public: static MirrorMotionGestureEventUtil* getInstance();

    private: MotionEventCircularPool* motionEventCircularPool;

private: MirrorMotionGestureEventUtil();

                //@Throws(Exception.constructor)
            
    public: MotionGestureEvent* mirrorVerticle(MotionGestureEvent* motionGestureEvent, int32_t halfWidth);

    public: int32_t getNewX(int32_t x, int32_t halfWidth);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>
#endif

        #endif
    
