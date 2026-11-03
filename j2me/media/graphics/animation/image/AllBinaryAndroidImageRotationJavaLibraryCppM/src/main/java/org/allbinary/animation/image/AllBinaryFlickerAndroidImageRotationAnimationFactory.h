
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class NullImage;
class Animation;
class AnimationBehaviorFactory;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

class ImageCopyUtil;
class AngleFactory;
class AngleInfo;
class ScaleProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryFlickerAndroidImageRotationAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryFlickerAndroidImageRotationAnimationFactory
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface {

    private: Image* image;

    private: int16_t angleIncrement;

    /*protected*/ public: AnimationBehaviorFactory* animationBehaviorFactory;

public: AllBinaryFlickerAndroidImageRotationAnimationFactory(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    /*protected*/ public: int16_t getAngleIncrement();

    /*protected*/ public: void setImage(Image* image);

    /*protected*/ public: Image* getImage();

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYFLICKERANDROIDIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif

#if __has_include(<org/allbinary/media/image/ImageCopyUtil.h>)
#include <org/allbinary/media/image/ImageCopyUtil.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include("org/allbinary/animation/image/AllBinaryFlickerAndroidImageRotationAnimation.h")
#include "org/allbinary/animation/image/AllBinaryFlickerAndroidImageRotationAnimation.h"
#endif

        #endif
    
