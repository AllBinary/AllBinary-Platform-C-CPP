
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Image;
class Sprite;
class AnimationBehavior;
class Direction;
class Angle;
class AngleFactory;
class AngleInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/HackRotationSpriteIndexedAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinarySpriteRotationAnimation: public HackRotationSpriteIndexedAnimation {

public: AllBinarySpriteRotationAnimation(Sprite* sprite, Image* image, AnimationBehavior* animationBehavior);

    public: void nextRotation();

    public: void previousRotation();

    public: void setFrameByDirection(Direction* direction);

    public: void setFrameToAngle(Angle* angle);

    public: void setFrame(int32_t index);

    public: void adjustFrameToAngle(Angle* angle);

    public: void adjustFrame(int16_t angle);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/game/Sprite.h>)
#include <javax/microedition/lcdui/game/Sprite.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include("org/allbinary/animation/image/sprite/HackRotationSpriteIndexedAnimation.h")
#include "org/allbinary/animation/image/sprite/HackRotationSpriteIndexedAnimation.h"
#endif

        #endif
    
