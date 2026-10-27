
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CollidableHelperFactory;
class CollidableInterfaceCompositeInterface;
class CollisionHelper;
class CollisionType;
class CollisionTypeFactory;
class DamageableInterface;
class CollidableCompositeLayer;
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableDamageWeaponBehavior: public CollidableDestroyableDamageableBehavior {

    private: bool collided= false;

    /*protected*/ public: CollisionHelper* collisionHelper;

public: CollidableDamageWeaponBehavior(bool collidable);

    public: void init(AllBinaryLayer* sourceLayerInterface);

    public: bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

    public: bool isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    public: void collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

    public: CollisionType* getCollisionTypeWith(AllBinaryLayer* layerInterface);

    public: bool isCollided();

    private: void setCollided(bool collided);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/collision/CollidableHelperFactory.h>)
#include <org/allbinary/game/collision/CollidableHelperFactory.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>)
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollisionHelper.h>)
#include <org/allbinary/game/collision/CollisionHelper.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollisionType.h>)
#include <org/allbinary/game/collision/CollisionType.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollisionTypeFactory.h>)
#include <org/allbinary/game/collision/CollisionTypeFactory.h>
#endif
#if __has_include(<org/allbinary/game/combat/damage/DamageableInterface.h>)
#include <org/allbinary/game/combat/damage/DamageableInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif

        #endif
    
