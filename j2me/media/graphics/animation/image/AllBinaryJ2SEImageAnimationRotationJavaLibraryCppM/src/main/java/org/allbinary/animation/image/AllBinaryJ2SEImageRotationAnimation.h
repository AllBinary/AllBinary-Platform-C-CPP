
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

            #include <vector>
        
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

    private: const ImageRotationUtil imageRotationUtil = ImageRotationUtil::getInstance();

    private: const ImageModifierUtil imageModifierUtil = ImageModifierUtil::getInstanceOrCreate();

    private: Image realOriginalImage;

    private: const std::vector<Image> originalImageArray = new Array(1);

    private: const std::vector<Image> twoImages = new Array(2);

    private: Image imageToShow;

    private: int32_t bufferedImageIndex= 0;

    private: float lastScaleX = 1.0;

    private: float lastScaleY = 1.0;

    private: float scaleX = 1.0;

    private: float scaleY = 1.0;

    private: float maxScaleX= 0.0;

    private: float maxScaleY= 0.0;

    private: ModifierBaseProcessor alphaProcessor = ModifierBaseProcessor::getInstance();

    private: ModifierBaseProcessor setColorProcessor = ModifierBaseProcessor::getInstance();

    private: ModifierBaseProcessor changeColorProcessor = ModifierBaseProcessor::getInstance();

    private: ScaleBaseProcessor scaleProcessor = ScaleProcessor::getInstance();

public: AllBinaryJ2SEImageRotationAnimation(Image originalImage, Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior);

    public: void setBasicColorP(BasicColor basicColor);

    public: void changeBasicColor(BasicColor basicColor);

    public: void setAlpha(int32_t alpha);

    public: void setScale(float scaleX, float scaleY);

    public: void setMaxScale(float maxScaleX, float maxScaleY);

    public: void nextRotation();

    public: void previousRotation();

    private: void updateImage();

    public: void setFrame(int32_t index);

    public: void swap();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void close();

                //@Throws(Throwable.constructor)
            
    protected: void finalize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_H
