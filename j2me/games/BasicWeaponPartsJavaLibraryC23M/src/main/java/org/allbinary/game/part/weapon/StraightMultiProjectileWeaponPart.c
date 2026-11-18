// Generated Code Do Not Modify
#include "org/allbinary/game/part/weapon/StraightMultiProjectileWeaponPart.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/game/score/NoScoreable.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/math/NoDecimalTrigTable.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"






void StraightMultiProjectileWeaponPart_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StraightMultiProjectileWeaponPart_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StraightMultiProjectileWeaponPart", "BasicWeaponPart");
    java_register_method("StraightMultiProjectileWeaponPart", "processScore", (void*) StraightMultiProjectileWeaponPart_processScore);
}

static void StraightMultiProjectileWeaponPart_initFields(StraightMultiProjectileWeaponPart* this) {
    
    
    this->noDecimalTrigTable = NoDecimalTrigTable_getInstance();
}


StraightMultiProjectileWeaponPart* StraightMultiProjectileWeaponPart_createStraightMultiProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool) {
        return StraightMultiProjectileWeaponPart_new(animationInterface, (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER), weaponLayerCircularStaticPool, 2, (WeaponProperties_staticInit(), WeaponProperties_NULL_WEAPON_PROPERTIES), NoScoreable_getInstance(), (RelativeRelationship_staticInit(), RelativeRelationship_NULL_RELATIVE_RELATIONSHIP));
}


void StraightMultiProjectileWeaponPart_init(StraightMultiProjectileWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    StraightMultiProjectileWeaponPart_register();
        BasicWeaponPart_init(&this->base, animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        StraightMultiProjectileWeaponPart_initFields(this);
        this->total = total;
        this->weaponLayerCircularStaticPool = weaponLayerCircularStaticPool;
}

StraightMultiProjectileWeaponPart* StraightMultiProjectileWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    StraightMultiProjectileWeaponPart* this = java_object_alloc(sizeof(StraightMultiProjectileWeaponPart), "StraightMultiProjectileWeaponPart");
    StraightMultiProjectileWeaponPart_init(this, animationInterface, sourceLayerInterface, weaponLayerCircularStaticPool, total, weaponProperties, scoreableInterface, relativeRelationship);
    return this;
}


// throws Exception
void StraightMultiProjectileWeaponPart_processScore(StraightMultiProjectileWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) {
        AllBinaryLayer* sourceLayerInterface = BasicWeaponPart_getOwnerLayerInterface(this);
        int32_t reducedWidth = (AllBinaryLayer_getWidth(sourceLayerInterface) * 8 / 10);
        int32_t halfWidth = (reducedWidth >> 1);
        int32_t x = RelativeRelationship_getX(this->base.relativeRelationship);
        int32_t y = RelativeRelationship_getY(this->base.relativeRelationship);
        int64_t sine = 0;
        int32_t beamX = 0;
        int64_t cosine = 0;
        int32_t beamY = 0;
        WeaponLayer* weaponLayer = nullptr;
        int32_t increment = reducedWidth / (this->total - 1);
        int32_t next = -halfWidth;
        for (int32_t index = 0; index < this->total; index++) {
            sine = (((int64_t) next) * NoDecimalTrigTable_sin(this->noDecimalTrigTable, ((int32_t) angle)));
            beamX = ((int32_t) (sine / ((int64_t) this->noDecimalTrigTable->SCALE)));
            cosine = (((int64_t) next) * NoDecimalTrigTable_cos(this->noDecimalTrigTable, ((int32_t) angle)));
            beamY = -((int32_t) (cosine / ((int64_t) this->noDecimalTrigTable->SCALE)));
            weaponLayer = WeaponLayerCircularPool_getInstanceWeaponLayer(this->weaponLayerCircularStaticPool, sourceLayerInterface, x + beamX, y + beamY, 0, ((int32_t) angle), ((int32_t) otherAngle), weaponProperties, scoreableInterface);
            AllBinaryLayerManager_append(allbinaryLayerManager, weaponLayer);
            next += increment;
        }
}

