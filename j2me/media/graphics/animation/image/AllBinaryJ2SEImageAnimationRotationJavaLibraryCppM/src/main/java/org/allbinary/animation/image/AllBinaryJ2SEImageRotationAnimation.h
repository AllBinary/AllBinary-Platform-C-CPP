
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class NullImage;
class DisposalUtil;
class AnimationBehavior;
class BasicColor;
class AngleInfo;
class ImageCopyUtil;
class ImageModifierUtil;
class ImageRotationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
class ModifierBaseProcessor;
class ScaleProcessor;
class ScaleBaseProcessor;
class SetColorProcessor;
class ChangeColorProcessor;
class AlphaProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryJ2SEImageRotationAnimation: public ImageBaseRotationAnimation {

    private: ImageRotationUtil* imageRotationUtil;

    private: ImageModifierUtil* imageModifierUtil;

    private: Image* realOriginalImage;

    private: std::vector<Image*> originalImageArray;

    private: std::vector<Image*> twoImages;

    private: Image* imageToShow;

    private: int32_t bufferedImageIndex= 0;

    private: float lastScaleX = 1.0;

    private: float lastScaleY = 1.0;

    private: float scaleX = 1.0;

    private: float scaleY = 1.0;

    private: float maxScaleX= 0.0;

    private: float maxScaleY= 0.0;

    private: ModifierBaseProcessor* alphaProcessor;

    private: ModifierBaseProcessor* setColorProcessor;

    private: ModifierBaseProcessor* changeColorProcessor;

    private: ScaleBaseProcessor* scaleProcessor;

public: AllBinaryJ2SEImageRotationAnimation(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

    public: void setBasicColorP(BasicColor* basicColor);

    public: void changeBasicColor(BasicColor* basicColor);

    public: void setAlpha(int32_t alpha);

    public: void setScale(float scaleX, float scaleY);

    public: void setMaxScale(float maxScaleX, float maxScaleY);

    public: void nextRotation();

    public: void previousRotation();

    private: void updateImage();

    public: void setFrame(int32_t index);

    public: void swap();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void close();

                //@Throws(Throwable.constructor)
            
    /*protected*/ public: void finalize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/DisposalUtil.h>)
#include <org/allbinary/DisposalUtil.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageCopyUtil.h>)
#include <org/allbinary/media/image/ImageCopyUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageModifierUtil.h>)
#include <org/allbinary/media/image/ImageModifierUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageRotationUtil.h>)
#include <org/allbinary/media/image/ImageRotationUtil.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageBaseRotationAnimation.h")
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/ModifierBaseProcessor.h")
#include "org/allbinary/animation/image/ModifierBaseProcessor.h"
#endif
#if __has_include("org/allbinary/animation/image/ScaleProcessor.h")
#include "org/allbinary/animation/image/ScaleProcessor.h"
#endif
#if __has_include("org/allbinary/animation/image/ScaleBaseProcessor.h")
#include "org/allbinary/animation/image/ScaleBaseProcessor.h"
#endif
#if __has_include("org/allbinary/animation/image/SetColorProcessor.h")
#include "org/allbinary/animation/image/SetColorProcessor.h"
#endif
#if __has_include("org/allbinary/animation/image/ChangeColorProcessor.h")
#include "org/allbinary/animation/image/ChangeColorProcessor.h"
#endif
#if __has_include("org/allbinary/animation/image/AlphaProcessor.h")
#include "org/allbinary/animation/image/AlphaProcessor.h"
#endif

        #endif
    
