
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_H

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

public constructor (Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior);

    public setBasicColorP(BasicColor basicColor);

    public changeBasicColor(BasicColor basicColor);

    public setAlpha(int32_t alpha);

    public setScale(float scaleX, float scaleY);

    public setMaxScale(float maxScaleX, float maxScaleY);

    public nextRotation();

    public previousRotation();

    updateImage();

    public setFrame(int32_t index);

    public swap();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public close();

                //@Throws(Throwable.constructor)
            
    finalize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_H
