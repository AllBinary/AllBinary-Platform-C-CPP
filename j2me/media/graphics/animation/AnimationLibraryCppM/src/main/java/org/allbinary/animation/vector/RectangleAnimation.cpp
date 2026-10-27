
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/RectangleAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RectangleAnimation::RectangleAnimation(int32_t width, int32_t height, BasicColor* basicColor){
this->width= width;
    
this->height= height;
    
this->setBasicColorP(basicColor);
    
}


    auto RectangleAnimation::nextFrame() -> void{
}


    auto RectangleAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics->drawRect(x, y, this->width, this->height);
    
}


    auto RectangleAnimation::setWidth(int32_t width) -> void{
this->width= width;
    
}


    auto RectangleAnimation::setHeight(int32_t height) -> void{
this->height= height;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEANIMATION_CPP
