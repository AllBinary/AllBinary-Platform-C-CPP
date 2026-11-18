// Generated Code Do Not Modify
#include "org/allbinary/game/part/weapon/BasicProjectileWeaponPart.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/game/score/NoScoreable.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"






void BasicProjectileWeaponPart_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicProjectileWeaponPart_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicProjectileWeaponPart", "BasicWeaponPart");
    java_register_method("BasicProjectileWeaponPart", "processScore", (void*) BasicProjectileWeaponPart_processScore);
}

static void BasicProjectileWeaponPart_initFields(BasicProjectileWeaponPart* this) {
    
}


BasicProjectileWeaponPart* BasicProjectileWeaponPart_createBasicProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool) {
        return BasicProjectileWeaponPart_new(animationInterface, (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER), weaponLayerCircularStaticPool, (WeaponProperties_staticInit(), WeaponProperties_NULL_WEAPON_PROPERTIES), NoScoreable_getInstance(), (RelativeRelationship_staticInit(), RelativeRelationship_NULL_RELATIVE_RELATIONSHIP));
}


void BasicProjectileWeaponPart_init(BasicProjectileWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    BasicProjectileWeaponPart_register();
        BasicWeaponPart_init(&this->base, animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        BasicProjectileWeaponPart_initFields(this);
        this->weaponLayerCircularStaticPool = weaponLayerCircularStaticPool;
}

BasicProjectileWeaponPart* BasicProjectileWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    BasicProjectileWeaponPart* this = java_object_alloc(sizeof(BasicProjectileWeaponPart), "BasicProjectileWeaponPart");
    BasicProjectileWeaponPart_init(this, animationInterface, sourceLayerInterface, weaponLayerCircularStaticPool, weaponProperties, scoreableInterface, relativeRelationship);
    return this;
}


// throws Exception
void BasicProjectileWeaponPart_processScore(BasicProjectileWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) {
        WeaponLayer* weaponLayer = WeaponLayerCircularPool_getInstanceWeaponLayer(this->weaponLayerCircularStaticPool, BasicWeaponPart_getOwnerLayerInterface(this), RelativeRelationship_getX(this->base.relativeRelationship), RelativeRelationship_getY(this->base.relativeRelationship), RelativeRelationship_getZ(this->base.relativeRelationship), ((int32_t) angle), ((int32_t) otherAngle), weaponProperties, scoreableInterface);
        AllBinaryLayerManager_append(allbinaryLayerManager, weaponLayer);
}

