
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/RectangleAdjustedAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RectangleAdjustedAnimation::RectangleAdjustedAnimation(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor){
this->width= width;
    
this->height= height;
    
this->offsetX= offsetX;
    
this->offsetY= offsetY;
    
this->setBasicColorP(basicColor);
    
}


    auto RectangleAdjustedAnimation::nextFrame() -> void{
}


    auto RectangleAdjustedAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics->drawRect(x +this->offsetX, y +this->offsetY, this->width, this->height);
    
}


    auto RectangleAdjustedAnimation::setWidth(int32_t width) -> void{
this->width= width;
    
}


    auto RectangleAdjustedAnimation::setHeight(int32_t height) -> void{
this->height= height;
    
}


    auto RectangleAdjustedAnimation::setOffsetX(int32_t offsetX) -> void{
this->offsetX= offsetX;
    
}


    auto RectangleAdjustedAnimation::setOffsetY(int32_t offsetY) -> void{
this->offsetY= offsetY;
    
}


    auto RectangleAdjustedAnimation::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Animation::getBasicColorP();;
    
}


    auto RectangleAdjustedAnimation::setBasicColorP(BasicColor* basicColor) -> void{
Animation::setBasicColorP(basicColor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEADJUSTEDANIMATION_CPP
