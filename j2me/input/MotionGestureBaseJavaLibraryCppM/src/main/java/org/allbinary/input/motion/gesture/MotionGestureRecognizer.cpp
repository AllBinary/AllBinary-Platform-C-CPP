
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
        
            #include "../../../../../java/lang/Math.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Line.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/MovedMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/ScrolledMotionGesturesHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/J2SEMath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchMotionGestureFactory.h"
#include "MotionGestureInput.h"

class MotionGestureRecognizer
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const j2seMath: J2SEMath = J2SEMath.getInstance()!;

    private: const origin: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

    private: previous: GPoint = this.origin;

    private: intermediate: GPoint = this.origin;

    private: const line: Line = new Line(this.origin, this.origin);

    private: const motionGesturesHandler: BasicMotionGesturesHandler;

    private: const movedMotionGesturesHandler: BasicEventHandler;

    private: const scrolledMotionGesturesHandler: BasicEventHandler;

    private: const motionEventCircularPool: MotionEventCircularPool;

public constructor (int32_t id){

            super();
        this.motionEventCircularPool= MotionEventCircularPool.createPool(id);
    

    motionGesturesHandler: BasicEventHandler = new BasicEventHandler();;
    

    movedMotionGesturesHandler: BasicEventHandler = motionGesturesHandler;;
    

    scrolledMotionGesturesHandler: BasicEventHandler = motionGesturesHandler;;
    

        try {
            motionGesturesHandler= BasicMotionGesturesHandler.getInstance();
    
movedMotionGesturesHandler= MovedMotionGesturesHandler.getInstance();
    
scrolledMotionGesturesHandler= ScrolledMotionGesturesHandler.getInstance();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.CONSTRUCTOR, e);
    
}

this.motionGesturesHandler= motionGesturesHandler as BasicMotionGesturesHandler;
    
this.movedMotionGesturesHandler= movedMotionGesturesHandler;
    
this.scrolledMotionGesturesHandler= scrolledMotionGesturesHandler;
    
}


                //@Throws(Exception.constructor)
            
    public bool processPressedMotionEvent(GPoint current, int32_t deviceId, int32_t button){
this.intermediate= this.origin;
    
this.previous= this.origin;
    

    event: MotionGestureEvent = this.motionEventCircularPool!.getInstance(TouchMotionGestureFactory.getInstance()!.PRESSED)!;;
    
event.setPreviousPoint(this.previous);
    
event.setCurrentPoint(current);
    
this.motionGesturesHandler!.fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public bool processReleasedMotionEvent(GPoint current, int32_t deviceId, int32_t button){

    event: MotionGestureEvent = this.motionEventCircularPool!.getInstance(TouchMotionGestureFactory.getInstance()!.RELEASED)!;;
    
event.setPreviousPoint(this.previous);
    
event.setCurrentPoint(current);
    
this.motionGesturesHandler!.fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public processDraggedMotionEvent(GPoint current, int32_t deviceId, int32_t buttonMask){

                        if(this.previous == this.origin || this.intermediate == this.origin)
                        
                                    {
                                    this.previous= current;
    
this.intermediate= current;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this.line.setP1(this.previous);
    
this.line.setP2(current);
    

    minimumMotionGesture: int32_t = MotionGestureConfigurationFactory.getInstance()!.getMinimumMotionGesture()!;;
    

                        if(this.j2seMath!.abs(this.line.getDeltaX()) < minimumMotionGesture && this.j2seMath!.abs(this.line.getDeltaY()) < minimumMotionGesture)
                        
                                    {
                                    this.intermediate= current;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    gradient: double = this.line.getGradient()!;;
    

    absGradient: double = this.j2seMath!.abs(gradient);;
    

    conf: MotionGestureConfiguration = MotionGestureConfigurationFactory.getInstance()!;;
    

    touchMotionGestureFactory: TouchMotionGestureFactory = TouchMotionGestureFactory.getInstance()!;;
    

    newMotionGesture: MotionGestureInput = touchMotionGestureFactory!.NO_MOTION;;
    

    diagonalToleranceHigher: double = 12.0;;
    

    diagonalToleranceLower: double = 12.0;;
    

                        if(conf.isDiagonalMotionGestureAllowed())
                        
                                    {
                                    diagonalToleranceHigher= (90 -conf.getDiagonalTolerance());
    
diagonalToleranceLower= conf.getDiagonalTolerance();
    

                                    }
                                

                        if(absGradient > Math.tan(Math.toRadians(diagonalToleranceHigher)))
                        
                                    {
                                    
                        if(this.line.getDeltaY() > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory!.UP;
    

                                    }
                                
                        else {
                            newMotionGesture= touchMotionGestureFactory!.DOWN;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(absGradient < Math.tan(Math.toRadians(diagonalToleranceLower)))
                        
                                    {
                                    
                        if(this.line.getDeltaX() > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory!.LEFT;
    

                                    }
                                
                        else {
                            newMotionGesture= touchMotionGestureFactory!.RIGHT;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(gradient > 0)
                        
                                    {
                                    
                        if(this.line.getDeltaX() > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory!.DIAGONAL_UP_LEFT;
    

                                    }
                                
                        else {
                            newMotionGesture= touchMotionGestureFactory!.DIAGONAL_DOWN_RIGHT;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(this.line.getDeltaX() > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory!.DIAGONAL_DOWN_LEFT;
    

                                    }
                                
                        else {
                            newMotionGesture= touchMotionGestureFactory!.DIAGONAL_UP_RIGHT;
    

                        }
                            

                        }
                            

                        }
                            

                        }
                            
this.previous= current;
    
this.intermediate= current;
    

    event: MotionGestureEvent = this.motionEventCircularPool!.getInstance(newMotionGesture)!;;
    
event.setPreviousPoint(this.previous);
    
event.setCurrentPoint(current);
    
this.motionGesturesHandler!.fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    
}


                //@Throws(Exception.constructor)
            
    public bool processMovedMotionEvent(GPoint current, int32_t deviceId, int32_t button){

    event: MotionGestureEvent = this.motionEventCircularPool!.getInstance(TouchMotionGestureFactory.getInstance()!.NO_MOTION)!;;
    
event.setPreviousPoint(this.previous);
    
event.setCurrentPoint(current);
    
this.movedMotionGesturesHandler!.fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public bool processScrolledMotionEvent(GPoint current, int32_t deviceId, int32_t button){

    touchMotionGestureFactory: TouchMotionGestureFactory = TouchMotionGestureFactory.getInstance()!;;
    

    newMotionGesture: MotionGestureInput = touchMotionGestureFactory!.NO_MOTION;;
    

                        if(button > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory!.SCROLL_UP;
    

                                    }
                                
                             else 
                        if(button < 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory!.SCROLL_DOWN;
    

                                    }
                                

    event: MotionGestureEvent = this.motionEventCircularPool!.getInstance(newMotionGesture)!;;
    
event.setPreviousPoint(this.previous);
    
event.setCurrentPoint(current);
    
this.scrolledMotionGesturesHandler!.fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public BasicMotionGesturesHandler getMotionGesturesHandler(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.motionGesturesHandler;
    
}


};

            

