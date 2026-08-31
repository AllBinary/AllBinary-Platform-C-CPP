
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_H

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

protected constructor (Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior);

    public CanvasSurface getCanvasSurface(Image image);

    public setBasicColorP(BasicColor basicColor);

    public setAlpha(int32_t alpha);

    public nextRotation();

    public previousRotation();

    updateImage();

    public setFrame(int32_t index);

    public swap();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_H
