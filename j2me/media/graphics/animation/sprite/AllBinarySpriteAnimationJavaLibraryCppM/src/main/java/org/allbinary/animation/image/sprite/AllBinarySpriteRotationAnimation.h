
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_H

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HackRotationSpriteIndexedAnimation.h"

class AllBinarySpriteRotationAnimation: public HackRotationSpriteIndexedAnimation {
        

public constructor (Sprite sprite, Image image, AnimationBehavior animationBehavior);

    public nextRotation();

    public previousRotation();

    public setFrameByDirection(Direction direction);

    public setFrameToAngle(Angle angle);

    public setFrame(int32_t index);

    public adjustFrameToAngle(Angle angle);

    public adjustFrame(int16_t angle);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_H
