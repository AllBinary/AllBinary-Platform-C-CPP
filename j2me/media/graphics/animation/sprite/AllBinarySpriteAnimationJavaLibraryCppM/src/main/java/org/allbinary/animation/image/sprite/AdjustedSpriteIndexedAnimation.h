
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ADJUSTEDSPRITEINDEXEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ADJUSTEDSPRITEINDEXEDANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class Sprite;
class AnimationBehavior;
class BasicColor;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdjustedSpriteIndexedAnimation: public SpriteIndexedAnimation {

    private: int32_t dx;

    private: int32_t dy;

public: AdjustedSpriteIndexedAnimation(Sprite* sprite, Image* image, std::vector<BasicColor*> basicColorArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

    public: void paintFrame(Graphics* graphics, int32_t frame, int32_t x, int32_t y);

    public: void paintXY(Graphics* g, int32_t x, int32_t y);

    public: void paint(Graphics* g);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ADJUSTEDSPRITEINDEXEDANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ADJUSTEDSPRITEINDEXEDANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ADJUSTEDSPRITEINDEXEDANIMATION_H_COMPLETE
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
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif

#if __has_include("org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h")
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
#endif

        #endif
    
