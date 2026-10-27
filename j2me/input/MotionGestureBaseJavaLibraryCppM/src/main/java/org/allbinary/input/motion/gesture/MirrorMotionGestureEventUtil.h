
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MirrorMotionGestureEventUtil
            : public Object
         {

    private: static MirrorMotionGestureEventUtil* instance() { static std::unique_ptr<MirrorMotionGestureEventUtil> value(new MirrorMotionGestureEventUtil()); return value.get(); }

    public: static MirrorMotionGestureEventUtil* getInstance();

    private: MotionEventCircularPool* motionEventCircularPool;

private: MirrorMotionGestureEventUtil();

                //@Throws(Exception.constructor)
            
    public: MotionGestureEvent* mirrorVerticle(MotionGestureEvent* motionGestureEvent, int32_t halfWidth);

    public: int32_t getNewX(int32_t x, int32_t halfWidth);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H
