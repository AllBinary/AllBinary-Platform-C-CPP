
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/graphics/GPointCircularPool.h>

      
#include <org/allbinary/input/motion/button/TouchButtonRecognizer.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRecognizer.h"

class AllMotionRecognizer: public MotionRecognizer {

    private: static int32_t index = 0;

    private: static const GPointCircularPool pointCircularPool = GPointCircularPool(40);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: MotionGestureRecognizer motionGestureRecognizer;

    private: bool touchButtonProcessing = false;

    private: TouchButtonRecognizer touchButtonRecognizer;

    private: int32_t id;

public: AllMotionRecognizer(){
this->id= AllMotionRecognizer::index++;
    
this->motionGestureRecognizer= MotionGestureRecognizer(this->id);
    
this->touchButtonRecognizer= TouchButtonRecognizer();
    
}


                //@Throws(Exception.constructor)
            
    public: void processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this->touchButtonRecognizer.pressTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    this->touchButtonProcessing= true;
    

                                    }
                                

                        if(!this->touchButtonProcessing)
                        
                                    {
                                    
    CustomGPoint point = AllMotionRecognizer::pointCircularPool.getNextInstance();;
    
point.setX(x);
    
point.setY(y);
    
this->motionGestureRecognizer.processPressedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this->touchButtonRecognizer.releaseTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    
                                    }
                                

                        if(!this->touchButtonProcessing)
                        
                                    {
                                    
    CustomGPoint point = AllMotionRecognizer::pointCircularPool.getNextInstance();;
    
point.setX(x);
    
point.setY(y);
    
this->motionGestureRecognizer.processReleasedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                

                        if(this->touchButtonProcessing)
                        
                                    {
                                    this->touchButtonProcessing= false;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this->touchButtonProcessing)
                        
                                    {
                                    this->touchButtonRecognizer.pressTouchButtonInput(x, y, deviceId);
    

                                    }
                                

                        if(!this->touchButtonProcessing)
                        
                                    {
                                    
    CustomGPoint point = AllMotionRecognizer::pointCircularPool.getNextInstance();;
    
point.setX(x);
    
point.setY(y);
    
this->motionGestureRecognizer.processDraggedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


    private: int32_t lastX= 0;

    private: int32_t lastY= 0;

                //@Throws(Exception.constructor)
            
    public: void processMovedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(x != this->lastX || y != this->lastY)
                        
                                    {
                                    this->lastX= x;
    
this->lastY= y;
    

    CustomGPoint point = AllMotionRecognizer::pointCircularPool.getNextInstance();;
    
point.setX(x);
    
point.setY(y);
    
this->motionGestureRecognizer.processMovedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void processScrolledMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

    CustomGPoint point = AllMotionRecognizer::pointCircularPool.getNextInstance();;
    
point.setX(x);
    
point.setY(y);
    
this->motionGestureRecognizer.processScrolledMotionEvent(point, deviceId, modifiers);
    
}


    public: MotionGestureRecognizer getMotionGestureRecognizer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionGestureRecognizer;
    
}


};

            

