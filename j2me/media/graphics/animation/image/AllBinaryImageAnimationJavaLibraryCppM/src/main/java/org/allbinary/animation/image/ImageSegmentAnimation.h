
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_H

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageAnimation.h"

class ImageSegmentAnimation: public ImageAnimation {

    private: int32_t startX;

    private: int32_t startY;

    private: int32_t drawWidth;

    private: int32_t drawHeight;

    private: CircularIndexUtil circularIndexUtil;

    private: std::vector<int32_t> sequenceArray;

protected: ImageSegmentAnimation(Image image, std::vector<int32_t> sequenceArray, AnimationBehavior animationBehavior);

    public: void nextFrame();

    public: void previousFrame();

    public: void setFrame(int32_t index);

    public: int32_t getFrame();

    public: int32_t getSize();

    public: void setSequence(std::vector<int32_t> sequenceArray);

    public: std::vector<int32_t> getSequence();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: int32_t getStartX();

    public: void setStartX(int32_t startX);

    public: int32_t getStartY();

    public: void setStartY(int32_t startY);

    public: int32_t getDrawWidth();

    public: void setDrawWidth(int32_t drawWidth);

    public: int32_t getDrawHeight();

    public: void setDrawHeight(int32_t drawHeight);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_H
