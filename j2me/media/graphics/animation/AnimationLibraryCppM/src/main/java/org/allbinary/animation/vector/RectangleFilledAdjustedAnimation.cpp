
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/vector/RectangleFilledAnimation.h"


RectangleFilledAdjustedAnimation::RectangleFilledAdjustedAnimation(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) : RectangleFilledAnimation(width, height, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->offsetX= offsetX;
    
this->offsetY= offsetY;
    
this->setBasicColorP(basicColor);
    
}


    auto RectangleFilledAdjustedAnimation::nextFrame() -> void{
}


    auto RectangleFilledAdjustedAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
RectangleFilledAnimation::paintXY(graphics, x +this->offsetX, y +this->offsetY);
    
}


    auto RectangleFilledAdjustedAnimation::setOffsetX(int32_t offsetX) -> void{
this->offsetX= offsetX;
    
}


    auto RectangleFilledAdjustedAnimation::setOffsetY(int32_t offsetY) -> void{
this->offsetY= offsetY;
    
}


    auto RectangleFilledAdjustedAnimation::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RectangleFilledAnimation::getBasicColorP();;
    
}


    auto RectangleFilledAdjustedAnimation::setBasicColorP(BasicColor* basicColor) -> void{
RectangleFilledAnimation::setBasicColorP(basicColor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_RECTANGLEFILLEDADJUSTEDANIMATION_CPP
