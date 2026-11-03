
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_COLORCOMPOSITESPRITEINDEXEDANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_COLORCOMPOSITESPRITEINDEXEDANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/sprite/ColorCompositeSpriteIndexedAnimationFactory.h"
        

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

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"


ColorCompositeSpriteIndexedAnimationFactory::ColorCompositeSpriteIndexedAnimationFactory(Image* image, std::vector<BasicColor*> basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory), animationFactorySpriteScaleUtil(AnimationFactorySpriteScaleUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->basicColorArray= basicColorArray;
    
}


                //@Throws(Exception.constructor)
            
    auto ColorCompositeSpriteIndexedAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    Sprite* sprite = this->animationFactorySpriteScaleUtil->createImage(this->getImage(), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new SpriteIndexedAnimation(sprite, this->getImage(), this->basicColorArray, this->animationBehaviorFactory->getOrCreateInstance());
    
}


                //@Throws(Exception.constructor)
            
    auto ColorCompositeSpriteIndexedAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getInstance(0);;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_COLORCOMPOSITESPRITEINDEXEDANIMATIONFACTORY_CPP
