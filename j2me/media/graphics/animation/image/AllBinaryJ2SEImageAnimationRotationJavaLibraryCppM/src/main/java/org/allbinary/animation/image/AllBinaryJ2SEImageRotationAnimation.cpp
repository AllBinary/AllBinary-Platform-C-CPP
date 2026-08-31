
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
        



            #include "../../../../java/lang/Throwable.h"
        
            #include "../../../../java/lang/Exception.h"
        
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
        #include "ImageBaseRotationAnimation.h"
#include "ModifierBaseProcessor.h"
#include "ScaleProcessor.h"
#include "ScaleBaseProcessor.h"
#include "SetColorProcessor.h"
#include "ChangeColorProcessor.h"
#include "AlphaProcessor.h"

class AllBinaryJ2SEImageRotationAnimation: public ImageBaseRotationAnimation {
        

    private: const imageRotationUtil: ImageRotationUtil = ImageRotationUtil.getInstance()!;

    private: const imageModifierUtil: ImageModifierUtil = ImageModifierUtil.getInstanceOrCreate()!;

    private: const realOriginalImage: Image;

    private: const originalImageArray: std::vector<Image> = new Array(1);

    private: const twoImages: std::vector<Image> = new Array(2);

    private: imageToShow: Image;

    private: bufferedImageIndex: int32_t= 0;

    private: lastScaleX: float = 1.0;

    private: lastScaleY: float = 1.0;

    private: scaleX: float = 1.0;

    private: scaleY: float = 1.0;

    private: maxScaleX: float= 0.0;

    private: maxScaleY: float= 0.0;

    private: alphaProcessor: ModifierBaseProcessor = ModifierBaseProcessor.getInstance()!;

    private: setColorProcessor: ModifierBaseProcessor = ModifierBaseProcessor.getInstance()!;

    private: changeColorProcessor: ModifierBaseProcessor = ModifierBaseProcessor.getInstance()!;

    private: scaleProcessor: ScaleBaseProcessor = ScaleProcessor.getInstance()!;

public constructor (Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior){
            super(image, angleInfo, totalAngle, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.realOriginalImage= originalImage;
    
this.originalImageArray[0]= originalImage;
    
this.imageToShow= image;
    
this.twoImages[0]= image;
    
this.twoImages[1]= ImageCopyUtil.getInstance()!.createImageForRotation(image);
    
}


    public setBasicColorP(BasicColor basicColor){

    changed: bool = false;;
    

                        if(this.getBasicColorP() == 
                                    null
                                 || this.getBasicColorP()!.intValue() != basicColor!.intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this.setColorProcessor= SetColorProcessor.getInstance();
    
this.updateImage();
    

                                    }
                                
}


    public changeBasicColor(BasicColor basicColor){

    changed: bool = false;;
    

                        if(this.getChangeBasicColor() == 
                                    null
                                 || this.getChangeBasicColor()!.intValue() != basicColor!.intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.changeBasicColor(basicColor);
    

                        if(changed)
                        
                                    {
                                    this.changeColorProcessor= ChangeColorProcessor.getInstance();
    
this.updateImage();
    

                                    }
                                
}


    public setAlpha(int32_t alpha){

    changed: bool = false;;
    

                        if(this.alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setAlpha(alpha);
    

                        if(changed)
                        
                                    {
                                    this.alphaProcessor= AlphaProcessor.getInstance();
    
this.updateImage();
    

                                    }
                                
}


    public setScale(float scaleX, float scaleY){
this.scaleX= scaleX;
    
this.scaleY= scaleY;
    

                        if(this.scaleX != this.lastScaleX || this.scaleY != this.lastScaleY)
                        
                                    {
                                    this.scaleProcessor!.update(this.realOriginalImage, this.originalImageArray, this.twoImages, this.bufferedImageIndex, this.scaleX, this.scaleY, this.maxScaleX, this.maxScaleY);
    
this.updateImage();
    

                                    }
                                
this.lastScaleX= this.scaleX;
    
this.lastScaleY= this.scaleY;
    
}


    public setMaxScale(float maxScaleX, float maxScaleY){
this.maxScaleX= maxScaleX;
    
this.maxScaleY= maxScaleY;
    
this.scaleProcessor!.update(this.realOriginalImage, this.originalImageArray, this.twoImages, this.bufferedImageIndex, this.scaleX, this.scaleY, this.maxScaleX, this.maxScaleY);
    
this.updateImage();
    
}


    public nextRotation(){
super.nextRotation();
    
this.updateImage();
    
}


    public previousRotation(){
super.previousRotation();
    
this.updateImage();
    
}


    updateImage(){
this.imageRotationUtil!.rotateImage(this.originalImageArray[0]!, this.twoImages[this.bufferedImageIndex]!, this.angleInfo!.getAngle() +90);
    
this.alphaProcessor!.updateAlpha(this.imageModifierUtil, NullImage.NULL_IMAGE, this.twoImages[this.bufferedImageIndex]!, 0, this.alphaP);
    
this.setColorProcessor!.updateColor(this.imageModifierUtil, NullImage.NULL_IMAGE, this.twoImages[this.bufferedImageIndex]!, 0, this.basicColor);
    
this.changeColorProcessor!.updateColor(this.imageModifierUtil, NullImage.NULL_IMAGE, this.twoImages[this.bufferedImageIndex]!, 0, this.changeBasicColorP);
    
this.swap();
    
}


    public setFrame(int32_t index){
super.setFrame(index);
    
this.updateImage();
    
}


    public swap(){
this.imageToShow= this.twoImages[this.bufferedImageIndex]!;
    

                        if(this.bufferedImageIndex == 0)
                        
                                    {
                                    this.bufferedImageIndex= 1;
    

                                    }
                                
                        else {
                            this.bufferedImageIndex= 0;
    

                        }
                            
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
graphics.drawImage(this.imageToShow, x, y, this.anchor);
    
}


    public close(){
super.close();
    

    disposalUtil: DisposalUtil = DisposalUtil.getInstance()!;;
    

    size2: int32_t = this.twoImages!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
disposalUtil!.disposeImage(this.twoImages[index]!);
    
}


    size: int32_t = this.originalImageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
disposalUtil!.disposeImage(this.originalImageArray[index]!);
    
}

disposalUtil!.disposeImage(this.realOriginalImage);
    
disposalUtil!.disposeImage(this.imageToShow);
    
}


                //@Throws(Throwable.constructor)
            
    finalize(){
super.finalize();
    

    disposalUtil: DisposalUtil = DisposalUtil.getInstance()!;;
    

    size2: int32_t = this.twoImages!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
disposalUtil!.disposeImage(this.twoImages[index]!);
    
}


    size: int32_t = this.originalImageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
disposalUtil!.disposeImage(this.originalImageArray[index]!);
    
}

disposalUtil!.disposeImage(this.realOriginalImage);
    
disposalUtil!.disposeImage(this.imageToShow);
    
}


};

            

