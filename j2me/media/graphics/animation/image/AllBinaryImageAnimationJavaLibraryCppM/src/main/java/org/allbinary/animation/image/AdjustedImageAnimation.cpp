
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AdjustedImageAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageAnimation.h"


AdjustedImageAnimation::AdjustedImageAnimation(Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) : ImageAnimation(image, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init(dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    auto AdjustedImageAnimation::init(int32_t dx, int32_t dy) -> void{
this->setDx(dx);
    
this->setDy(dy);
    
}


    auto AdjustedImageAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
ImageAnimation::paintXY(graphics, x +this->dx, y +this->dy);
    
}


    auto AdjustedImageAnimation::setDx(int32_t dx) -> void{
this->dx= dx;
    
}


    auto AdjustedImageAnimation::getDx() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->dx;
    
}


    auto AdjustedImageAnimation::setDy(int32_t dy) -> void{
this->dy= dy;
    
}


    auto AdjustedImageAnimation::getDy() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->dy;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEANIMATION_CPP
