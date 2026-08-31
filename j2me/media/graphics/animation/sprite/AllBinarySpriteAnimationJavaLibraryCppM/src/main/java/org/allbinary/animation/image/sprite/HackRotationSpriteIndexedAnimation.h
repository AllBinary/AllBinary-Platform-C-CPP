
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_HACKROTATIONSPRITEINDEXEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_HACKROTATIONSPRITEINDEXEDANIMATION_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HackRotationSpriteIndexedAnimation: public RotationAnimation {
        

    const sprite: Sprite;

    private: const image: Image;

public constructor (Sprite sprite, Image image, AngleInfo angleInfo, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize();

    public paintFrame(Graphics g, int32_t frame, int32_t x, int32_t y);

    public paintXY(Graphics g, int32_t x, int32_t y);

    paint(Graphics g);

    public nextRotation();

    public previousRotation();

    public int32_t getSize();

    public setFrame(int32_t frame);

    public int32_t getFrame();

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_HACKROTATIONSPRITEINDEXEDANIMATION_H
