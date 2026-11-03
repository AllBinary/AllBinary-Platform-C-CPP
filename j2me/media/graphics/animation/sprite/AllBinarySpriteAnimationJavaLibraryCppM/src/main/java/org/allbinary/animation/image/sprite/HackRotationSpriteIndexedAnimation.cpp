
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_HACKROTATIONSPRITEINDEXEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_HACKROTATIONSPRITEINDEXEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/sprite/HackRotationSpriteIndexedAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HackRotationSpriteIndexedAnimation::HackRotationSpriteIndexedAnimation(Sprite* sprite, Image* image, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) : RotationAnimation(angleInfo, CircularIndexUtil::createInstance(360 /angleInfo->getAngleIncrementInfo()->getAngleIncrement()), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->sprite= sprite;
    
this->image= image;
    
}


                //@Throws(Exception.constructor)
            
    auto HackRotationSpriteIndexedAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSize();;
    
}


    auto HackRotationSpriteIndexedAnimation::paintFrame(Graphics* g, int32_t frame, int32_t x, int32_t y) -> void{
this->setFrame(frame);
    
this->paintXY(g, x, y);
    
}


    auto HackRotationSpriteIndexedAnimation::paintXY(Graphics* g, int32_t x, int32_t y) -> void{
this->sprite->setPosition(x, y);
    
this->paint(g);
    
}


    auto HackRotationSpriteIndexedAnimation::paint(Graphics* g) -> void{
this->sprite->paint(g);
    
}


    auto HackRotationSpriteIndexedAnimation::nextRotation() -> void{
this->sprite->nextFrame();
    
}


    auto HackRotationSpriteIndexedAnimation::previousRotation() -> void{
this->sprite->prevFrame();
    
}


    auto HackRotationSpriteIndexedAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sprite->getRawFrameCount();;
    
}


    auto HackRotationSpriteIndexedAnimation::setFrame(int32_t frame) -> void{
this->sprite->setFrame(frame);
    
}


    auto HackRotationSpriteIndexedAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sprite->getFrame();;
    
}


    auto HackRotationSpriteIndexedAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto HackRotationSpriteIndexedAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_HACKROTATIONSPRITEINDEXEDANIMATION_CPP
