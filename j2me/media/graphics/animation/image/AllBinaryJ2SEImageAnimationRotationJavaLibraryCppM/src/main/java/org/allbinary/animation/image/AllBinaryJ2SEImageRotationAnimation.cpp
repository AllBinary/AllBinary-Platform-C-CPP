
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

class AllBinaryJ2SEImageRotationAnimation: public ImageBaseRotationAnimation {

    private: ImageRotationUtil* imageRotationUtil = ImageRotationUtil::getInstance();

    private: ImageModifierUtil* imageModifierUtil = ImageModifierUtil::getInstanceOrCreate();

    private: Image* realOriginalImage;

    private: const std::vector<Image*> originalImageArray = std::vector<Image*>(1);

    private: const std::vector<Image*> twoImages = std::vector<Image*>(2);

    private: Image* imageToShow;

    private: int32_t bufferedImageIndex= 0;

    private: float lastScaleX = 1.0;

    private: float lastScaleY = 1.0;

    private: float scaleX = 1.0;

    private: float scaleY = 1.0;

    private: float maxScaleX= 0.0;

    private: float maxScaleY= 0.0;

    private: ModifierBaseProcessor* alphaProcessor = ModifierBaseProcessor::getInstance();

    private: ModifierBaseProcessor* setColorProcessor = ModifierBaseProcessor::getInstance();

    private: ModifierBaseProcessor* changeColorProcessor = ModifierBaseProcessor::getInstance();

    private: ScaleBaseProcessor* scaleProcessor = ScaleProcessor::getInstance();

public: AllBinaryJ2SEImageRotationAnimation(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) : ImageBaseRotationAnimation(image, angleInfo, totalAngle, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->realOriginalImage= originalImage;
    
this->originalImageArray[0]= originalImage;
    
this->imageToShow= image;
    
this->twoImages[0]= image;
    
this->twoImages[1]= ImageCopyUtil::getInstance()->createImageForRotation(image);
    
}


    public: void setBasicColorP(BasicColor* basicColor){

    bool changed = false;;
    

                        if(this->getBasicColorP() == 
                                    nullptr
                                 || this->getBasicColorP()->intValue() != basicColor->intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->setColorProcessor= SetColorProcessor::getInstance();
    
this->updateImage();
    

                                    }
                                
}


    public: void changeBasicColor(BasicColor* basicColor){

    bool changed = false;;
    

                        if(this->getChangeBasicColor() == 
                                    nullptr
                                 || this->getChangeBasicColor()->intValue() != basicColor->intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.changeBasicColor(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->changeColorProcessor= ChangeColorProcessor::getInstance();
    
this->updateImage();
    

                                    }
                                
}


    public: void setAlpha(int32_t alpha){

    bool changed = false;;
    

                        if(this->alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setAlpha(alpha);
    

                        if(changed)
                        
                                    {
                                    this->alphaProcessor= AlphaProcessor::getInstance();
    
this->updateImage();
    

                                    }
                                
}


    public: void setScale(float scaleX, float scaleY){
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


    public: void setMaxScale(float maxScaleX, float maxScaleY){
this->maxScaleX= maxScaleX;
    
this->maxScaleY= maxScaleY;
    
this->scaleProcessor->update(this->realOriginalImage, this->originalImageArray, this->twoImages, this->bufferedImageIndex, this->scaleX, this->scaleY, this->maxScaleX, this->maxScaleY);
    
this->updateImage();
    
}


    public: void nextRotation(){
super.nextRotation();
    
this->updateImage();
    
}


    public: void previousRotation(){
super.previousRotation();
    
this->updateImage();
    
}


    private: void updateImage(){
this->imageRotationUtil->rotateImage(this->originalImageArray[0], this->twoImages[this->bufferedImageIndex], this->angleInfo.getAngle() +90);
    
this->alphaProcessor->updateAlpha(this->imageModifierUtil, NullImage::NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->alphaP);
    
this->setColorProcessor->updateColor(this->imageModifierUtil, NullImage::NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->basicColor);
    
this->changeColorProcessor->updateColor(this->imageModifierUtil, NullImage::NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->changeBasicColorP);
    
this->swap();
    
}


    public: void setFrame(int32_t index){
super.setFrame(index);
    
this->updateImage();
    
}


    public: void swap(){
this->imageToShow= this->twoImages[this->bufferedImageIndex];
    

                        if(this->bufferedImageIndex == 0)
                        
                                    {
                                    this->bufferedImageIndex= 1;
    

                                    }
                                
                        else {
                            this->bufferedImageIndex= 0;
    

                        }
                            
}


    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
graphics->drawImage(this->imageToShow, x, y, this->anchor);
    
}


    public: void close(){
super.close();
    

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
            
    protected: void finalize(){
super.finalize();
    

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


};

            

