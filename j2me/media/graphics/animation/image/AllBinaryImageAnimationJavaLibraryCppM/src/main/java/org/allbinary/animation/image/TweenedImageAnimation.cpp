
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_TWEENEDIMAGEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_TWEENEDIMAGEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/TweenedImageAnimation.h"
        

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

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TweenedImageAnimation::TweenedImageAnimation(Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior), anchor(Anchor::TOP_LEFT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->image= image;
    
this->dx= dx;
    
this->dy= dy;
    
this->totalFrames= totalFrames;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->totalFrames);
    
}


                //@Throws(Exception.constructor)
            
    auto TweenedImageAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSize();;
    
}


    auto TweenedImageAnimation::nextFrame() -> void{
this->circularIndexUtil->next();
    
}


    auto TweenedImageAnimation::previousFrame() -> void{
this->circularIndexUtil->previous();
    
}


    auto TweenedImageAnimation::setFrame(int32_t index) -> void{
this->circularIndexUtil->setIndex(index);
    
}


    auto TweenedImageAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->circularIndexUtil->getIndex();;
    
}


    auto TweenedImageAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalFrames;
    
}


    auto TweenedImageAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto TweenedImageAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto TweenedImageAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{

    int32_t frame = this->getFrame();;
    

    int32_t currentX = this->dx *frame;;
    

    int32_t currentY = this->dy *frame;;
    
graphics->drawImage(this->image, x +currentX, y +currentY, this->anchor);
    
}


    auto TweenedImageAnimation::close() -> void{
DisposalUtil::getInstance()->disposeImage(this->image);
    
}


                //@Throws(Throwable.constructor)
            
    auto TweenedImageAnimation::finalize() -> void{
DisposalUtil::getInstance()->disposeImage(this->image);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_TWEENEDIMAGEANIMATION_CPP
