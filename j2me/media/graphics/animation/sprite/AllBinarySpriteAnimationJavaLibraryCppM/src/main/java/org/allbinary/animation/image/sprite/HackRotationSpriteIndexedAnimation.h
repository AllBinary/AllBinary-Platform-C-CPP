
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

            #include <vector>
        
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
        
class HackRotationSpriteIndexedAnimation: public RotationAnimation {

    protected: Sprite sprite;

    private: Image image;

public: HackRotationSpriteIndexedAnimation(Sprite sprite, Image image, AngleInfo angleInfo, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: void paintFrame(Graphics g, int32_t frame, int32_t x, int32_t y);

    public: void paintXY(Graphics g, int32_t x, int32_t y);

    protected: void paint(Graphics g);

    public: void nextRotation();

    public: void previousRotation();

    public: int32_t getSize();

    public: void setFrame(int32_t frame);

    public: int32_t getFrame();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_HACKROTATIONSPRITEINDEXEDANIMATION_H
