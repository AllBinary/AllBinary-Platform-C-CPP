
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/MirrorMotionGestureEventUtil.h"
        

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
        
auto MirrorMotionGestureEventUtil::instance_owner() -> MirrorMotionGestureEventUtil* { static std::unique_ptr<MirrorMotionGestureEventUtil> value(new MirrorMotionGestureEventUtil()); return value.get(); }
MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil::instance = MirrorMotionGestureEventUtil::instance_owner();

MirrorMotionGestureEventUtil::MirrorMotionGestureEventUtil(){
this->motionEventCircularPool= MotionEventCircularPool::createPool(Integer.MAX_VALUE);
    
}


                //@Throws(Exception.constructor)
            
    auto MirrorMotionGestureEventUtil::mirrorVerticle(MotionGestureEvent* motionGestureEvent, int32_t halfWidth) -> MotionGestureEvent*{

    MotionGestureEvent* event = this->motionEventCircularPool->getInstance(motionGestureEvent->getMotionGesture());;
    

    int32_t previousNewX = this->getNewX(motionGestureEvent->getPreviousPoint()->getX(), halfWidth);;
    

    int32_t currentNewX = this->getNewX(motionGestureEvent->getCurrentPoint()->getX(), halfWidth);;
    

    PointFactory* pointFactory = PointFactory::getInstance();;
    

    GPoint* mirroredPreviousPoint = pointFactory->createXY(previousNewX, motionGestureEvent->getPreviousPoint()->getY());;
    

    GPoint* mirroredCurrentPoint = pointFactory->createXY(currentNewX, motionGestureEvent->getCurrentPoint()->getY());;
    
event->setPreviousPoint(mirroredPreviousPoint);
    
event->setCurrentPoint(mirroredCurrentPoint);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return event;
    
}


    auto MirrorMotionGestureEventUtil::getNewX(int32_t x, int32_t halfWidth) -> int32_t{

    int32_t newX= 0;;
    

                        if(x > halfWidth)
                        
                                    {
                                    newX= halfWidth -(x -halfWidth);
    

                                    }
                                
                        else {
                            newX= halfWidth +(halfWidth -x);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newX;
    
}


    auto MirrorMotionGestureEventUtil::getInstance() -> MirrorMotionGestureEventUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MirrorMotionGestureEventUtil::instance;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_CPP
