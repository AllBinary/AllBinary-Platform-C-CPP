
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

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageSegmentAnimation.h"

class TopToBottomImageAnimation: public ImageSegmentAnimation {

    private: int32_t currentHeight;

public: TopToBottomImageAnimation(Image image, std::vector<int32_t> sequenceArray, AnimationBehavior animationBehavior);

    public: void nextFrame();

    public: void previousFrame();

    public: void setFrame(int32_t index);

    private: void update();

    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_H
