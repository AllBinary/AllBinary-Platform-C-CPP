
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"

class VelocityProperties: public BasicVelocityProperties, public VelocityInterface {

    public: static VelocityProperties* NULL_VELOCITY_PROPERTIES() { static std::unique_ptr<VelocityProperties> value(new VelocityProperties(0, 0)); return value.get(); }

    private: int32_t maxForwardVelocity= 0;

    private: int32_t maxReverseVelocity= 0;

public: VelocityProperties(int32_t maxForwardVelocity, int32_t maxReverseVelocity);

    public: int32_t getMaxForwardVelocity();

    public: void setMaxForwardVelocity(int32_t maxForwardVelocity);

    public: int32_t getMaxReverseVelocity();

    public: void setMaxReverseVelocity(int32_t maxReverseVelocity);

    public: void limitMaxXYForwardVelocity();

    public: void limitMaxXYReverseVelocity();

    public: void limitMaxYForwardVelocity();

    public: void limitMaxYReverseVelocity();

    public: void limitMaxXForwardVelocity();

    public: void limitMaxXReverseVelocity();

    public: bool isOverXYMaxForwardVelocity();

    public: bool isOverXYMaxReverseVelocity();

    public: void limitXYToForwardAndReverseMaxVelocity();

    public: void limitMaxXYVelocity(int32_t maxVelocity);

    public: void limitMaxPositiveYVelocity(int32_t maxVelocity);

    public: void limitMaxNegativeYVelocity(int32_t maxVelocity);

    public: void limitMaxYVelocity(int32_t maxVelocity);

    public: void limitMaxXVelocity(int32_t maxVelocity);

    public: bool isOverXYMaxVelocity(int32_t maxVelocity);

    public: void setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

    public: void addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle);

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_H
