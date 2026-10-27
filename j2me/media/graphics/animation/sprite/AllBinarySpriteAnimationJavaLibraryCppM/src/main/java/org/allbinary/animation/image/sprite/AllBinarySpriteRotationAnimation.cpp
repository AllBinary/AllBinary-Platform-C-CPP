
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/HackRotationSpriteIndexedAnimation.h"


AllBinarySpriteRotationAnimation::AllBinarySpriteRotationAnimation(Sprite* sprite, Image* image, AnimationBehavior* animationBehavior) : HackRotationSpriteIndexedAnimation(sprite, image, AngleInfo::getInstance((AngleFactory::getInstance()->TOTAL_ANGLE /sprite->getRawFrameCount())), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleInfo->adjustAngle(this->sprite->getFrame());
    
}


    auto AllBinarySpriteRotationAnimation::nextRotation() -> void{
this->sprite->nextFrame();
    
this->angleInfo->adjustAngle(this->sprite->getFrame());
    
}


    auto AllBinarySpriteRotationAnimation::previousRotation() -> void{
this->sprite->prevFrame();
    
this->angleInfo->adjustAngle(this->sprite->getFrame());
    
}


    auto AllBinarySpriteRotationAnimation::setFrameByDirection(Direction* direction) -> void{

    Angle* angle = this->directionUtil->getFrameAngle(direction);;
    
this->adjustFrameToAngle(angle);
    
}


    auto AllBinarySpriteRotationAnimation::setFrameToAngle(Angle* angle) -> void{
this->adjustFrameToAngle(angle);
    
}


    auto AllBinarySpriteRotationAnimation::setFrame(int32_t index) -> void{
this->sprite->setFrame(index);
    
this->angleInfo->adjustAngle(this->getFrame());
    
}


    auto AllBinarySpriteRotationAnimation::adjustFrameToAngle(Angle* angle) -> void{
this->adjustFrame(angle->getValue());
    
}


    auto AllBinarySpriteRotationAnimation::adjustFrame(int16_t angle) -> void{
this->setFrame(this->frameUtil->getFrameForAngle(angle, static_cast<int32_t>(this->angleInfo->getAngleIncrementInfo()->getAngleIncrement())));
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_CPP
