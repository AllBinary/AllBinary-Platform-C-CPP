
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/combat/damage/DamageUtil.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableDestroyableDamageableLayer.h"

class CollidableDestroyableDamageableBehavior: public CollidableBaseBehavior {

    protected: const DamageUtil damageUtil = DamageUtil::getInstance();

public: CollidableDestroyableDamageableBehavior(bool collidable);

    public: bool isCollision(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collisionLayer);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface);

    public: bool isCollisionInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    public: void collideInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H
