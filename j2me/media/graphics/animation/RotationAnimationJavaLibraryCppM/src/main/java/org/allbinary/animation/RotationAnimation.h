
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

#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/FrameUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "RotationAnimationInterface.h"
#include "AnimationBehavior.h"

class RotationAnimation: public IndexedAnimation, public RotationAnimationInterface {

    protected: const FrameUtil frameUtil = FrameUtil::getInstance();

    protected: const DirectionUtil directionUtil = DirectionUtil::getInstance();

    protected: AngleInfo angleInfo;

    protected: CircularIndexUtil circularIndexUtil;

protected: RotationAnimation(AngleInfo angleInfo, CircularIndexUtil circularIndexUtil, AnimationBehavior animationBehavior);

    public: void nextRotationX();

    public: void previousRotationX();

    public: void nextRotation();

    public: void previousRotation();

    public: void nextRotationZ();

    public: void previousRotationZ();

    public: void setFrame(int32_t index);

    public: void setFrameByDirection(Direction direction);

    public: void setFrameToAngle(Angle angle);

    public: void adjustFrameToAngle(Angle angle);

    public: void adjustFrame(int16_t angle);

    public: int32_t getFrame();

    public: int32_t getSize();

    public: AngleInfo getAngleInfoP();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H
