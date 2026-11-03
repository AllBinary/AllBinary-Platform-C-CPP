
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/AllMotionRecognizer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/graphics/GPointCircularPool.h>

      
#include <org/allbinary/input/motion/button/TouchButtonRecognizer.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/MotionRecognizer.h"

auto AllMotionRecognizer::pointCircularPool_owner() -> GPointCircularPool* { static std::unique_ptr<GPointCircularPool> value(new GPointCircularPool(40)); return value.get(); }
GPointCircularPool* AllMotionRecognizer::pointCircularPool = AllMotionRecognizer::pointCircularPool_owner();

AllMotionRecognizer::AllMotionRecognizer() : logUtil(LogUtil::getInstance()){
this->id= AllMotionRecognizer::index++;
    
this->motionGestureRecognizer= new MotionGestureRecognizer(this->id);
    
this->touchButtonRecognizer= new TouchButtonRecognizer();
    
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

                        if(this->touchButtonRecognizer->pressTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    this->touchButtonProcessing= true;
    

                                    }
                                

                        if(!this->touchButtonProcessing)
                        
                                    {
                                    
    CustomGPoint* point = dynamic_cast<CustomGPoint*>(AllMotionRecognizer::pointCircularPool->getNextInstance());;
    
point->setX(x);
    
point->setY(y);
    
this->motionGestureRecognizer->processPressedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

                        if(this->touchButtonRecognizer->releaseTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    
                                    }
                                

                        if(!this->touchButtonProcessing)
                        
                                    {
                                    
    CustomGPoint* point = dynamic_cast<CustomGPoint*>(AllMotionRecognizer::pointCircularPool->getNextInstance());;
    
point->setX(x);
    
point->setY(y);
    
this->motionGestureRecognizer->processReleasedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                

                        if(this->touchButtonProcessing)
                        
                                    {
                                    this->touchButtonProcessing= false;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

                        if(this->touchButtonProcessing)
                        
                                    {
                                    this->touchButtonRecognizer->pressTouchButtonInput(x, y, deviceId);
    

                                    }
                                

                        if(!this->touchButtonProcessing)
                        
                                    {
                                    
    CustomGPoint* point = dynamic_cast<CustomGPoint*>(AllMotionRecognizer::pointCircularPool->getNextInstance());;
    
point->setX(x);
    
point->setY(y);
    
this->motionGestureRecognizer->processDraggedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processMovedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

                        if(x != this->lastX || y != this->lastY)
                        
                                    {
                                    this->lastX= x;
    
this->lastY= y;
    

    CustomGPoint* point = dynamic_cast<CustomGPoint*>(AllMotionRecognizer::pointCircularPool->getNextInstance());;
    
point->setX(x);
    
point->setY(y);
    
this->motionGestureRecognizer->processMovedMotionEvent(point, deviceId, modifiers);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processScrolledMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

    CustomGPoint* point = dynamic_cast<CustomGPoint*>(AllMotionRecognizer::pointCircularPool->getNextInstance());;
    
point->setX(x);
    
point->setY(y);
    
this->motionGestureRecognizer->processScrolledMotionEvent(point, deviceId, modifiers);
    
}


    auto AllMotionRecognizer::getMotionGestureRecognizer() -> MotionGestureRecognizer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->motionGestureRecognizer;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_CPP
