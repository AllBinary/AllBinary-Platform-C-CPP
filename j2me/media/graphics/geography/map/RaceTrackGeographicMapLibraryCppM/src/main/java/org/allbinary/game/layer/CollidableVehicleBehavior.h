
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_COLLIDABLEVEHICLEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_COLLIDABLEVEHICLEBEHAVIOR_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VehiclePropertiesCompositeInterface.h"
#include "CollidableCompositeLayer.h"
#include "VehicleProperties.h"
#include "VehicleFrictionProperties.h"

class CollidableVehicleBehavior: public CollidableDestroyableDamageableBehavior {
        

    totalImpactVelocity: int64_t = 0;

public constructor (bool collidable);

                //@Throws(Exception.constructor)
            
    public collide(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface);

    public collideInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface);

    private: halfImpactVelocityX: int64_t= 0;

    private: halfImpactVelocityY: int64_t= 0;

    collideVehicle(CollidableCompositeLayer ownerLayer, VehiclePropertiesCompositeInterface vehiclePropertiesCompositeInterface);

    collideFriction(VehiclePropertiesCompositeInterface vehiclePropertiesCompositeInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_COLLIDABLEVEHICLEBEHAVIOR_H
