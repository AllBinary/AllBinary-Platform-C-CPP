
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
//TWB - Adjustments should be done in the resource creation and not at the animation level

                //@Throws(Exception.constructor)
            
    auto AdjustedImageArrayRotationAnimation::createAdjustedImageArrayRotationAnimationInfo(Object* anyType, AnimationBehavior* animationBehavior) -> AdjustedImageArrayRotationAnimation*{

    ImageArrayRotationAnimationInfo* imageRotationAnimationInfo = dynamic_cast<ImageArrayRotationAnimationInfo*>(anyType);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AdjustedImageArrayRotationAnimation(imageRotationAnimationInfo->getImageArray(), imageRotationAnimationInfo->getAngleInfoP(), imageRotationAnimationInfo->getTotalAngle(), imageRotationAnimationInfo->getDx(), imageRotationAnimationInfo->getDy(), animationBehavior);
    
}


                //@Throws(Exception.constructor)
            
    auto AdjustedImageArrayRotationAnimation::createAnimation(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior) -> AdjustedImageArrayRotationAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AdjustedImageArrayRotationAnimation(imageArray, angleInfo, totalAngle,  -(imageArray[0]->getWidth()>>2),  -(imageArray[0]->getHeight()>>2), animationBehavior);
    
}


AdjustedImageArrayRotationAnimation::AdjustedImageArrayRotationAnimation(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) : ImageArrayRotationAnimation(imageArray, angleInfo, totalAngle, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init(dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    auto AdjustedImageArrayRotationAnimation::init(int32_t dx, int32_t dy) -> void{
this->setDx(dx);
    
this->setDy(dy);
    
}


    auto AdjustedImageArrayRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
ImageArrayRotationAnimation::paintXY(graphics, x +this->dx, y +this->dy);
    
}


    auto AdjustedImageArrayRotationAnimation::setDx(int32_t dx) -> void{
this->dx= dx;
    
}


    auto AdjustedImageArrayRotationAnimation::getDx() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->dx;
    
}


    auto AdjustedImageArrayRotationAnimation::setDy(int32_t dy) -> void{
this->dy= dy;
    
}


    auto AdjustedImageArrayRotationAnimation::getDy() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->dy;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_CPP
