
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArrayBaseRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/DisposalUtil.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageArrayBaseRotationAnimation::ImageArrayBaseRotationAnimation(std::vector<Image*> originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) : RotationAnimation(angleInfo, CircularIndexUtil::createInstance(360 /angleInfo->getAngleIncrementInfo()->getAngleIncrement()), animationBehavior), imageModifierUtil(ImageModifierUtil::getInstanceOrCreate()), imageArray(NullImage::NULL_IMAGE_ARRAY), anchor(Anchor::TOP_LEFT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->originalImageArray= originalImageArray;
    
this->setImageArray(this->imageModifierUtil->getImageArray(originalImageArray));
    
this->currentImage= this->imageArray[this->circularIndexUtil->getIndex()];
    
}


                //@Throws(Exception.constructor)
            
    auto ImageArrayBaseRotationAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSize();;
    
}


    auto ImageArrayBaseRotationAnimation::setAlpha(int32_t alpha) -> void{

                        if(this->alphaP != alpha)
                        
                                    {
                                    RotationAnimation::setAlpha(alpha);
    
this->imageModifierUtil->reset();
    

    int32_t index = this->circularIndexUtil->getIndex();;
    
this->imageModifierUtil->setAlpha(this->originalImageArray[index], this->imageArray[index], index, this->alphaP);
    

                                    }
                                
}


    auto ImageArrayBaseRotationAnimation::nextRotation() -> void{
RotationAnimation::nextRotation();
    

    int32_t index = this->circularIndexUtil->getIndex();;
    
this->imageModifierUtil->setAlpha(this->originalImageArray[index], this->imageArray[index], index, this->alphaP);
    
this->currentImage= this->imageArray[index];
    
}


    auto ImageArrayBaseRotationAnimation::previousRotation() -> void{
RotationAnimation::previousRotation();
    

    int32_t index = this->circularIndexUtil->getIndex();;
    
this->imageModifierUtil->setAlpha(this->originalImageArray[index], this->imageArray[index], index, this->alphaP);
    
this->currentImage= this->imageArray[index];
    
}


    auto ImageArrayBaseRotationAnimation::setFrame(int32_t index2) -> void{
RotationAnimation::setFrame(index2);
    

    int32_t index = this->circularIndexUtil->getIndex();;
    
this->imageModifierUtil->setAlpha(this->originalImageArray[index], this->imageArray[index], index, this->alphaP);
    
this->currentImage= this->imageArray[index];
    
}


    auto ImageArrayBaseRotationAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto ImageArrayBaseRotationAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto ImageArrayBaseRotationAnimation::setImageArray(std::vector<Image*> imageArray) -> void{
this->imageArray= imageArray;
    
this->totalFrames= imageArray.size();
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->totalFrames);
    
}


    auto ImageArrayBaseRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
graphics->drawImage(this->currentImage, x, y, this->anchor);
    
}


    auto ImageArrayBaseRotationAnimation::close() -> void{

    DisposalUtil* disposalUtil = DisposalUtil::getInstance();;
    

    int32_t size2 = this->imageArray.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
disposalUtil->disposeImage(this->imageArray[index]);
    
}


    int32_t size = this->originalImageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
disposalUtil->disposeImage(this->originalImageArray[index]);
    
}

disposalUtil->disposeImage(this->currentImage);
    
}


                //@Throws(Throwable.constructor)
            
    auto ImageArrayBaseRotationAnimation::finalize() -> void{

    DisposalUtil* disposalUtil = DisposalUtil::getInstance();;
    

    int32_t size2 = this->imageArray.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
disposalUtil->disposeImage(this->imageArray[index]);
    
}


    int32_t size = this->originalImageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
disposalUtil->disposeImage(this->originalImageArray[index]);
    
}

disposalUtil->disposeImage(this->currentImage);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_CPP
