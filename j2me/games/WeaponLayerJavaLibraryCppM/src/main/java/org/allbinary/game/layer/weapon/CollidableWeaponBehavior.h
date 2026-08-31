
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/collision/CollidableHelperFactory.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollisionHelper.h>

      
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/combat/damage/DamageableInterface.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CollidableWeaponBehavior: public CollidableDestroyableDamageableBehavior {
        

    private: static NULL_COLLIDABLE_WEAPON_BEHAVIOR: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static CollidableWeaponBehavior getNullInstance();

    private: collided: bool= false;

    collisionHelper: CollisionHelper;

public constructor (bool collidable);

    public init(AllBinaryLayer sourceLayerInterface);

    public bool isCollision(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collisionLayer);

                //@Throws(Exception.constructor)
            
    public collide(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collisionLayer);

    public bool isCollisionInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    public collideInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface);

    public CollisionType getCollisionTypeWith(AllBinaryLayer layerInterface);

    public bool isCollided();

    setCollided(bool collided);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_H
