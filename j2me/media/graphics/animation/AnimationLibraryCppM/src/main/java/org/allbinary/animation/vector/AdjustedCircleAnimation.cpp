
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/AdjustedCircleAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/vector/CircleAnimation.h"


    auto AdjustedCircleAnimation::createAnimation(int32_t width, int32_t height, int32_t xAdjustment, int32_t yAdjustment, BasicColor* basicColor) -> AdjustedCircleAnimation*{

    AdjustedCircleAnimation* adjustedCircleAnimation = new AdjustedCircleAnimation(width, height, basicColor);;
    
adjustedCircleAnimation->initXY(xAdjustment, yAdjustment);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return adjustedCircleAnimation;
    
}


    auto AdjustedCircleAnimation::createW(int32_t width, int32_t height, int32_t innerWidth, BasicColor* basicColor) -> AdjustedCircleAnimation*{

    AdjustedCircleAnimation* adjustedCircleAnimation = new AdjustedCircleAnimation(width, height, basicColor);;
    
adjustedCircleAnimation->init(innerWidth);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return adjustedCircleAnimation;
    
}


AdjustedCircleAnimation::AdjustedCircleAnimation(int32_t width, int32_t height, BasicColor* basicColor) : CircleAnimation(width, height, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto AdjustedCircleAnimation::initXY(int32_t xAdjustment, int32_t yAdjustment) -> void{
this->xAdjustment= xAdjustment;
    
this->yAdjustment= yAdjustment;
    
}


    auto AdjustedCircleAnimation::init(int32_t innerWidth) -> void{

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    
    int32_t widthPortion = (((innerWidth /3) *10) /7);;
    
this->xAdjustment=  -((this->width>>1) -widthPortion);
    
this->yAdjustment= this->xAdjustment;
    

                                    }
                                
                        else {
                            this->xAdjustment=  -((this->width>>1) -innerWidth);
    
this->yAdjustment= this->xAdjustment;
    

                        }
                            
}


    auto AdjustedCircleAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics->drawArc(x +this->xAdjustment, y +this->yAdjustment, this->width, this->height, 0, this->TOTAL_ANGLE);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_CPP
