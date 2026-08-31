
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
        #include "ImageBaseRotationAnimation.h"

class AllBinaryNoFlickerAndroidImageRotationAnimation: public ImageBaseRotationAnimation {
        

    private: const imageModifierUtil: ImageModifierUtil = ImageModifierUtil.getInstanceOrCreate()!;

    private: const androidImageUtil: AndroidImageUtil = AndroidImageUtil.getInstance()!;

    private: const matrix: Matrix = new Matrix();

    private: const halfWidth: int32_t;

    private: const halfHeight: int32_t;

    private: const increment: int16_t;

    private: const originalImage: Image;

    private: const twoImages: std::vector<Image> = new Array(2);

    private: imageToShow: Image;

    private: bufferedImageIndex: int32_t= 0;

protected constructor (Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior){
            super(image, angleInfo, totalAngle, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.originalImage= originalImage;
    
this.halfWidth= (image.getWidth()>>1);
    
this.halfHeight= (image.getHeight()>>1);
    
this.increment= (this.angleInfo!.getAngleIncrementInfo()!.getAngleIncrement());
    
this.imageToShow= image;
    
this.twoImages[0]= image;
    
this.twoImages[1]= ImageCopyUtil.getInstance()!.createImage(image);
    
}


    public setBasicColorP(BasicColor basicColor){

    changed: bool = false;;
    

                        if(this.getBasicColorP() == 
                                    null
                                 || this.getBasicColorP()!.intValue() != basicColor!.intValue())
                        
                                    {
                                    this.imageModifierUtil!.setColor(this.originalImage, this.imageToShow, 0, basicColor);
    
changed= true;
    

                                    }
                                
super.setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this.matrix.setRotate(0.0, this.halfWidth, this.halfHeight);
    
this.updateImage();
    

                                    }
                                
}


    public changeBasicColor(BasicColor basicColor){
this.setBasicColorP(basicColor);
    
}


    public setAlpha(int32_t alpha){

    changed: bool = false;;
    

                        if(this.alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setAlpha(alpha);
    
this.imageModifierUtil!.setAlpha(this.originalImage, this.imageToShow, 0, this.alphaP);
    

                        if(changed)
                        
                                    {
                                    this.matrix.setRotate(0.0, this.halfWidth, this.halfHeight);
    
this.updateImage();
    

                                    }
                                
}


    public nextRotation(){
super.nextRotation();
    
this.matrix.setRotate(this.increment, this.halfWidth, this.halfHeight);
    
this.updateImage();
    
}


    public previousRotation(){
super.previousRotation();
    
this.matrix.setRotate( -this.increment, this.halfWidth, this.halfHeight);
    
this.updateImage();
    
}


    updateImage(){
this.androidImageUtil!.rotate(this.twoImages[this.bufferedImageIndex]!, originalImage, matrix, imageModifierUtil!.paint);
    
this.swap();
    
}


    public setFrame(int32_t index){

    currentFrame: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.circularIndexUtil!.setIndex(index);
    

    newFrame: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.angleInfo!.adjustAngle(newFrame);
    
this.matrix.setRotate((newFrame -currentFrame) *this.increment, this.halfWidth, this.halfHeight);
    
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

            

