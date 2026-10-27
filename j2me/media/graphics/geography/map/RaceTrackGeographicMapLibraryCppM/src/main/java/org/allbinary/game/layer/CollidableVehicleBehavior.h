
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/VehiclePropertiesCompositeInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/VehicleProperties.h"
#include "org/allbinary/game/layer/VehicleFrictionProperties.h"

class CollidableVehicleBehavior: public CollidableDestroyableDamageableBehavior {

    protected: int64_t totalImpactVelocity = 0;

public: CollidableVehicleBehavior(bool collidable);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

    public: void collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

    private: int64_t halfImpactVelocityX= 0;

    private: int64_t halfImpactVelocityY= 0;

    protected: void collideVehicle(CollidableCompositeLayer* ownerLayer, VehiclePropertiesCompositeInterface* vehiclePropertiesCompositeInterface);

    private: void collideFriction(VehiclePropertiesCompositeInterface* vehiclePropertiesCompositeInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_COLLIDABLEVEHICLEBEHAVIOR_H
