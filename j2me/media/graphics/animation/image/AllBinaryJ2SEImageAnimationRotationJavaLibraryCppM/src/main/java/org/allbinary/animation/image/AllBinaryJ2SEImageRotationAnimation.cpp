
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AllBinaryJ2SEImageRotationAnimation.h"
        

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

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
#include <org/allbinary/media/image/ImageRotationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
#include "org/allbinary/animation/image/ModifierBaseProcessor.h"
#include "org/allbinary/animation/image/ScaleProcessor.h"
#include "org/allbinary/animation/image/ScaleBaseProcessor.h"
#include "org/allbinary/animation/image/SetColorProcessor.h"
#include "org/allbinary/animation/image/ChangeColorProcessor.h"
#include "org/allbinary/animation/image/AlphaProcessor.h"


AllBinaryJ2SEImageRotationAnimation::AllBinaryJ2SEImageRotationAnimation(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) : ImageBaseRotationAnimation(image, angleInfo, totalAngle, animationBehavior), imageRotationUtil(ImageRotationUtil::getInstance()), imageModifierUtil(ImageModifierUtil::getInstanceOrCreate()), originalImageArray(std::vector<Image*>(1)), twoImages(std::vector<Image*>(2)), alphaProcessor(ModifierBaseProcessor::getInstance()), setColorProcessor(ModifierBaseProcessor::getInstance()), changeColorProcessor(ModifierBaseProcessor::getInstance()), scaleProcessor(ScaleProcessor::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->realOriginalImage= originalImage;
    
this->originalImageArray[0]= originalImage;
    
this->imageToShow= image;
    
this->twoImages[0]= image;
    
this->twoImages[1]= ImageCopyUtil::getInstance()->createImageForRotation(image);
    
}


    auto AllBinaryJ2SEImageRotationAnimation::setBasicColorP(BasicColor* basicColor) -> void{

    bool changed = false;;
    

                        if(this->getBasicColorP() == 
                                    nullptr
                                 || JavaBoxes::value<int32_t>(this->getBasicColorP()) != basicColor->intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
ImageBaseRotationAnimation::setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->setColorProcessor= SetColorProcessor::getInstance();
    
this->updateImage();
    

                                    }
                                
}


    auto AllBinaryJ2SEImageRotationAnimation::changeBasicColor(BasicColor* basicColor) -> void{

    bool changed = false;;
    

                        if(this->getChangeBasicColor() == 
                                    nullptr
                                 || JavaBoxes::value<int32_t>(this->getChangeBasicColor()) != basicColor->intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
ImageBaseRotationAnimation::changeBasicColor(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->changeColorProcessor= ChangeColorProcessor::getInstance();
    
this->updateImage();
    

                                    }
                                
}


    auto AllBinaryJ2SEImageRotationAnimation::setAlpha(int32_t alpha) -> void{

    bool changed = false;;
    

                        if(this->alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
ImageBaseRotationAnimation::setAlpha(alpha);
    

                        if(changed)
                        
                                    {
                                    this->alphaProcessor= AlphaProcessor::getInstance();
    
this->updateImage();
    

                                    }
                                
}


    auto AllBinaryJ2SEImageRotationAnimation::setScale(float scaleX, float scaleY) -> void{
this->scaleX= scaleX;
    
this->scaleY= scaleY;
    

                        if(this->scaleX != this->lastScaleX || this->scaleY != this->lastScaleY)
                        
                                    {
                                    this->scaleProcessor->update(this->realOriginalImage, this->originalImageArray, this->twoImages, this->bufferedImageIndex, this->scaleX, this->scaleY, this->maxScaleX, this->maxScaleY);
    
this->updateImage();
    

                                    }
                                
this->lastScaleX= this->scaleX;
    
this->lastScaleY= this->scaleY;
    
}


    auto AllBinaryJ2SEImageRotationAnimation::setMaxScale(float maxScaleX, float maxScaleY) -> void{
this->maxScaleX= maxScaleX;
    
this->maxScaleY= maxScaleY;
    
this->scaleProcessor->update(this->realOriginalImage, this->originalImageArray, this->twoImages, this->bufferedImageIndex, this->scaleX, this->scaleY, this->maxScaleX, this->maxScaleY);
    
this->updateImage();
    
}


    auto AllBinaryJ2SEImageRotationAnimation::nextRotation() -> void{
ImageBaseRotationAnimation::nextRotation();
    
this->updateImage();
    
}


    auto AllBinaryJ2SEImageRotationAnimation::previousRotation() -> void{
ImageBaseRotationAnimation::previousRotation();
    
this->updateImage();
    
}


    auto AllBinaryJ2SEImageRotationAnimation::updateImage() -> void{
this->imageRotationUtil->rotateImage(this->originalImageArray[0], this->twoImages[this->bufferedImageIndex], this->angleInfo->getAngle() +90);
    
this->alphaProcessor->updateAlpha(this->imageModifierUtil, NullImage::NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->alphaP);
    
this->setColorProcessor->updateColor(this->imageModifierUtil, NullImage::NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->basicColor);
    
this->changeColorProcessor->updateColor(this->imageModifierUtil, NullImage::NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->changeBasicColorP);
    
this->swap();
    
}


    auto AllBinaryJ2SEImageRotationAnimation::setFrame(int32_t index) -> void{
ImageBaseRotationAnimation::setFrame(index);
    
this->updateImage();
    
}


    auto AllBinaryJ2SEImageRotationAnimation::swap() -> void{
this->imageToShow= this->twoImages[this->bufferedImageIndex];
    

                        if(this->bufferedImageIndex == 0)
                        
                                    {
                                    this->bufferedImageIndex= 1;
    

                                    }
                                
                        else {
                            this->bufferedImageIndex= 0;
    

                        }
                            
}


    auto AllBinaryJ2SEImageRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
graphics->drawImage(this->imageToShow, x, y, this->anchor);
    
}


    auto AllBinaryJ2SEImageRotationAnimation::close() -> void{
ImageBaseRotationAnimation::close();
    

    DisposalUtil* disposalUtil = DisposalUtil::getInstance();;
    

    int32_t size2 = this->twoImages.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
disposalUtil->disposeImage(this->twoImages[index]);
    
}


    int32_t size = this->originalImageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
disposalUtil->disposeImage(this->originalImageArray[index]);
    
}

disposalUtil->disposeImage(this->realOriginalImage);
    
disposalUtil->disposeImage(this->imageToShow);
    
}


                //@Throws(Throwable.constructor)
            
    auto AllBinaryJ2SEImageRotationAnimation::finalize() -> void{
ImageBaseRotationAnimation::finalize();
    

    DisposalUtil* disposalUtil = DisposalUtil::getInstance();;
    

    int32_t size2 = this->twoImages.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
disposalUtil->disposeImage(this->twoImages[index]);
    
}


    int32_t size = this->originalImageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
disposalUtil->disposeImage(this->originalImageArray[index]);
    
}

disposalUtil->disposeImage(this->realOriginalImage);
    
disposalUtil->disposeImage(this->imageToShow);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_CPP
