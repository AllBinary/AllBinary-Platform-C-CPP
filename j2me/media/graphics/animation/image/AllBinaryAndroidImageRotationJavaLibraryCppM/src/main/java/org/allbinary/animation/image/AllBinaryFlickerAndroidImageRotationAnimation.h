
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Matrix;
class Image;
class AnimationBehavior;
class BasicColor;
class AngleInfo;
class AndroidImageUtil;
class ImageModifierUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryFlickerAndroidImageRotationAnimation: public ImageBaseRotationAnimation {

    private: ImageModifierUtil* imageModifierUtil;

    private: AndroidImageUtil* androidImageUtil;

    private: Matrix* matrix;

    private: int32_t halfWidth;

    private: int32_t halfHeight;

    private: int16_t increment;

    private: Image* originalImage;

public: AllBinaryFlickerAndroidImageRotationAnimation(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

    public: void setBasicColorP(BasicColor* basicColor);

    public: void changeBasicColor(BasicColor* basicColor);

    public: void setAlpha(int32_t alpha);

    public: void nextRotation();

    public: void previousRotation();

    private: void updateImage();

    public: void setFrame(int32_t index);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATION_H_COMPLETE
        #if __has_include(<android/graphics/Matrix.h>)
#include <android/graphics/Matrix.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
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
#if __has_include(<org/allbinary/media/image/AndroidImageUtil.h>)
#include <org/allbinary/media/image/AndroidImageUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageModifierUtil.h>)
#include <org/allbinary/media/image/ImageModifierUtil.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageBaseRotationAnimation.h")
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
#endif

        #endif
    
