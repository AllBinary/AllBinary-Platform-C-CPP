
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_VEHICLEPROPERTIES_H
        #define ORG_ALLBINARY_GAME_LAYER_VEHICLEPROPERTIES_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/VehicleFrictionProperties.h"

class VehicleProperties
            : public Object
         {

    private: VelocityProperties* velocityProperties;

    private: VehicleFrictionProperties* vehicleFrictionProperties;

public: VehicleProperties(VelocityProperties* velocityProperties, VehicleFrictionProperties* vehicleFrictionProperties);

    public: VehicleFrictionProperties* getVehicleFrictionProperties();

    public: void setVehicleFrictionProperties(VehicleFrictionProperties* vehicleFrictionProperties);

    public: VelocityProperties* getVelocityProperties();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_VEHICLEPROPERTIES_H
