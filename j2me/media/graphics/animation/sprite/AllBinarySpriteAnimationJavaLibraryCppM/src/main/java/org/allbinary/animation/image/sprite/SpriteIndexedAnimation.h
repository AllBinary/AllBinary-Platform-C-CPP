
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class Sprite;
class AnimationBehavior;
#include <org/allbinary/animation/IndexedAnimation.h>
class BasicColor;
class BasicColorFactory;
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
class PrimitiveIntUtil;
class StringMaker;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpriteIndexedAnimation: public IndexedAnimation, public virtual ColorCompositeInterface {

    /*protected*/ public: Sprite* sprite;

    /*protected*/ public: Image* image;

    private: std::vector<BasicColor*> basicColorArray;

public: SpriteIndexedAnimation(Sprite* sprite, Image* image, std::vector<BasicColor*> basicColorArray, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: void setBasicColorP(BasicColor* basicColor);

    public: BasicColor* getBasicColorP();

    public: void paintFrame(Graphics* graphics, int32_t frame, int32_t x, int32_t y);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    /*protected*/ public: void paint(Graphics* graphics);

    public: void nextFrame();

    public: void previousFrame();

    public: int32_t getSize();

    public: void setFrame(int32_t frame);

    public: int32_t getFrame();

    public: bool isLastFrame();

    public: int32_t getLastFrame();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: void close();

                //@Throws(Throwable.constructor)
            
    /*protected*/ public: void finalize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_H_COMPLETE
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
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCompositeInterface.h>)
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif

        #endif
    
