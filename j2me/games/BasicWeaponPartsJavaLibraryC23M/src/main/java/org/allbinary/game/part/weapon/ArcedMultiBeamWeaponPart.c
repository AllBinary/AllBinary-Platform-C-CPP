// Generated Code Do Not Modify
#include "org/allbinary/game/part/weapon/ArcedMultiBeamWeaponPart.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif





void ArcedMultiBeamWeaponPart_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ArcedMultiBeamWeaponPart_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ArcedMultiBeamWeaponPart", "BasicWeaponPart");
    java_register_method("ArcedMultiBeamWeaponPart", "processScore", (void*) ArcedMultiBeamWeaponPart_processScore);
}

static void ArcedMultiBeamWeaponPart_initFields(ArcedMultiBeamWeaponPart* this) {
    
    
    this->TOTAL_ANGLE = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
}


void ArcedMultiBeamWeaponPart_init(ArcedMultiBeamWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    ArcedMultiBeamWeaponPart_register();
        BasicWeaponPart_init(&this->base, animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        ArcedMultiBeamWeaponPart_initFields(this);
        this->total = total;
        this->weaponLayerCircularStaticPool = weaponLayerCircularStaticPool;
}

ArcedMultiBeamWeaponPart* ArcedMultiBeamWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    ArcedMultiBeamWeaponPart* this = java_object_alloc(sizeof(ArcedMultiBeamWeaponPart), "ArcedMultiBeamWeaponPart");
    ArcedMultiBeamWeaponPart_init(this, animationInterface, sourceLayerInterface, weaponLayerCircularStaticPool, total, weaponProperties, scoreableInterface, relativeRelationship);
    return this;
}


// throws Exception
void ArcedMultiBeamWeaponPart_processScore(ArcedMultiBeamWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) {
        int16_t increment = ((int16_t) ((this->total - 1) / this->TOTAL_ANGLE));
        int16_t minAngle = ((int16_t) (((int32_t) angle) - ((((int32_t) increment) * this->total) >> 1)));
        int32_t next = 0;
        WeaponLayer* weaponLayer = nullptr;
        for (int32_t index = 0; index < this->total; index++) {
            weaponLayer = WeaponLayerCircularPool_getInstanceWeaponLayer(this->weaponLayerCircularStaticPool, BasicWeaponPart_getOwnerLayerInterface(this), RelativeRelationship_getX(this->base.relativeRelationship), RelativeRelationship_getY(this->base.relativeRelationship), 0, (minAngle + increment), ((int32_t) otherAngle), weaponProperties, scoreableInterface);
            AllBinaryLayerManager_append(allbinaryLayerManager, weaponLayer);
            next += ((int32_t) increment);
        }
}

