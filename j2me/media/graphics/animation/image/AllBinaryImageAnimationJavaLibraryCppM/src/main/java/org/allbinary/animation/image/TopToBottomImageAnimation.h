
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageSegmentAnimation.h"

class TopToBottomImageAnimation: public ImageSegmentAnimation {
        

    private: currentHeight: int32_t;

public constructor (Image image, std::vector<int32_t> sequenceArray, AnimationBehavior animationBehavior);

    public nextFrame();

    public previousFrame();

    public setFrame(int32_t index);

    update();

    private: anchor: int32_t = Anchor.TOP_LEFT;

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_H
