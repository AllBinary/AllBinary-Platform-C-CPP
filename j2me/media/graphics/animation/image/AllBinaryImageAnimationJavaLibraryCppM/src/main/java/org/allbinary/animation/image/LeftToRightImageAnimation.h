
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATION_H

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageSegmentAnimation.h"

class LeftToRightImageAnimation: public ImageSegmentAnimation {

    private: int32_t currentWidth;

public: LeftToRightImageAnimation(Image image, std::vector<int32_t> sequenceArray, AnimationBehavior animationBehavior);

    public: void nextFrame();

    public: void previousFrame();

    public: void setFrame(int32_t index);

    private: void update();

    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATION_H
