
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

            #include <vector>
        
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

    public: static TitleAnimation createAnimation(std::vector<IndexedAnimation> animationInterfaceArray, std::vector<BasicColor> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: float deltaX= 0.0;

    public: float deltaY= 0.0;

    public: float deltaZ= 0.0;

    protected: std::vector<BasicColor> basicColorArray;

    protected: std::vector<int32_t> dxArray;

    protected: std::vector<int32_t> dyArray;

    protected: int32_t widthP;

    protected: std::vector<IndexedAnimation> animationInterfaceArray;

    protected: int32_t sizeP;

    protected: int32_t y;

    private: int64_t lastFrameStartTime;

    private: const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();

public: TitleAnimation(std::vector<IndexedAnimation> animationInterfaceArray, std::vector<BasicColor> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width, AnimationBehavior animationBehavior);

    public: void nextFrame();

    public: bool isComplete();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: int32_t getSize();

    public: int32_t getFrame();

    public: void setFrame(int32_t frame);

    public: void setLastFrame();

    public: void reset();

    public: void previousFrame();

    public: void paintFrameXY(Graphics graphics, int32_t frame, int32_t x, int32_t y);

    protected: const BasicColor CLEAR_COLOR = BasicColorFactory::getInstance().CLEAR_COLOR;

    public: void paintXY(Graphics graphics, int32_t ax, int32_t ay);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H
