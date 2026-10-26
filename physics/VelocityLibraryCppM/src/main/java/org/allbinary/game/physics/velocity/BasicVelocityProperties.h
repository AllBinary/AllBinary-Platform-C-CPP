
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

            #include "java/lang/Object.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicVelocityInterface.h"

class BasicVelocityProperties
            : public Object
        : public BasicVelocityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: BasicDecimal velocityXBasicDecimal;

    protected: BasicDecimal velocityYBasicDecimal;

    protected: BasicDecimal velocityZBasicDecimal;

    private: const AxisMathVectorUtil axisMathVectorUtil = AxisMathVectorUtil::getInstance();

public: BasicVelocityProperties();

    public: void zero();

    public: BasicDecimal getVelocityXBasicDecimalP();

    public: BasicDecimal getVelocityYBasicDecimalP();

    public: BasicDecimal getVelocityZBasicDecimalP();

    protected: const DirectionUtil directionUtil = DirectionUtil::getInstance();

    public: void setVelocityWithBigDecimalAndDirection(BasicDecimal magnitudeBasicDecimal, Direction direction, Direction otherDirection);

    public: void setVelocityWithDirection(int64_t magnitude, Direction direction, Direction otherDirection);

    public: void addVelocityWithBigDecimalAndDirection(BasicDecimal magnitudeBasicDecimal, Direction direction, Direction otherDirection);

    public: void addVelocityWithDirection(int64_t magnitude, Direction direction, Direction otherDirection);

    public: void setVelocityWithBigDecimal(BasicDecimal magnitudeBasicDecimal, Angle angle, Angle otherAngle);

    public: void addVelocityWithBigDecimal(BasicDecimal magnitudeBasicDecimal, Angle angle, Angle otherAngle);

    public: void setVelocity(int64_t magnitude, Angle angle, Angle otherAngle);

    public: void addVelocity(int64_t magnitude, Angle angle, Angle otherAngle);

    public: void setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

    public: void addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H
