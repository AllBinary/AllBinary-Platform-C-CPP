
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/GestureOnlyMotionRecognizer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/graphics/GPointCircularPool.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/MotionRecognizer.h"

auto GestureOnlyMotionRecognizer::pointCircularPool_owner() -> GPointCircularPool* { static std::unique_ptr<GPointCircularPool> value(new GPointCircularPool(40)); return value.get(); }
GPointCircularPool* GestureOnlyMotionRecognizer::pointCircularPool = GestureOnlyMotionRecognizer::pointCircularPool_owner();

GestureOnlyMotionRecognizer::GestureOnlyMotionRecognizer(){
this->id= GestureOnlyMotionRecognizer::index++;
    
this->motionGestureRecognizer= new MotionGestureRecognizer(this->id);
    
}


                //@Throws(Exception.constructor)
            
    auto GestureOnlyMotionRecognizer::processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

    CustomGPoint* point = dynamic_cast<CustomGPoint*>(GestureOnlyMotionRecognizer::pointCircularPool->getNextInstance());;
    
point->setX(x);
    
point->setY(y);
    
this->motionGestureRecognizer->processPressedMotionEvent(point, deviceId, modifiers);
    
}


                //@Throws(Exception.constructor)
            
    auto GestureOnlyMotionRecognizer::processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

    CustomGPoint* point = dynamic_cast<CustomGPoint*>(GestureOnlyMotionRecognizer::pointCircularPool->getNextInstance());;
    
point->setX(x);
    
point->setY(y);
    
this->motionGestureRecognizer->processReleasedMotionEvent(point, deviceId, modifiers);
    
}


                //@Throws(Exception.constructor)
            
    auto GestureOnlyMotionRecognizer::processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

    CustomGPoint* point = dynamic_cast<CustomGPoint*>(GestureOnlyMotionRecognizer::pointCircularPool->getNextInstance());;
    
point->setX(x);
    
point->setY(y);
    
this->motionGestureRecognizer->processDraggedMotionEvent(point, deviceId, modifiers);
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_CPP
