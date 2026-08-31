
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

      
#include <org/allbinary/input/motion/button/TouchButtonRecognizer.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRecognizer.h"

class AllMotionRecognizer: public MotionRecognizer {
        

    private: static index: int32_t = 0;

    private: static const pointCircularPool: GPointCircularPool = new GPointCircularPool(40);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const motionGestureRecognizer: MotionGestureRecognizer;

    private: touchButtonProcessing: bool = false;

    private: const touchButtonRecognizer: TouchButtonRecognizer;

    private: const id: int32_t;

public constructor (){

            super();
        this.id= AllMotionRecognizer.index++;
    
this.motionGestureRecognizer= new MotionGestureRecognizer(this.id);
    
this.touchButtonRecognizer= new TouchButtonRecognizer();
    
}


                //@Throws(Exception.constructor)
            
    public processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this.touchButtonRecognizer!.pressTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    this.touchButtonProcessing= true;
    

                                    }
                                

                        if(!this.touchButtonProcessing)
                        
                                    {
                                    
    point: CustomGPoint = AllMotionRecognizer.pointCircularPool!.getNextInstance() as CustomGPoint;;
    
point.setX(x);
    
point.setY(y);
    
this.motionGestureRecognizer!.processPressedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this.touchButtonRecognizer!.releaseTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    
                                    }
                                

                        if(!this.touchButtonProcessing)
                        
                                    {
                                    
    point: CustomGPoint = AllMotionRecognizer.pointCircularPool!.getNextInstance() as CustomGPoint;;
    
point.setX(x);
    
point.setY(y);
    
this.motionGestureRecognizer!.processReleasedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                

                        if(this.touchButtonProcessing)
                        
                                    {
                                    this.touchButtonProcessing= false;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this.touchButtonProcessing)
                        
                                    {
                                    this.touchButtonRecognizer!.pressTouchButtonInput(x, y, deviceId);
    

                                    }
                                

                        if(!this.touchButtonProcessing)
                        
                                    {
                                    
    point: CustomGPoint = AllMotionRecognizer.pointCircularPool!.getNextInstance() as CustomGPoint;;
    
point.setX(x);
    
point.setY(y);
    
this.motionGestureRecognizer!.processDraggedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


    private: lastX: int32_t= 0;

    private: lastY: int32_t= 0;

                //@Throws(Exception.constructor)
            
    public processMovedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(x != this.lastX || y != this.lastY)
                        
                                    {
                                    this.lastX= x;
    
this.lastY= y;
    

    point: CustomGPoint = AllMotionRecognizer.pointCircularPool!.getNextInstance() as CustomGPoint;;
    
point.setX(x);
    
point.setY(y);
    
this.motionGestureRecognizer!.processMovedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processScrolledMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

    point: CustomGPoint = AllMotionRecognizer.pointCircularPool!.getNextInstance() as CustomGPoint;;
    
point.setX(x);
    
point.setY(y);
    
this.motionGestureRecognizer!.processScrolledMotionEvent(point, deviceId, modifiers);
    
}


    public MotionGestureRecognizer getMotionGestureRecognizer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.motionGestureRecognizer;
    
}


};

            

