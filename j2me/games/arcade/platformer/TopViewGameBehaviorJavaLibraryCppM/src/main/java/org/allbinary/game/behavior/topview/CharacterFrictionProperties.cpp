
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/physics/FrictionProperties.h>

      
#include <org/allbinary/game/physics/friction/FrictionData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CharacterFrictionProperties: public FrictionProperties {

    private: int32_t WATER_FRICTION_NOMINATOR;

    private: int32_t AIR_FRICTION_NOMINATOR;

    private: int32_t COLLISION_FRICTION_NOMINATOR;

public: CharacterFrictionProperties(int32_t airFriction, int32_t waterFriction, int32_t collisionFriction){
this->AIR_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -airFriction;
    
this->COLLISION_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -collisionFriction;
    
this->WATER_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -waterFriction;
    
}


    public: int32_t getWATER_FRICTION_NOMINATOR(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->WATER_FRICTION_NOMINATOR;
    
}


    public: int32_t getAIR_FRICTION_NOMINATOR(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->AIR_FRICTION_NOMINATOR;
    
}


    public: int32_t getCOLLISION_FRICTION_NOMINATOR(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->COLLISION_FRICTION_NOMINATOR;
    
}


};

            

