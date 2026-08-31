
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H

            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialAnimation.h"

class TitleAnimation: public SpecialAnimation {
        

    public static TitleAnimation createAnimation(std::vector<IndexedAnimation> animationInterfaceArray, std::vector<BasicColor> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public deltaX: float= 0.0;

    public deltaY: float= 0.0;

    public deltaZ: float= 0.0;

    const basicColorArray: std::vector<BasicColor>;

    const dxArray: std::vector<int32_t>;

    const dyArray: std::vector<int32_t>;

    const widthP: int32_t;

    const animationInterfaceArray: std::vector<IndexedAnimation>;

    const sizeP: int32_t;

    const y: int32_t;

    private: lastFrameStartTime: int64_t;

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

public constructor (std::vector<IndexedAnimation> animationInterfaceArray, std::vector<BasicColor> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width, AnimationBehavior animationBehavior);

    public nextFrame();

    public bool isComplete();

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

    public int32_t getSize();

    public int32_t getFrame();

    public setFrame(int32_t frame);

    public setLastFrame();

    public reset();

    public previousFrame();

    public paintFrameXY(Graphics graphics, int32_t frame, int32_t x, int32_t y);

    const CLEAR_COLOR: BasicColor = BasicColorFactory.getInstance()!.CLEAR_COLOR;

    public paintXY(Graphics graphics, int32_t ax, int32_t ay);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H
