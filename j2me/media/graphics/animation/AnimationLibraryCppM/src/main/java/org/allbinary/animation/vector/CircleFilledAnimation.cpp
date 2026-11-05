
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEFILLEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEFILLEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/CircleFilledAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CircleFilledAnimation::CircleFilledAnimation(int32_t width, int32_t height, BasicColor* basicColor) : Animation(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->width= width;
    
this->height= height;
    
this->setBasicColorP(basicColor);
    
}


    auto CircleFilledAnimation::nextFrame() -> void{
}


    auto CircleFilledAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics->fillRect(x, y, this->width, this->height);
    
}


    auto CircleFilledAnimation::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Animation::getBasicColorP();;
    
}


    auto CircleFilledAnimation::setBasicColorP(BasicColor* basicColor) -> void{
Animation::setBasicColorP(basicColor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_CIRCLEFILLEDANIMATION_CPP
