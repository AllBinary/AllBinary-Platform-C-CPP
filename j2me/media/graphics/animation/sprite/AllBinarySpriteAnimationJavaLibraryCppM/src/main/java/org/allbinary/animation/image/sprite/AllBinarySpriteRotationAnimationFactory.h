
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATIONFACTORY_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>

      
#include <org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinarySpriteRotationAnimation.h"
#include "AllBinaryAdjustedSpriteRotationAnimation.h"

class AllBinarySpriteRotationAnimationFactory: public BaseImageAnimationFactory, public ProceduralAnimationInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory createWHDY(Image image, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory createWH(Image image, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory createDXY(Image image, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory createDXYQ(Image image, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory createQ(Image image, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory createWHF(Image image, AnimationBehaviorFactory animationBehaviorFactory);

    private: const AnimationFactorySpriteScaleUtil animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil::getInstance();

public: AllBinarySpriteRotationAnimationFactory(Image image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

    public: void init(int32_t dx, int32_t dy);

    private: void initWH(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public: Animation getInstanceAnimation(Animation animationInterface);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATIONFACTORY_H
