
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VehicleFrictionProperties.h"

class VehicleProperties
            : public Object
         {

    private: VelocityProperties velocityProperties;

    private: VehicleFrictionProperties vehicleFrictionProperties;

public: VehicleProperties(VelocityProperties velocityProperties, VehicleFrictionProperties vehicleFrictionProperties){
this->velocityProperties= velocityProperties;
    
this->vehicleFrictionProperties= vehicleFrictionProperties;
    
}


    public: VehicleFrictionProperties getVehicleFrictionProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vehicleFrictionProperties;
    
}


    public: void setVehicleFrictionProperties(VehicleFrictionProperties vehicleFrictionProperties){
this->vehicleFrictionProperties= vehicleFrictionProperties;
    
}


    public: VelocityProperties getVelocityProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocityProperties;
    
}


};

            

