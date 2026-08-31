
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
        

    private: startX: int32_t;

    private: startY: int32_t;

    private: drawWidth: int32_t;

    private: drawHeight: int32_t;

    private: circularIndexUtil: CircularIndexUtil;

    private: sequenceArray: std::vector<int32_t>;

protected constructor (Image image, std::vector<int32_t> sequenceArray, AnimationBehavior animationBehavior);

    public nextFrame();

    public previousFrame();

    public setFrame(int32_t index);

    public int32_t getFrame();

    public int32_t getSize();

    public setSequence(std::vector<int32_t> sequenceArray);

    public std::vector<int32_t> getSequence();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public int32_t getStartX();

    public setStartX(int32_t startX);

    public int32_t getStartY();

    public setStartY(int32_t startY);

    public int32_t getDrawWidth();

    public setDrawWidth(int32_t drawWidth);

    public int32_t getDrawHeight();

    public setDrawHeight(int32_t drawHeight);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGESEGMENTANIMATION_H
