
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEBASEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEBASEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AdjustedImageBaseRotationAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"


AdjustedImageBaseRotationAnimation::AdjustedImageBaseRotationAnimation(Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) : ImageBaseRotationAnimation(image, angleInfo, totalAngle, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init(dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    auto AdjustedImageBaseRotationAnimation::init(int32_t dx, int32_t dy) -> void{
this->dx= dx;
    
this->dy= dy;
    
}


    auto AdjustedImageBaseRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
ImageBaseRotationAnimation::paintXY(graphics, x +this->dx, y +this->dy);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEBASEROTATIONANIMATION_CPP
