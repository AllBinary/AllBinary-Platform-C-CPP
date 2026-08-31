
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATION_H

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

public constructor (Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior);

    public setBasicColorP(BasicColor basicColor);

    public changeBasicColor(BasicColor basicColor);

    public setAlpha(int32_t alpha);

    public nextRotation();

    public previousRotation();

    updateImage();

    public setFrame(int32_t index);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATION_H
