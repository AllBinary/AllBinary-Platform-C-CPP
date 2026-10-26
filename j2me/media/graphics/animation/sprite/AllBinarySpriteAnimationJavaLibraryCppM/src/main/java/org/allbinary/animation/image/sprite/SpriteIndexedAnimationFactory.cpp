
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
        #include "SpriteIndexedAnimation.h"
#include "AdjustedSpriteIndexedAnimation.h"

class SpriteIndexedAnimationFactory: public BaseImageAnimationFactory, public ProceduralAnimationInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory createCWHDXY(Image image, std::vector<BasicColor> basicColorArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpriteIndexedAnimationFactory(image, basicColorArray, PrimitiveIntUtil::getArrayInstance(), width, height, dx, dy, animationBehaviorFactory);
    
}


                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory createCWH(Image image, std::vector<BasicColor> basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory animationBehaviorFactory){

    SpriteIndexedAnimationFactory spriteIndexedAnimationFactory = SpriteIndexedAnimationFactory(image, basicColorArray, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);;
    
spriteIndexedAnimationFactory.initHWH();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return spriteIndexedAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: static SpriteIndexedAnimationFactory createWH(Image image, int32_t width, int32_t height, AnimationBehaviorFactory animationBehaviorFactory){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpriteIndexedAnimationFactory(image, BasicColorUtil::getInstance().ZERO_ARRAY, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
    
}


    private: const AnimationFactorySpriteScaleUtil animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil::getInstance();

    private: std::vector<BasicColor> basicColorArray = BasicColorUtil::getInstance().ZERO_ARRAY;

private: SpriteIndexedAnimationFactory(Image image, std::vector<BasicColor> basicColorArray, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory) : BaseImageAnimationFactory(image, sequenceArray, width, height, dx, dy, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->basicColorArray= basicColorArray;
    
}


    private: void initHWH(){
this->animationFactoryInitializationVisitor.dx=  -(this->animationFactoryInitializationVisitor.width>>2);
    
this->animationFactoryInitializationVisitor.dy=  -(this->animationFactoryInitializationVisitor.height>>2);
    

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    this->animationFactoryInitializationVisitor.dx += 3;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){

    Sprite sprite = this->animationFactorySpriteScaleUtil.createImage(this->getImage(), this->animationFactoryInitializationVisitor.width, this->animationFactoryInitializationVisitor.height, this->scaleProperties.scaleWidth, this->scaleProperties.scaleHeight);;
    

                        if(this->animationFactoryInitializationVisitor.dx != 0 || this->animationFactoryInitializationVisitor.dy != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdjustedSpriteIndexedAnimation(sprite, this->getImage(), this->basicColorArray, this->animationFactoryInitializationVisitor.dx, this->animationFactoryInitializationVisitor.dy, this->animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpriteIndexedAnimation(sprite, this->getImage(), this->basicColorArray, this->animationBehaviorFactory.getOrCreateInstance());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstanceAnimation(Animation animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(0);;
    
}


};

            

