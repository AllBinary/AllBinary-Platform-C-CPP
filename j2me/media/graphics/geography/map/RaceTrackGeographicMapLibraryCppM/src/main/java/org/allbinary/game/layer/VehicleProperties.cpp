
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_VEHICLEPROPERTIES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_VEHICLEPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/VehicleProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/VehicleFrictionProperties.h"


VehicleProperties::VehicleProperties(VelocityProperties* velocityProperties, VehicleFrictionProperties* vehicleFrictionProperties){
this->velocityProperties= velocityProperties;
    
this->vehicleFrictionProperties= vehicleFrictionProperties;
    
}


    auto VehicleProperties::getVehicleFrictionProperties() -> VehicleFrictionProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vehicleFrictionProperties;
    
}


    auto VehicleProperties::setVehicleFrictionProperties(VehicleFrictionProperties* vehicleFrictionProperties) -> void{
this->vehicleFrictionProperties= vehicleFrictionProperties;
    
}


    auto VehicleProperties::getVelocityProperties() -> VelocityProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocityProperties;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_VEHICLEPROPERTIES_CPP
