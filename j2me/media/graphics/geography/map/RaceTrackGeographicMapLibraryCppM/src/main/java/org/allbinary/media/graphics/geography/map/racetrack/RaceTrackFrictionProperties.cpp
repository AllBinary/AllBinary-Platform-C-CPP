
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/physics/friction/FrictionData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTrackFrictionProperties
            : public Object
         {

    private: int32_t ROAD_FRICTION_NOMINATOR;

    private: int32_t GROUND_FRICTION_NOMINATOR;

public: RaceTrackFrictionProperties(int32_t roadFriction, int32_t groundFriction){
this->ROAD_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -roadFriction;
    
this->GROUND_FRICTION_NOMINATOR= FrictionData::getFrictionDenominator() -groundFriction;
    
}


    public: int32_t getRoadFrictionNominator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ROAD_FRICTION_NOMINATOR;
    
}


    public: int32_t getGroundFrictionNominator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->GROUND_FRICTION_NOMINATOR;
    
}


};

            

