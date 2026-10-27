
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

class AllBinaryHTMLImageRotationAnimation: public ImageBaseRotationAnimation {

    private: ImageRotationUtil* imageRotationUtil = ImageRotationUtil::getInstance();

    private: ImageModifierUtil* imageModifierUtil = ImageModifierUtil::getInstanceOrCreate();

    private: Image* originalImage;

    private: const std::vector<Image*> twoImages = std::vector<Image*>(2);

    private: const std::vector<Canvas*> canvasSurfaceArray = std::vector<Canvas*>(2);

    private: Image* imageToShow;

    private: int32_t bufferedImageIndex= 0;

    private: AlphaBaseProcessor* alphaProcessor = AlphaBaseProcessor::getInstance();

protected: AllBinaryHTMLImageRotationAnimation(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) : ImageBaseRotationAnimation(image, angleInfo, totalAngle, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->originalImage= originalImage;
    
this->imageToShow= image;
    
this->twoImages[0]= image;
    
this->twoImages[1]= ImageCopyUtil::getInstance()->createImage(image);
    
this->canvasSurfaceArray[0]= this->getCanvasSurface(this->twoImages[0]);
    
this->canvasSurfaceArray[1]= this->getCanvasSurface(this->twoImages[1]);
    
}


    public: Canvas* getCanvasSurface(Image* image){

    PlaynMutableImage* htmlImage = dynamic_cast<PlaynMutableImage*>(image);;
    

    ImageImpl* canvasImage = dynamic_cast<ImageImpl*>(htmlImage->getImage());;
    

    PlayN* playN = PlayN::getInstance();;
    

    Canvas* canvas = (graphics)).get(dynamic_cast<HtmlImage*>(canvasImage));;
    
canvas->translate(this->originalImage->getWidth() /2, this->originalImage->getHeight() /2);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return canvas;
    
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


    public: void nextRotation(){
super.nextRotation();
    
this->updateImage();
    
}


    public: void previousRotation(){
super.previousRotation();
    
this->updateImage();
    
}


    private: void updateImage(){

    Canvas* canvasSurface = this->canvasSurfaceArray[this->bufferedImageIndex];;
    
canvasSurface->save();
    
this->imageRotationUtil->rotateImageCanvasSurfaceClear(this->originalImage, this->twoImages[this->bufferedImageIndex], canvasSurface, this->angleInfo.getAngle() +90);
    
this->alphaProcessor->setAlpha(this->imageModifierUtil, this->originalImage, this->twoImages[this->bufferedImageIndex], this->alphaP);
    
this->imageRotationUtil->drawImage(this->originalImage, imageToShow, canvasSurface);
    
canvasSurface->restore();
    
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


};

            

