
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Direction;
class DirectionUtil;
class StringMaker;
class Angle;
class AngleInfo;
class FrameUtil;
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"
class AnimationBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RotationAnimation: public IndexedAnimation, public virtual RotationAnimationInterface {

    /*protected*/ public: FrameUtil* frameUtil;

    /*protected*/ public: DirectionUtil* directionUtil;

    /*protected*/ public: AngleInfo* angleInfo;

    /*protected*/ public: CircularIndexUtil* circularIndexUtil;

/*protected*/ public: RotationAnimation(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior);

    public: void nextRotationX();

    public: void previousRotationX();

    public: void nextRotation();

    public: void previousRotation();

    public: void nextRotationZ();

    public: void previousRotationZ();

    public: void setFrame(int32_t index);

    public: void setFrameByDirection(Direction* direction);

    public: void setFrameToAngle(Angle* angle);

    public: void adjustFrameToAngle(Angle* angle);

    public: void adjustFrame(int16_t angle);

    public: int32_t getFrame();

    public: int32_t getSize();

    public: AngleInfo* getAngleInfoP();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H_COMPLETE
        #if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionUtil.h>)
#include <org/allbinary/direction/DirectionUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/math/FrameUtil.h>)
#include <org/allbinary/math/FrameUtil.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimationInterface.h")
#include "org/allbinary/animation/RotationAnimationInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehavior.h")
#include "org/allbinary/animation/AnimationBehavior.h"
#endif

        #endif
    
