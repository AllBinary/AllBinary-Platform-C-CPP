
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYNOFLICKERANDROIDIMAGEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYNOFLICKERANDROIDIMAGEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AllBinaryNoFlickerAndroidImageRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <android/graphics/Matrix.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/image/AndroidImageUtil.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"


AllBinaryNoFlickerAndroidImageRotationAnimation::AllBinaryNoFlickerAndroidImageRotationAnimation(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) : ImageBaseRotationAnimation(image, angleInfo, totalAngle, animationBehavior), imageModifierUtil(ImageModifierUtil::getInstanceOrCreate()), androidImageUtil(AndroidImageUtil::getInstance()), matrix(new Matrix()), twoImages(std::vector<Image*>(2)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->originalImage= originalImage;
    
this->halfWidth= (image->getWidth()>>1);
    
this->halfHeight= (image->getHeight()>>1);
    
this->increment= (this->angleInfo->getAngleIncrementInfo()->getAngleIncrement());
    
this->imageToShow= image;
    
this->twoImages[0]= image;
    
this->twoImages[1]= ImageCopyUtil::getInstance()->createImage(image);
    
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::setBasicColorP(BasicColor* basicColor) -> void{

    bool changed = false;;
    

                        if(this->getBasicColorP() == 
                                    nullptr
                                 || JavaBoxes::value<int32_t>(this->getBasicColorP()) != basicColor->intValue())
                        
                                    {
                                    this->imageModifierUtil->setColor(this->originalImage, this->imageToShow, 0, basicColor);
    
changed= true;
    

                                    }
                                
ImageBaseRotationAnimation::setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->matrix->setRotate(0.0, this->halfWidth, this->halfHeight);
    
this->updateImage();
    

                                    }
                                
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::changeBasicColor(BasicColor* basicColor) -> void{
this->setBasicColorP(basicColor);
    
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::setAlpha(int32_t alpha) -> void{

    bool changed = false;;
    

                        if(this->alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
ImageBaseRotationAnimation::setAlpha(alpha);
    
this->imageModifierUtil->setAlpha(this->originalImage, this->imageToShow, 0, this->alphaP);
    

                        if(changed)
                        
                                    {
                                    this->matrix->setRotate(0.0, this->halfWidth, this->halfHeight);
    
this->updateImage();
    

                                    }
                                
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::nextRotation() -> void{
ImageBaseRotationAnimation::nextRotation();
    
this->matrix->setRotate(this->increment, this->halfWidth, this->halfHeight);
    
this->updateImage();
    
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::previousRotation() -> void{
ImageBaseRotationAnimation::previousRotation();
    
this->matrix->setRotate( -this->increment, this->halfWidth, this->halfHeight);
    
this->updateImage();
    
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::updateImage() -> void{
this->androidImageUtil->rotate(this->twoImages[this->bufferedImageIndex], originalImage, matrix, imageModifierUtil->paint);
    
this->swap();
    
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::setFrame(int32_t index) -> void{

    int32_t currentFrame = this->circularIndexUtil->getIndex();;
    
this->circularIndexUtil->setIndex(index);
    

    int32_t newFrame = this->circularIndexUtil->getIndex();;
    
this->angleInfo->adjustAngle(newFrame);
    
this->matrix->setRotate((newFrame -currentFrame) *this->increment, this->halfWidth, this->halfHeight);
    
this->updateImage();
    
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::swap() -> void{
this->imageToShow= this->twoImages[this->bufferedImageIndex];
    

                        if(this->bufferedImageIndex == 0)
                        
                                    {
                                    this->bufferedImageIndex= 1;
    

                                    }
                                
                        else {
                            this->bufferedImageIndex= 0;
    

                        }
                            
}


    auto AllBinaryNoFlickerAndroidImageRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
graphics->drawImage(this->imageToShow, x, y, this->anchor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYNOFLICKERANDROIDIMAGEROTATIONANIMATION_CPP
