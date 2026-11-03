
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEBASEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEBASEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/DisposalUtil.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageBaseRotationAnimation::ImageBaseRotationAnimation(Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) : RotationAnimation(angleInfo, CircularIndexUtil::createInstance(totalAngle /angleInfo->getAngleIncrementInfo()->getAngleIncrement()), animationBehavior), anchor(Anchor::TOP_LEFT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->image= image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageBaseRotationAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSize();;
    
}


    auto ImageBaseRotationAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto ImageBaseRotationAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto ImageBaseRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
graphics->drawImage(this->image, x, y, this->anchor);
    
}


    auto ImageBaseRotationAnimation::getImage() -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->image;
    
}


    auto ImageBaseRotationAnimation::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->image->getWidth();;
    
}


    auto ImageBaseRotationAnimation::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->image->getHeight();;
    
}


    auto ImageBaseRotationAnimation::close() -> void{
DisposalUtil::getInstance()->disposeImage(this->image);
    
}


                //@Throws(Throwable.constructor)
            
    auto ImageBaseRotationAnimation::finalize() -> void{
DisposalUtil::getInstance()->disposeImage(this->image);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEBASEROTATIONANIMATION_CPP
