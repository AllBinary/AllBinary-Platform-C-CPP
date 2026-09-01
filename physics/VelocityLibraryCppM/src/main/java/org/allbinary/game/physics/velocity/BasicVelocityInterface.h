
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYINTERFACE_H
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYINTERFACE_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicVelocityInterface {

    BasicDecimal getVelocityXBasicDecimalP();

    BasicDecimal getVelocityYBasicDecimalP();

    void zero();

    void setVelocityWithBigDecimalAndDirection(BasicDecimal magnitudeBasicDecimal, Direction direction, Direction otherDirection);

    void addVelocityWithBigDecimalAndDirection(BasicDecimal magnitudeBasicDecimal, Direction direction, Direction otherDirection);

    void setVelocityWithDirection(int64_t magnitude, Direction direction, Direction otherDirection);

    void addVelocityWithDirection(int64_t magnitude, Direction direction, Direction otherDirection);

    void setVelocityWithBigDecimal(BasicDecimal magnitudeBasicDecimal, Angle angle, Angle otherAngle);

    void addVelocityWithBigDecimal(BasicDecimal magnitudeBasicDecimal, Angle angle, Angle otherAngle);

    void setVelocity(int64_t magnitude, Angle angle, Angle otherAngle);

    void addVelocity(int64_t magnitude, Angle angle, Angle otherAngle);

    void addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYINTERFACE_H
