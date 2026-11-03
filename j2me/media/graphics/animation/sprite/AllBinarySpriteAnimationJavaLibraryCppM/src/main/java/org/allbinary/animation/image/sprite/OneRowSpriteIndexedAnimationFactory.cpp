
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/sprite/OneRowSpriteIndexedAnimationFactory.h"
        

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


                //@Throws(Exception.constructor)
            
    auto OneRowSpriteIndexedAnimationFactory::createFactoryDX(Image* image, int32_t dx, AnimationBehaviorFactory* animationBehaviorFactory) -> OneRowSpriteIndexedAnimationFactory*{

    OneRowSpriteIndexedAnimationFactory* oneRowSpriteIndexedAnimationFactory = new OneRowSpriteIndexedAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), image->getHeight(), image->getHeight(), 0, 0, animationBehaviorFactory);;
    
oneRowSpriteIndexedAnimationFactory->initW(dx);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return oneRowSpriteIndexedAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto OneRowSpriteIndexedAnimationFactory::createFactoryDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) -> OneRowSpriteIndexedAnimationFactory*{

    OneRowSpriteIndexedAnimationFactory* oneRowSpriteIndexedAnimationFactory = new OneRowSpriteIndexedAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), image->getHeight(), image->getHeight(), 0, 0, animationBehaviorFactory);;
    
oneRowSpriteIndexedAnimationFactory->init(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return oneRowSpriteIndexedAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto OneRowSpriteIndexedAnimationFactory::createFactoryWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) -> OneRowSpriteIndexedAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new OneRowSpriteIndexedAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
    
}


                //@Throws(Exception.constructor)
            
    auto OneRowSpriteIndexedAnimationFactory::createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) -> OneRowSpriteIndexedAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new OneRowSpriteIndexedAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), image->getHeight(), image->getHeight(), 0, 0, animationBehaviorFactory);
    
}


OneRowSpriteIndexedAnimationFactory::OneRowSpriteIndexedAnimationFactory(Image* image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, sequenceArray, width, height, dx, dy, animationBehaviorFactory), animationFactorySpriteScaleUtil(AnimationFactorySpriteScaleUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto OneRowSpriteIndexedAnimationFactory::init(int32_t dx, int32_t dy) -> void{
this->animationFactoryInitializationVisitor->dx= dx;
    
this->animationFactoryInitializationVisitor->dy= dy;
    
}


    auto OneRowSpriteIndexedAnimationFactory::initW(int32_t dx) -> void{
this->init(dx, 0);
    
this->animationFactoryInitializationVisitor->dx +=  -(this->animationFactoryInitializationVisitor->width>>2);
    
}


                //@Throws(Exception.constructor)
            
    auto OneRowSpriteIndexedAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    Sprite* sprite = this->animationFactorySpriteScaleUtil->createImage(this->getImage(), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);;
    

                        if(this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AdjustedSpriteIndexedAnimation(sprite, this->getImage(), BasicColorUtil::getInstance()->ZERO_ARRAY, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, this->animationBehaviorFactory->getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new SpriteIndexedAnimation(sprite, this->getImage(), BasicColorUtil::getInstance()->ZERO_ARRAY, this->animationBehaviorFactory->getOrCreateInstance());
    

                        }
                            
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_CPP
