
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorUtil.h>

      
#include <org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
#include "org/allbinary/animation/image/sprite/AdjustedSpriteIndexedAnimation.h"

class OneRowSpriteIndexedAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static OneRowSpriteIndexedAnimationFactory* createFactoryDX(Image* image, int32_t dx, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static OneRowSpriteIndexedAnimationFactory* createFactoryDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static OneRowSpriteIndexedAnimationFactory* createFactoryWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static OneRowSpriteIndexedAnimationFactory* createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

    private: AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil::getInstance();

public: OneRowSpriteIndexedAnimationFactory(Image* image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

    public: void init(int32_t dx, int32_t dy);

    public: void initW(int32_t dx);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_H
