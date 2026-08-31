
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicVelocityInterface.h"

class BasicVelocityProperties
            : public Object
        : public BasicVelocityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const velocityXBasicDecimal: BasicDecimal;

    const velocityYBasicDecimal: BasicDecimal;

    const velocityZBasicDecimal: BasicDecimal;

    private: const axisMathVectorUtil: AxisMathVectorUtil = AxisMathVectorUtil.getInstance()!;

public constructor ();

    public zero();

    public BasicDecimal getVelocityXBasicDecimalP();

    public BasicDecimal getVelocityYBasicDecimalP();

    public BasicDecimal getVelocityZBasicDecimalP();

    const directionUtil: DirectionUtil = DirectionUtil.getInstance()!;

    public setVelocityWithBigDecimalAndDirection(BasicDecimal magnitudeBasicDecimal, Direction direction, Direction otherDirection);

    public setVelocityWithDirection(int64_t magnitude, Direction direction, Direction otherDirection);

    public addVelocityWithBigDecimalAndDirection(BasicDecimal magnitudeBasicDecimal, Direction direction, Direction otherDirection);

    public addVelocityWithDirection(int64_t magnitude, Direction direction, Direction otherDirection);

    public setVelocityWithBigDecimal(BasicDecimal magnitudeBasicDecimal, Angle angle, Angle otherAngle);

    public addVelocityWithBigDecimal(BasicDecimal magnitudeBasicDecimal, Angle angle, Angle otherAngle);

    public setVelocity(int64_t magnitude, Angle angle, Angle otherAngle);

    public addVelocity(int64_t magnitude, Angle angle, Angle otherAngle);

    public setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

    public addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H
