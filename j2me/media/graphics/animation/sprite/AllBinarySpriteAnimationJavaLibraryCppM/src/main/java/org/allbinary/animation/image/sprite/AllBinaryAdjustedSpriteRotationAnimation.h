
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class Image;
class Sprite;
class AnimationBehavior;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryAdjustedSpriteRotationAnimation: public AllBinarySpriteRotationAnimation {

    private: int32_t dx;

    private: int32_t dy;

public: AllBinaryAdjustedSpriteRotationAnimation(Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

    public: void paintXY(Graphics* g, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/game/Sprite.h>)
#include <javax/microedition/lcdui/game/Sprite.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include("org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h")
#include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"
#endif

        #endif
    
