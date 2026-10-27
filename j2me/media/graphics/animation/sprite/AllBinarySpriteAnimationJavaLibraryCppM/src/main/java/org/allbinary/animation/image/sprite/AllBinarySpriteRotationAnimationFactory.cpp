
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

      
#include <org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"
#include "org/allbinary/animation/image/sprite/AllBinaryAdjustedSpriteRotationAnimation.h"

class AllBinarySpriteRotationAnimationFactory: public BaseImageAnimationFactory, public ProceduralAnimationInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory* createWHDY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory){

    AllBinarySpriteRotationAnimationFactory* spriteRotationAnimationFactory = new AllBinarySpriteRotationAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), (image->getHeight()>>2), (image->getHeight()>>2), 0, 0, animationBehaviorFactory);;
    
spriteRotationAnimationFactory->initWH(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return spriteRotationAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory* createWH(Image* image, AnimationBehaviorFactory* animationBehaviorFactory){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinarySpriteRotationAnimationFactory::createWHDY(image, 0, 0, animationBehaviorFactory);;
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory* createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory){

    AllBinarySpriteRotationAnimationFactory* spriteRotationAnimationFactory = new AllBinarySpriteRotationAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), image->getHeight(), image->getHeight(), 0, 0, animationBehaviorFactory);;
    
spriteRotationAnimationFactory->init(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return spriteRotationAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory* createDXYQ(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory){

    AllBinarySpriteRotationAnimationFactory* spriteRotationAnimationFactory = new AllBinarySpriteRotationAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), (image->getHeight()>>2), (image->getHeight()>>2), 0, 0, animationBehaviorFactory);;
    
spriteRotationAnimationFactory->init(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return spriteRotationAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory* createQ(Image* image, AnimationBehaviorFactory* animationBehaviorFactory){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AllBinarySpriteRotationAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), (image->getHeight()>>2), (image->getHeight()>>2), 0, 0, animationBehaviorFactory);
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinarySpriteRotationAnimationFactory* createWHF(Image* image, AnimationBehaviorFactory* animationBehaviorFactory){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AllBinarySpriteRotationAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), image->getHeight(), image->getHeight(), 0, 0, animationBehaviorFactory);
    
}


    private: AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil::getInstance();

public: AllBinarySpriteRotationAnimationFactory(Image* image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, sequenceArray, width, height, dx, dy, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(animationBehaviorFactory == AnimationBehaviorFactory::getInstance())
                        
                                    {
                                    ForcedLogUtil::log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
    

                                    }
                                
}


    public: void init(int32_t dx, int32_t dy){
this->animationFactoryInitializationVisitor.dx= dx;
    
this->animationFactoryInitializationVisitor.dy= dy;
    
}


    private: void initWH(int32_t dx, int32_t dy){
this->init(dx, dy);
    
this->animationFactoryInitializationVisitor.dx +=  -this->animationFactoryInitializationVisitor.width /5;
    
this->animationFactoryInitializationVisitor.dy +=  -this->animationFactoryInitializationVisitor.height /5;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId){

    Sprite* sprite = this->animationFactorySpriteScaleUtil->createImage(this->getImage(), this->animationFactoryInitializationVisitor.width, this->animationFactoryInitializationVisitor.height, this->scaleProperties.scaleWidth, this->scaleProperties.scaleHeight);;
    

                        if(this->animationFactoryInitializationVisitor.dx != 0 || this->animationFactoryInitializationVisitor.dy != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AllBinaryAdjustedSpriteRotationAnimation(sprite, this->getImage(), this->animationFactoryInitializationVisitor.dx, this->animationFactoryInitializationVisitor.dy, this->animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AllBinarySpriteRotationAnimation(sprite, this->getImage(), this->animationBehaviorFactory.getOrCreateInstance());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(0);;
    
}


};

            

