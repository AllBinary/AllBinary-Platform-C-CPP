
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class Sprite;
class Player;
class Animation;
class AnimationBehaviorFactory;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
class IndexedAnimation;
class CaptionIndexedAnimation;
class ImageAnimation;
class BasicColorUtil;
class AnimationFactoryImageScaleUtil;
class AnimationFactorySpriteScaleUtil;
class ForcedLogUtil;
class ScaleProperties;
class Sound;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SpriteIndexedAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCaptionIndexedAnimationFactory
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface {

    /*protected*/ public: AnimationFactoryImageScaleUtil* animationFactoryImageScaleUtil;

    private: AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;

    private: Image* captionImage;

    private: Image* spriteMovieImage;

    private: int32_t frameWidth;

    private: int32_t frameHeight;

    private: int32_t captionDx;

    private: int32_t captionDy;

    private: int32_t dx;

    private: int32_t dy;

    private: int32_t time;

    private: Sound* soundInterface;

    public: ScaleProperties* scaleProperties;

    private: AnimationBehaviorFactory* animationBehaviorFactory;

public: ImageCaptionIndexedAnimationFactory(Image* captionImage, Image* spriteMovieImage, Sound* soundInterface, int32_t frameWidth, int32_t frameHeight, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/game/Sprite.h>)
#include <javax/microedition/lcdui/game/Sprite.h>
#endif
#if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
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
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/caption/CaptionIndexedAnimation.h>)
#include <org/allbinary/animation/caption/CaptionIndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/image/ImageAnimation.h>)
#include <org/allbinary/animation/image/ImageAnimation.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorUtil.h>)
#include <org/allbinary/graphics/color/BasicColorUtil.h>
#endif
#if __has_include(<org/allbinary/image/AnimationFactoryImageScaleUtil.h>)
#include <org/allbinary/image/AnimationFactoryImageScaleUtil.h>
#endif
#if __has_include(<org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>)
#include <org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include(<org/allbinary/media/audio/Sound.h>)
#include <org/allbinary/media/audio/Sound.h>
#endif
#if __has_include("org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h")
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
#endif

        #endif
    
