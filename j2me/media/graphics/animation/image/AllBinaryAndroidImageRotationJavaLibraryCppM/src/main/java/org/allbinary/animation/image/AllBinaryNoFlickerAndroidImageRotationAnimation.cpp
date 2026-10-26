
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
        #include "ImageBaseRotationAnimation.h"

class AllBinaryNoFlickerAndroidImageRotationAnimation: public ImageBaseRotationAnimation {

    private: const ImageModifierUtil imageModifierUtil = ImageModifierUtil::getInstanceOrCreate();

    private: const AndroidImageUtil androidImageUtil = AndroidImageUtil::getInstance();

    private: const Matrix matrix = Matrix();

    private: int32_t halfWidth;

    private: int32_t halfHeight;

    private: int16_t increment;

    private: Image originalImage;

    private: const std::vector<Image> twoImages = std::vector<Image>(2);

    private: Image imageToShow;

    private: int32_t bufferedImageIndex= 0;

protected: AllBinaryNoFlickerAndroidImageRotationAnimation(Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior) : ImageBaseRotationAnimation(image, angleInfo, totalAngle, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->originalImage= originalImage;
    
this->halfWidth= (image.getWidth()>>1);
    
this->halfHeight= (image.getHeight()>>1);
    
this->increment= (this->angleInfo.getAngleIncrementInfo().getAngleIncrement());
    
this->imageToShow= image;
    
this->twoImages[0]= image;
    
this->twoImages[1]= ImageCopyUtil::getInstance().createImage(image);
    
}


    public: void setBasicColorP(BasicColor basicColor){

    bool changed = false;;
    

                        if(this->getBasicColorP() == 
                                    nullptr
                                 || this->getBasicColorP().intValue() != basicColor.intValue())
                        
                                    {
                                    this->imageModifierUtil.setColor(this->originalImage, this->imageToShow, 0, basicColor);
    
changed= true;
    

                                    }
                                
super.setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->matrix.setRotate(0.0, this->halfWidth, this->halfHeight);
    
this->updateImage();
    

                                    }
                                
}


    public: void changeBasicColor(BasicColor basicColor){
this->setBasicColorP(basicColor);
    
}


    public: void setAlpha(int32_t alpha){

    bool changed = false;;
    

                        if(this->alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setAlpha(alpha);
    
this->imageModifierUtil.setAlpha(this->originalImage, this->imageToShow, 0, this->alphaP);
    

                        if(changed)
                        
                                    {
                                    this->matrix.setRotate(0.0, this->halfWidth, this->halfHeight);
    
this->updateImage();
    

                                    }
                                
}


    public: void nextRotation(){
super.nextRotation();
    
this->matrix.setRotate(this->increment, this->halfWidth, this->halfHeight);
    
this->updateImage();
    
}


    public: void previousRotation(){
super.previousRotation();
    
this->matrix.setRotate( -this->increment, this->halfWidth, this->halfHeight);
    
this->updateImage();
    
}


    private: void updateImage(){
this->androidImageUtil.rotate(this->twoImages[this->bufferedImageIndex], originalImage, matrix, imageModifierUtil.paint);
    
this->swap();
    
}


    public: void setFrame(int32_t index){

    int32_t currentFrame = this->circularIndexUtil.getIndex();;
    
this->circularIndexUtil.setIndex(index);
    

    int32_t newFrame = this->circularIndexUtil.getIndex();;
    
this->angleInfo.adjustAngle(newFrame);
    
this->matrix.setRotate((newFrame -currentFrame) *this->increment, this->halfWidth, this->halfHeight);
    
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


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
graphics.drawImage(this->imageToShow, x, y, this->anchor);
    
}


};

            

