
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Image;
class Sprite;
class AndroidUtil;
class Animation;
class AnimationBehaviorFactory;
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>
class BasicColor;
class BasicColorUtil;
class AnimationFactorySpriteScaleUtil;
class PrimitiveIntUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SpriteIndexedAnimation;
class AdjustedSpriteIndexedAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpriteIndexedAnimationFactory: public BaseImageAnimationFactory, public ProceduralAnimationInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory* createCWHDXY(Image* image, std::vector<BasicColor*> basicColorArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory* createCWH(Image* image, std::vector<BasicColor*> basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory* createWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

    private: AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;

    private: std::vector<BasicColor*> basicColorArray;

private: SpriteIndexedAnimationFactory(Image* image, std::vector<BasicColor*> basicColorArray, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

    private: void initHWH();

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/game/Sprite.h>)
#include <javax/microedition/lcdui/game/Sprite.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/image/BaseImageAnimationFactory.h>)
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorUtil.h>)
#include <org/allbinary/graphics/color/BasicColorUtil.h>
#endif
#if __has_include(<org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>)
#include <org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include("org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h")
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/sprite/AdjustedSpriteIndexedAnimation.h")
#include "org/allbinary/animation/image/sprite/AdjustedSpriteIndexedAnimation.h"
#endif

        #endif
    
