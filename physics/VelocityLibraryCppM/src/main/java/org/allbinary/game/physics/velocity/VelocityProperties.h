
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_H
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicVelocityProperties.h"
#include "VelocityInterface.h"

class VelocityProperties: public BasicVelocityProperties: public VelocityInterface {
        

    public static const NULL_VELOCITY_PROPERTIES: VelocityProperties = new VelocityProperties(0, 0);

    private: maxForwardVelocity: int32_t= 0;

    private: maxReverseVelocity: int32_t= 0;

public constructor (int32_t maxForwardVelocity, int32_t maxReverseVelocity);

    public int32_t getMaxForwardVelocity();

    public setMaxForwardVelocity(int32_t maxForwardVelocity);

    public int32_t getMaxReverseVelocity();

    public setMaxReverseVelocity(int32_t maxReverseVelocity);

    public limitMaxXYForwardVelocity();

    public limitMaxXYReverseVelocity();

    public limitMaxYForwardVelocity();

    public limitMaxYReverseVelocity();

    public limitMaxXForwardVelocity();

    public limitMaxXReverseVelocity();

    public bool isOverXYMaxForwardVelocity();

    public bool isOverXYMaxReverseVelocity();

    public limitXYToForwardAndReverseMaxVelocity();

    public limitMaxXYVelocity(int32_t maxVelocity);

    public limitMaxPositiveYVelocity(int32_t maxVelocity);

    public limitMaxNegativeYVelocity(int32_t maxVelocity);

    public limitMaxYVelocity(int32_t maxVelocity);

    public limitMaxXVelocity(int32_t maxVelocity);

    public bool isOverXYMaxVelocity(int32_t maxVelocity);

    public setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

    public addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_H
