
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

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/FrameUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "RotationAnimationInterface.h"
#include "AnimationBehavior.h"

class RotationAnimation: public IndexedAnimation: public RotationAnimationInterface {
        

    const frameUtil: FrameUtil = FrameUtil.getInstance()!;

    const directionUtil: DirectionUtil = DirectionUtil.getInstance()!;

    const angleInfo: AngleInfo;

    circularIndexUtil: CircularIndexUtil;

protected constructor (AngleInfo angleInfo, CircularIndexUtil circularIndexUtil, AnimationBehavior animationBehavior);

    public nextRotationX();

    public previousRotationX();

    public nextRotation();

    public previousRotation();

    public nextRotationZ();

    public previousRotationZ();

    public setFrame(int32_t index);

    public setFrameByDirection(Direction direction);

    public setFrameToAngle(Angle angle);

    public adjustFrameToAngle(Angle angle);

    public adjustFrame(int16_t angle);

    public int32_t getFrame();

    public int32_t getSize();

    public AngleInfo getAngleInfoP();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ROTATIONANIMATION_H
