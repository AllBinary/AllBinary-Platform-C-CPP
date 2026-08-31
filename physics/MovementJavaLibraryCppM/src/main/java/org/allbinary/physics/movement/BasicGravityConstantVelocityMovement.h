
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_H
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/acceleration/GravityUtil.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicConstantVelocityMovement.h"

class BasicGravityConstantVelocityMovement: public BasicConstantVelocityMovement {
        

public constructor (BasicDecimal speedBasicDecimal);

    private: const gravityUtil: GravityUtil = GravityUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public process(AllBinaryGameLayer layer);

};

            


        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_H
