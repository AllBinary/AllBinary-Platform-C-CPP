
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class AnimationBehavior;
class AngleInfo;
class BasicColor;
class ImageCopyUtil;
class ImageModifierUtil;
class ImageRotationUtil;
class PlaynMutableImage;
class Canvas;
class ImageImpl;
class PlayN;
class HtmlGraphics;
class HtmlImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
class AlphaBaseProcessor;
class AlphaProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryHTMLImageRotationAnimation: public ImageBaseRotationAnimation {

    private: ImageRotationUtil* imageRotationUtil;

    private: ImageModifierUtil* imageModifierUtil;

    private: Image* originalImage;

    private: std::vector<Image*> twoImages;

    private: std::vector<Canvas*> canvasSurfaceArray;

    private: Image* imageToShow;

    private: int32_t bufferedImageIndex= 0;

    private: AlphaBaseProcessor* alphaProcessor;

/*protected*/ public: AllBinaryHTMLImageRotationAnimation(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

    public: Canvas* getCanvasSurface(Image* image);

    public: void setBasicColorP(BasicColor* basicColor);

    public: void setAlpha(int32_t alpha);

    public: void nextRotation();

    public: void previousRotation();

    private: void updateImage();

    public: void setFrame(int32_t index);

    public: void swap();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYHTMLIMAGEROTATIONANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
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
#if __has_include(<org/microemu/device/playn/PlaynMutableImage.h>)
#include <org/microemu/device/playn/PlaynMutableImage.h>
#endif
#if __has_include(<playn/core/Canvas.h>)
#include <playn/core/Canvas.h>
#endif
#if __has_include(<playn/core/ImageImpl.h>)
#include <playn/core/ImageImpl.h>
#endif
#if __has_include(<playn/core/PlayN.h>)
#include <playn/core/PlayN.h>
#endif
#if __has_include(<playn/html/HtmlGraphics.h>)
#include <playn/html/HtmlGraphics.h>
#endif
#if __has_include(<playn/html/HtmlImage.h>)
#include <playn/html/HtmlImage.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageBaseRotationAnimation.h")
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/AlphaBaseProcessor.h")
#include "org/allbinary/animation/image/AlphaBaseProcessor.h"
#endif
#if __has_include("org/allbinary/animation/image/AlphaProcessor.h")
#include "org/allbinary/animation/image/AlphaProcessor.h"
#endif

        #endif
    
