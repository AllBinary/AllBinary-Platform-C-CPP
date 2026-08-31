
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/graphics/GPointCircularPool.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRecognizer.h"

class GestureOnlyMotionRecognizer: public MotionRecognizer {
        

    private: static index: int32_t = 0;

    private: static const pointCircularPool: GPointCircularPool = new GPointCircularPool(40);

    private: const motionGestureRecognizer: MotionGestureRecognizer;

    private: const id: int32_t;

public constructor (){

            super();
        this.id= GestureOnlyMotionRecognizer.index++;
    
this.motionGestureRecognizer= new MotionGestureRecognizer(this.id);
    
}


                //@Throws(Exception.constructor)
            
    public processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

    point: CustomGPoint = GestureOnlyMotionRecognizer.pointCircularPool!.getNextInstance() as CustomGPoint;;
    
point.setX(x);
    
point.setY(y);
    
this.motionGestureRecognizer!.processPressedMotionEvent(point, deviceId, modifiers);
    
}


                //@Throws(Exception.constructor)
            
    public processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

    point: CustomGPoint = GestureOnlyMotionRecognizer.pointCircularPool!.getNextInstance() as CustomGPoint;;
    
point.setX(x);
    
point.setY(y);
    
this.motionGestureRecognizer!.processReleasedMotionEvent(point, deviceId, modifiers);
    
}


                //@Throws(Exception.constructor)
            
    public processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

    point: CustomGPoint = GestureOnlyMotionRecognizer.pointCircularPool!.getNextInstance() as CustomGPoint;;
    
point.setX(x);
    
point.setY(y);
    
this.motionGestureRecognizer!.processDraggedMotionEvent(point, deviceId, modifiers);
    
}


};

            

