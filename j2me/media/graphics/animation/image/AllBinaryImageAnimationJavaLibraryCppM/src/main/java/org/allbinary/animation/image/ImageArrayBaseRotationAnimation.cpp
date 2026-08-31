
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

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageArrayBaseRotationAnimation: public RotationAnimation {
        

    private: const imageModifierUtil: ImageModifierUtil = ImageModifierUtil.getInstanceOrCreate()!;

    private: const originalImageArray: std::vector<Image>;

    private: imageArray: std::vector<Image> = NullImage.NULL_IMAGE_ARRAY;

    private: currentImage: Image;

    private: totalFrames: int32_t= 0;

public constructor (std::vector<Image> originalImageArray, AngleInfo angleInfo, AnimationBehavior animationBehavior){
            super(angleInfo, CircularIndexUtil.createInstance(360 /angleInfo!.getAngleIncrementInfo()!.getAngleIncrement()), animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.originalImageArray= originalImageArray;
    
this.setImageArray(this.imageModifierUtil!.getImageArray(originalImageArray));
    
this.currentImage= this.imageArray[this.circularIndexUtil!.getIndex()]!;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getSize();;
    
}


    public setAlpha(int32_t alpha){

                        if(this.alphaP != alpha)
                        
                                    {
                                    super.setAlpha(alpha);
    
this.imageModifierUtil!.reset();
    

    index: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.imageModifierUtil!.setAlpha(this.originalImageArray[index]!, this.imageArray[index]!, index, this.alphaP);
    

                                    }
                                
}


    public nextRotation(){
super.nextRotation();
    

    index: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.imageModifierUtil!.setAlpha(this.originalImageArray[index]!, this.imageArray[index]!, index, this.alphaP);
    
this.currentImage= this.imageArray[index]!;
    
}


    public previousRotation(){
super.previousRotation();
    

    index: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.imageModifierUtil!.setAlpha(this.originalImageArray[index]!, this.imageArray[index]!, index, this.alphaP);
    
this.currentImage= this.imageArray[index]!;
    
}


    public setFrame(int32_t index2){
super.setFrame(index2);
    

    index: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.imageModifierUtil!.setAlpha(this.originalImageArray[index]!, this.imageArray[index]!, index, this.alphaP);
    
this.currentImage= this.imageArray[index]!;
    
}


    public setSequence(std::vector<int32_t> sequence){
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil.getArrayInstance();;
    
}


    setImageArray(std::vector<Image> imageArray){
this.imageArray= imageArray;
    
this.totalFrames= imageArray!.length;
    
this.circularIndexUtil= CircularIndexUtil.createInstance(this.totalFrames);
    
}


    private: anchor: int32_t = Anchor.TOP_LEFT;

    public paintXY(Graphics graphics, int32_t x, int32_t y){
graphics.drawImage(this.currentImage, x, y, this.anchor);
    
}


    public close(){

    disposalUtil: DisposalUtil = DisposalUtil.getInstance()!;;
    

    size2: int32_t = this.imageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
disposalUtil!.disposeImage(this.imageArray[index]!);
    
}


    size: int32_t = this.originalImageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
disposalUtil!.disposeImage(this.originalImageArray[index]!);
    
}

disposalUtil!.disposeImage(this.currentImage);
    
}


                //@Throws(Throwable.constructor)
            
    finalize(){

    disposalUtil: DisposalUtil = DisposalUtil.getInstance()!;;
    

    size2: int32_t = this.imageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
disposalUtil!.disposeImage(this.imageArray[index]!);
    
}


    size: int32_t = this.originalImageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
disposalUtil!.disposeImage(this.originalImageArray[index]!);
    
}

disposalUtil!.disposeImage(this.currentImage);
    
}


};

            

