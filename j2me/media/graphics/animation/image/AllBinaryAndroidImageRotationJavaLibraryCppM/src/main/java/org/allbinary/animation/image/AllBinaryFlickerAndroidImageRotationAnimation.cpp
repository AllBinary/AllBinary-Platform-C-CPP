
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

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/image/AndroidImageUtil.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageBaseRotationAnimation.h"

class AllBinaryFlickerAndroidImageRotationAnimation: public ImageBaseRotationAnimation {
        

    private: const imageModifierUtil: ImageModifierUtil = ImageModifierUtil.getInstanceOrCreate()!;

    private: const androidImageUtil: AndroidImageUtil = AndroidImageUtil.getInstance()!;

    private: const matrix: Matrix = new Matrix();

    private: const halfWidth: int32_t;

    private: const halfHeight: int32_t;

    private: const increment: int16_t;

    private: const originalImage: Image;

public constructor (Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior){
            super(image, angleInfo, totalAngle, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.originalImage= originalImage;
    
this.halfWidth= (image.getWidth()>>1);
    
this.halfHeight= (image.getHeight()>>1);
    
this.increment= (this.angleInfo!.getAngleIncrementInfo()!.getAngleIncrement());
    
}


    public setBasicColorP(BasicColor basicColor){

    changed: bool = false;;
    

                        if(this.getBasicColorP() == 
                                    null
                                 || this.getBasicColorP()!.intValue() != basicColor!.intValue())
                        
                                    {
                                    this.imageModifierUtil!.setColor(this.originalImage, this.getImage(), 0, basicColor);
    
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
    
this.imageModifierUtil!.setAlpha(this.originalImage, this.getImage(), 0, this.alphaP);
    

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
this.androidImageUtil!.rotate(this.getImage(), originalImage, matrix, imageModifierUtil!.paint);
    
}


    public setFrame(int32_t index){

    currentFrame: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.circularIndexUtil!.setIndex(index);
    

    newFrame: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.angleInfo!.adjustAngle(newFrame);
    
this.matrix.setRotate((newFrame -currentFrame) *this.increment, this.halfWidth, this.halfHeight);
    
this.updateImage();
    
}


};

            

