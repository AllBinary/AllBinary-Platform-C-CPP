
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AllBinaryHTMLImageRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
#include <org/allbinary/media/image/ImageRotationUtil.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/core/PlayN.h>

      
#include <playn/html/HtmlGraphics.h>

      
#include <playn/html/HtmlImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
#include "org/allbinary/animation/image/AlphaBaseProcessor.h"
#include "org/allbinary/animation/image/AlphaProcessor.h"


AllBinaryHTMLImageRotationAnimation::AllBinaryHTMLImageRotationAnimation(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) : ImageBaseRotationAnimation(image, angleInfo, totalAngle, animationBehavior), imageRotationUtil(ImageRotationUtil::getInstance()), imageModifierUtil(ImageModifierUtil::getInstanceOrCreate()), twoImages(std::vector<Image*>(2)), canvasSurfaceArray(std::vector<Canvas*>(2)), alphaProcessor(AlphaBaseProcessor::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->originalImage= originalImage;
    
this->imageToShow= image;
    
this->twoImages[0]= image;
    
this->twoImages[1]= ImageCopyUtil::getInstance()->createImage(image);
    
this->canvasSurfaceArray[0]= this->getCanvasSurface(this->twoImages[0]);
    
this->canvasSurfaceArray[1]= this->getCanvasSurface(this->twoImages[1]);
    
}


    auto AllBinaryHTMLImageRotationAnimation::getCanvasSurface(Image* image) -> Canvas*{

    PlaynMutableImage* htmlImage = dynamic_cast<PlaynMutableImage*>(image);;
    

    ImageImpl* canvasImage = dynamic_cast<ImageImpl*>(htmlImage->getImage());;
    

    PlayN* playN = PlayN::getInstance();;
    

    HtmlGraphics* htmlGraphics = dynamic_cast<HtmlGraphics*>(playN->graphics());;
    

    Canvas* canvas = htmlGraphics->get(dynamic_cast<HtmlImage*>(canvasImage));;
    
canvas->translate(this->originalImage->getWidth() /2, this->originalImage->getHeight() /2);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return canvas;
    
}


    auto AllBinaryHTMLImageRotationAnimation::setBasicColorP(BasicColor* basicColor) -> void{

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
                                    this->updateImage();
    

                                    }
                                
}


    auto AllBinaryHTMLImageRotationAnimation::setAlpha(int32_t alpha) -> void{

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


    auto AllBinaryHTMLImageRotationAnimation::nextRotation() -> void{
ImageBaseRotationAnimation::nextRotation();
    
this->updateImage();
    
}


    auto AllBinaryHTMLImageRotationAnimation::previousRotation() -> void{
ImageBaseRotationAnimation::previousRotation();
    
this->updateImage();
    
}


    auto AllBinaryHTMLImageRotationAnimation::updateImage() -> void{

    Canvas* canvasSurface = this->canvasSurfaceArray[this->bufferedImageIndex];;
    
canvasSurface->save();
    
this->imageRotationUtil->rotateImageCanvasSurfaceClear(this->originalImage, this->twoImages[this->bufferedImageIndex], canvasSurface, this->angleInfo->getAngle() +90);
    
this->alphaProcessor->setAlpha(this->imageModifierUtil, this->originalImage, this->twoImages[this->bufferedImageIndex], this->alphaP);
    
this->imageRotationUtil->drawImage(this->originalImage, imageToShow, canvasSurface);
    
canvasSurface->restore();
    
this->swap();
    
}


    auto AllBinaryHTMLImageRotationAnimation::setFrame(int32_t index) -> void{
ImageBaseRotationAnimation::setFrame(index);
    
this->updateImage();
    
}


    auto AllBinaryHTMLImageRotationAnimation::swap() -> void{
this->imageToShow= this->twoImages[this->bufferedImageIndex];
    

                        if(this->bufferedImageIndex == 0)
                        
                                    {
                                    this->bufferedImageIndex= 1;
    

                                    }
                                
                        else {
                            this->bufferedImageIndex= 0;
    

                        }
                            
}


    auto AllBinaryHTMLImageRotationAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
graphics->drawImage(this->imageToShow, x, y, this->anchor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_CPP
