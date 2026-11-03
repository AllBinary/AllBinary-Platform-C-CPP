
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Direction;
class DirectionUtil;
class LogUtil;
class BasicDecimal;
class AxisMathVectorUtil;
class StringMaker;
class StringUtil;
class Angle;
class PositionStrings;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicVelocityProperties
            : public virtual Object
        , public virtual BasicVelocityInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicDecimal* velocityXBasicDecimal;

    /*protected*/ public: BasicDecimal* velocityYBasicDecimal;

    /*protected*/ public: BasicDecimal* velocityZBasicDecimal;

    private: AxisMathVectorUtil* axisMathVectorUtil;

public: BasicVelocityProperties();

    public: void zero();

    public: BasicDecimal* getVelocityXBasicDecimalP();

    public: BasicDecimal* getVelocityYBasicDecimalP();

    public: BasicDecimal* getVelocityZBasicDecimalP();

    /*protected*/ public: DirectionUtil* directionUtil;

    public: void setVelocityWithBigDecimalAndDirection(BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);

    public: void setVelocityWithDirection(int64_t magnitude, Direction* direction, Direction* otherDirection);

    public: void addVelocityWithBigDecimalAndDirection(BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);

    public: void addVelocityWithDirection(int64_t magnitude, Direction* direction, Direction* otherDirection);

    public: void setVelocityWithBigDecimal(BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);

    public: void addVelocityWithBigDecimal(BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);

    public: void setVelocity(int64_t magnitude, Angle* angle, Angle* otherAngle);

    public: void addVelocity(int64_t magnitude, Angle* angle, Angle* otherAngle);

    public: void setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

    public: void addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H_COMPLETE
        #if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionUtil.h>)
#include <org/allbinary/direction/DirectionUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include(<org/allbinary/logic/math/vector/AxisMathVectorUtil.h>)
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityInterface.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"
#endif

        #endif
    
