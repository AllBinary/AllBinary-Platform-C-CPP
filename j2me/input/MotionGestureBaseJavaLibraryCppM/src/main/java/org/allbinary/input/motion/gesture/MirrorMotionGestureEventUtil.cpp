
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MirrorMotionGestureEventUtil
            : public Object
         {
        

    private: static const instance: MirrorMotionGestureEventUtil = new MirrorMotionGestureEventUtil();

    public static MirrorMotionGestureEventUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MirrorMotionGestureEventUtil.instance;
    
}


    private: const motionEventCircularPool: MotionEventCircularPool;

private constructor (){

            super();
        this.motionEventCircularPool= MotionEventCircularPool.createPool(Integer.MAX_VALUE);
    
}


                //@Throws(Exception.constructor)
            
    public MotionGestureEvent mirrorVerticle(MotionGestureEvent motionGestureEvent, int32_t halfWidth){

    event: MotionGestureEvent = this.motionEventCircularPool!.getInstance(motionGestureEvent!.getMotionGesture())!;;
    

    previousNewX: int32_t = this.getNewX(motionGestureEvent!.getPreviousPoint()!.getX(), halfWidth)!;;
    

    currentNewX: int32_t = this.getNewX(motionGestureEvent!.getCurrentPoint()!.getX(), halfWidth)!;;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    mirroredPreviousPoint: GPoint = pointFactory!.createXY(previousNewX, motionGestureEvent!.getPreviousPoint()!.getY())!;;
    

    mirroredCurrentPoint: GPoint = pointFactory!.createXY(currentNewX, motionGestureEvent!.getCurrentPoint()!.getY())!;;
    
event.setPreviousPoint(mirroredPreviousPoint);
    
event.setCurrentPoint(mirroredCurrentPoint);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return event;
    
}


    public int32_t getNewX(int32_t x, int32_t halfWidth){

    newX: int32_t= 0;;
    

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


};

            

