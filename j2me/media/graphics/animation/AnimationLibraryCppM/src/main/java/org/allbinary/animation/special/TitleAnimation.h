
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
class Graphics;
class AnimationBehavior;
class IndexedAnimation;
class IndexedAnimationBehavior;
class BasicColor;
class BasicColorFactory;
class DisplayInfoSingleton;
class ABSystemWrapper;
class PrimitiveIntUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/special/SpecialAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TitleAnimation: public SpecialAnimation {

    public: static TitleAnimation* createAnimation(std::vector<IndexedAnimation*> animationInterfaceArray, std::vector<BasicColor*> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width);

    /*protected*/ public: ABSystemWrapper* systemWrapper;

    public: float deltaX= 0.0;

    public: float deltaY= 0.0;

    public: float deltaZ= 0.0;

    /*protected*/ public: std::vector<BasicColor*> basicColorArray;

    /*protected*/ public: std::vector<int32_t> dxArray;

    /*protected*/ public: std::vector<int32_t> dyArray;

    /*protected*/ public: int32_t widthP;

    /*protected*/ public: std::vector<IndexedAnimation*> animationInterfaceArray;

    /*protected*/ public: int32_t sizeP;

    /*protected*/ public: int32_t y;

    private: int64_t lastFrameStartTime;

    private: DisplayInfoSingleton* displayInfoSingleton;

public: TitleAnimation(std::vector<IndexedAnimation*> animationInterfaceArray, std::vector<BasicColor*> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior);

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

    public: void paintFrameXY(Graphics* graphics, int32_t frame, int32_t x, int32_t y);

    /*protected*/ public: BasicColor* CLEAR_COLOR;

    public: void paintXY(Graphics* graphics, int32_t ax, int32_t ay);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_SPECIAL_TITLEANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimationBehavior.h>)
#include <org/allbinary/animation/IndexedAnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/ABSystemWrapper.h>)
#include <org/allbinary/logic/ABSystemWrapper.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include("org/allbinary/animation/special/SpecialAnimation.h")
#include "org/allbinary/animation/special/SpecialAnimation.h"
#endif

        #endif
    
