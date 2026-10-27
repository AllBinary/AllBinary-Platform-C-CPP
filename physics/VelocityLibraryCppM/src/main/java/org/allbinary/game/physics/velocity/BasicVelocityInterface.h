
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/math/Angle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicVelocityInterface {

    public: virtual BasicDecimal* getVelocityXBasicDecimalP() = 0;

    public: virtual BasicDecimal* getVelocityYBasicDecimalP() = 0;

    public: virtual void zero() = 0;

    public: virtual void setVelocityWithBigDecimalAndDirection(BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection) = 0;

    public: virtual void addVelocityWithBigDecimalAndDirection(BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection) = 0;

    public: virtual void setVelocityWithDirection(int64_t magnitude, Direction* direction, Direction* otherDirection) = 0;

    public: virtual void addVelocityWithDirection(int64_t magnitude, Direction* direction, Direction* otherDirection) = 0;

    public: virtual void setVelocityWithBigDecimal(BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle) = 0;

    public: virtual void addVelocityWithBigDecimal(BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle) = 0;

    public: virtual void setVelocity(int64_t magnitude, Angle* angle, Angle* otherAngle) = 0;

    public: virtual void addVelocity(int64_t magnitude, Angle* angle, Angle* otherAngle) = 0;

    public: virtual void addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYINTERFACE_H
