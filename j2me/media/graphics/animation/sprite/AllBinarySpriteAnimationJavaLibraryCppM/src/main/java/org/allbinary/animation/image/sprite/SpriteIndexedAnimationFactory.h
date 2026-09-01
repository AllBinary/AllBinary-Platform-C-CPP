
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

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorUtil.h>

      
#include <org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpriteIndexedAnimation.h"
#include "AdjustedSpriteIndexedAnimation.h"

class SpriteIndexedAnimationFactory: public BaseImageAnimationFactory, public ProceduralAnimationInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory createCWHDXY(Image image, std::vector<BasicColor> basicColorArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory createCWH(Image image, std::vector<BasicColor> basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory createWH(Image image, int32_t width, int32_t height, AnimationBehaviorFactory animationBehaviorFactory);

    private: const AnimationFactorySpriteScaleUtil animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil::getInstance();

    private: std::vector<BasicColor> basicColorArray = BasicColorUtil::getInstance().ZERO_ARRAY;

private: SpriteIndexedAnimationFactory(Image image, std::vector<BasicColor> basicColorArray, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

    private: void initHWH();

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public: Animation getInstanceAnimation(Animation animationInterface);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H
