
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/sprite/AllBinaryAdjustedSpriteRotationAnimation.h"
        

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


AllBinaryAdjustedSpriteRotationAnimation::AllBinaryAdjustedSpriteRotationAnimation(Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) : AllBinarySpriteRotationAnimation(sprite, image, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->dx= dx;
    
this->dy= dy;
    
}


    auto AllBinaryAdjustedSpriteRotationAnimation::paintXY(Graphics* g, int32_t x, int32_t y) -> void{
this->sprite->setPosition(x +this->dx, y +this->dy);
    
this->paint(g);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYADJUSTEDSPRITEROTATIONANIMATION_CPP
