
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class Animation;
class AnimationBehaviorFactory;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
class GameConfigurationCentral;
class NullUtil;
class AngleFactory;
class ScaleProperties;
class ImageToRotationImageArrayUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageArrayRotationAnimationInfo;
class AdjustedImageArrayRotationAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TWB - Adjustments should be done in the resource creation and not at the animation level
class PooledImageArrayRotationAnimationFactory
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: static PooledImageArrayRotationAnimationFactory* createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static PooledImageArrayRotationAnimationFactory* createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

    private: Object* allBinaryImageRotationAnimationInfo;

    private: AnimationBehaviorFactory* animationBehaviorFactory;

public: PooledImageArrayRotationAnimationFactory(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_POOLEDIMAGEARRAYROTATIONANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
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
#if __has_include(<org/allbinary/game/configuration/GameConfigurationCentral.h>)
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageToRotationImageArrayUtil.h>)
#include <org/allbinary/media/image/ImageToRotationImageArrayUtil.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#endif
#if __has_include("org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h")
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#endif

        #endif
    
