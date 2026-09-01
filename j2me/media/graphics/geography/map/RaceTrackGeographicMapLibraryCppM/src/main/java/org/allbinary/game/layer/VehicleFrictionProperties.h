
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_VEHICLEFRICTIONPROPERTIES_H
        #define ORG_ALLBINARY_GAME_LAYER_VEHICLEFRICTIONPROPERTIES_H

#include <org/allbinary/game/physics/FrictionProperties.h>

      
#include <org/allbinary/game/physics/friction/FrictionData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VehicleFrictionProperties: public FrictionProperties {

    private: int32_t TIRE_FRICTION_NOMINATOR;

    private: int32_t BRAKE_FRICTION_NOMINATOR;

    private: int32_t AIR_FRICTION_NOMINATOR;

    private: int32_t CRASH_FRICTION_NOMINATOR;

public: VehicleFrictionProperties(int32_t tireFriction, int32_t brakeFriction, int32_t airFriction, int32_t crashFriction);

    public: int32_t getTireFrictionNominator();

    public: int32_t getBrakeFrictionNominator();

    public: int32_t getAirFrictionNominator();

    public: int32_t getCrashFrictionNominator();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_VEHICLEFRICTIONPROPERTIES_H
