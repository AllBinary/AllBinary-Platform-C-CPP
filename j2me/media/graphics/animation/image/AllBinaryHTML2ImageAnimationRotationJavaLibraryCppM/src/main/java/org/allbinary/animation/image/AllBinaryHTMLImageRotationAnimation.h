
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

            #include <vector>
        
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

      
#include <playn/core/Canvas.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/core/PlayN.h>

      
#include <playn/html/HtmlGraphics.h>

      
#include <playn/html/HtmlImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageBaseRotationAnimation.h"
#include "AlphaBaseProcessor.h"
#include "AlphaProcessor.h"

class AllBinaryHTMLImageRotationAnimation: public ImageBaseRotationAnimation {

    private: const ImageRotationUtil imageRotationUtil = ImageRotationUtil::getInstance();

    private: const ImageModifierUtil imageModifierUtil = ImageModifierUtil::getInstanceOrCreate();

    private: Image originalImage;

    private: const std::vector<Image> twoImages = new Array(2);

    private: const std::vector<Canvas> canvasSurfaceArray = new Array(2);

    private: Image imageToShow;

    private: int32_t bufferedImageIndex= 0;

    private: AlphaBaseProcessor alphaProcessor = AlphaBaseProcessor::getInstance();

protected: AllBinaryHTMLImageRotationAnimation(Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior);

    public: Canvas getCanvasSurface(Image image);

    public: void setBasicColorP(BasicColor basicColor);

    public: void setAlpha(int32_t alpha);

    public: void nextRotation();

    public: void previousRotation();

    private: void updateImage();

    public: void setFrame(int32_t index);

    public: void swap();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_H
