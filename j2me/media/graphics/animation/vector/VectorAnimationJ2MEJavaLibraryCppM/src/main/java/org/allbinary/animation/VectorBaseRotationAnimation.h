
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class BasicColor;
class NullUtil;
class PrimitiveIntUtil;
class AngleInfo;
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"
class AnimationBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorBaseRotationAnimation: public RotationAnimation, public virtual VectorAnimationInterface {

    private: std::vector<std::vector<std::vector<int32_t>>> currentPoints;

public: VectorBaseRotationAnimation(AngleInfo* angleInfo, std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: int32_t getFrame();

    public: void setFrame(int32_t index);

    public: void nextFrame();

    public: void previousFrame();

    public: int32_t getSize();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: std::vector<std::vector<int32_t>> getPoints(int32_t frame);

    public: void setPoints(std::vector<std::vector<std::vector<int32_t>>> currentPoints);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/VectorAnimationInterface.h")
#include "org/allbinary/animation/VectorAnimationInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehavior.h")
#include "org/allbinary/animation/AnimationBehavior.h"
#endif

        #endif
    
