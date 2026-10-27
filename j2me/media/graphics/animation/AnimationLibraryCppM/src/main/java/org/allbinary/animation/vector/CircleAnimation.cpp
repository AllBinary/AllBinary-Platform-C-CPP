
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/CircleAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CircleAnimation::CircleAnimation(int32_t width, int32_t height, BasicColor* basicColor) : TOTAL_ANGLE(static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE)){
this->width= width;
    
this->height= height;
    
this->setBasicColorP(basicColor);
    
}


    auto CircleAnimation::nextFrame() -> void{
}


    auto CircleAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics->drawArc(x, y, this->width, this->height, 0, this->TOTAL_ANGLE);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEANIMATION_CPP
