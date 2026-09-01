
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/physics/friction/FrictionData.h>

      
#include <org/allbinary/game/physics/velocity/DragVelocityBehavior.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FrictionProperties
            : public Object
         {

public: FrictionProperties(){
}


    public: void friction(VelocityProperties velocityProperties, int32_t nominator){
DragVelocityBehavior::instance.reduce(velocityProperties, nominator, FrictionData::getFrictionDenominator());
    
}


};

            

