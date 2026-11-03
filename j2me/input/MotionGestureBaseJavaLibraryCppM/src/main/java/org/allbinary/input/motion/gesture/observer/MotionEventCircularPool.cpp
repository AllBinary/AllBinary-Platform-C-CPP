
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/MotionEventFactory.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"


    auto MotionEventCircularPool::createPool(int32_t id) -> MotionEventCircularPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new MotionEventCircularPool(id);
    
}


MotionEventCircularPool::MotionEventCircularPool(int32_t id) : MIN(TouchMotionGestureFactory::getInstance()->LAST_MOTION->getId()), eventPool(new AllBinaryEventCircularPool((InputFactory::getInstance()->MAX -1) -this->MIN)){
this->eventPool->initAllBinaryEventCircularPool(new MotionEventFactory(this->eventPool, id));
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MotionEventCircularPool::getInstance(MotionGestureInput* motionGestureInput) -> MotionGestureEvent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<MotionGestureEvent*>(this->eventPool->getInstance(motionGestureInput->getId() -this->MIN));
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_CPP
