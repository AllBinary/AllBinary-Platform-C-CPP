
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
        



#include <org/allbinary/game/physics/FrictionProperties.h>

      
#include <org/allbinary/game/physics/friction/FrictionData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VehicleFrictionProperties: public FrictionProperties {

    private: int32_t TIRE_FRICTION_NOMINATOR;

    private: int32_t BRAKE_FRICTION_NOMINATOR;

    private: int32_t AIR_FRICTION_NOMINATOR;

    private: int32_t CRASH_FRICTION_NOMINATOR;

public: VehicleFrictionProperties(int32_t tireFriction, int32_t brakeFriction, int32_t airFriction, int32_t crashFriction){
this->TIRE_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -tireFriction;
    
this->BRAKE_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -brakeFriction;
    
this->AIR_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -airFriction;
    
this->CRASH_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -crashFriction;
    
}


    public: int32_t getTireFrictionNominator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->TIRE_FRICTION_NOMINATOR;
    
}


    public: int32_t getBrakeFrictionNominator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->BRAKE_FRICTION_NOMINATOR;
    
}


    public: int32_t getAirFrictionNominator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->AIR_FRICTION_NOMINATOR;
    
}


    public: int32_t getCrashFrictionNominator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->CRASH_FRICTION_NOMINATOR;
    
}


};

            

