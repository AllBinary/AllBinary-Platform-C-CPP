
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/sprite/SpriteIndexedAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
#include "org/allbinary/animation/image/sprite/AdjustedSpriteIndexedAnimation.h"


                //@Throws(Exception.constructor)
            
    auto SpriteIndexedAnimationFactory::createCWHDXY(Image* image, std::vector<BasicColor*> basicColorArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) -> SpriteIndexedAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new SpriteIndexedAnimationFactory(image, basicColorArray, PrimitiveIntUtil::getArrayInstance(), width, height, dx, dy, animationBehaviorFactory);
    
}


                //@Throws(Exception.constructor)
            
    auto SpriteIndexedAnimationFactory::createCWH(Image* image, std::vector<BasicColor*> basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) -> SpriteIndexedAnimationFactory*{

    SpriteIndexedAnimationFactory* spriteIndexedAnimationFactory = new SpriteIndexedAnimationFactory(image, basicColorArray, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);;
    
spriteIndexedAnimationFactory->initHWH();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return spriteIndexedAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto SpriteIndexedAnimationFactory::createWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) -> SpriteIndexedAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new SpriteIndexedAnimationFactory(image, BasicColorUtil::getInstance()->ZERO_ARRAY, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
    
}


SpriteIndexedAnimationFactory::SpriteIndexedAnimationFactory(Image* image, std::vector<BasicColor*> basicColorArray, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, sequenceArray, width, height, dx, dy, animationBehaviorFactory), animationFactorySpriteScaleUtil(AnimationFactorySpriteScaleUtil::getInstance()), basicColorArray(BasicColorUtil::getInstance()->ZERO_ARRAY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->basicColorArray= basicColorArray;
    
}


    auto SpriteIndexedAnimationFactory::initHWH() -> void{
this->animationFactoryInitializationVisitor->dx=  -(this->animationFactoryInitializationVisitor->width>>2);
    
this->animationFactoryInitializationVisitor->dy=  -(this->animationFactoryInitializationVisitor->height>>2);
    

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    this->animationFactoryInitializationVisitor->dx += 3;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto SpriteIndexedAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    Sprite* sprite = this->animationFactorySpriteScaleUtil->createImage(this->getImage(), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);;
    

                        if(this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AdjustedSpriteIndexedAnimation(sprite, this->getImage(), this->basicColorArray, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, this->animationBehaviorFactory->getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new SpriteIndexedAnimation(sprite, this->getImage(), this->basicColorArray, this->animationBehaviorFactory->getOrCreateInstance());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto SpriteIndexedAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getInstance(0);;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_CPP
