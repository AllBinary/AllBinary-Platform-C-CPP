
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
#include <org/allbinary/media/image/ImageRotationUtil.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/CanvasImage.h>

      
#include <playn/core/CanvasSurface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageBaseRotationAnimation.h"
#include "AlphaBaseProcessor.h"
#include "AlphaProcessor.h"

class AllBinaryHTMLImageRotationAnimation: public ImageBaseRotationAnimation {
        

    private: const imageRotationUtil: ImageRotationUtil = ImageRotationUtil.getInstance()!;

    private: const imageModifierUtil: ImageModifierUtil = ImageModifierUtil.getInstanceOrCreate()!;

    private: const originalImage: Image;

    private: const twoImages: std::vector<Image> = new Array(2);

    private: const canvasSurfaceArray: std::vector<CanvasSurface> = new Array(2);

    private: imageToShow: Image;

    private: bufferedImageIndex: int32_t= 0;

    private: alphaProcessor: AlphaBaseProcessor = AlphaBaseProcessor.getInstance()!;

protected constructor (Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior){
            super(image, angleInfo, totalAngle, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.originalImage= originalImage;
    
this.imageToShow= image;
    
this.twoImages[0]= image;
    
this.twoImages[1]= ImageCopyUtil.getInstance()!.createImage(image);
    
this.canvasSurfaceArray[0]= this.getCanvasSurface(this.twoImages[0]!);
    
this.canvasSurfaceArray[1]= this.getCanvasSurface(this.twoImages[1]!);
    
}


    public CanvasSurface getCanvasSurface(Image image){

    htmlImage: PlaynMutableImage = image as PlaynMutableImage;;
    

    canvasImage: CanvasImage = htmlImage!.getImage() as CanvasImage;;
    

    canvasSurface: CanvasSurface = htmlImage!.getCanvasSurface(canvasImage)!;;
    
canvasSurface!.translate(this.originalImage!.getWidth() /2, this.originalImage!.getHeight() /2);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return canvasSurface;
    
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


    public nextRotation(){
super.nextRotation();
    
this.updateImage();
    
}


    public previousRotation(){
super.previousRotation();
    
this.updateImage();
    
}


    updateImage(){

    canvasSurface: CanvasSurface = this.canvasSurfaceArray[this.bufferedImageIndex]!;;
    
canvasSurface!.save();
    
this.imageRotationUtil!.rotateImageCanvasSurfaceClear(this.originalImage, this.twoImages[this.bufferedImageIndex]!, canvasSurface, this.angleInfo!.getAngle() +90);
    
this.alphaProcessor!.setAlpha(this.imageModifierUtil, this.originalImage, this.twoImages[this.bufferedImageIndex]!, this.alphaP);
    
this.imageRotationUtil!.drawImage(this.originalImage, imageToShow, canvasSurface);
    
canvasSurface!.restore();
    
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


};

            

