
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"

class AllBinaryAdjustedSpriteRotationAnimation: public AllBinarySpriteRotationAnimation {

    private: int32_t dx;

    private: int32_t dy;

public: AllBinaryAdjustedSpriteRotationAnimation(Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

    public: void paintXY(Graphics* g, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_H
