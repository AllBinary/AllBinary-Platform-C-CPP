// Generated Code Do Not Modify
#include "org/allbinary/game/part/weapon/BasicWeaponPartCircularPool.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPartFactoryInterface.h"


BasicWeaponPartCircularPool* BasicWeaponPartCircularPool_NULL_BASIC_WEAPON_PART_CIRCULAR_POOL;



void BasicWeaponPartCircularPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicWeaponPartCircularPool_NULL_BASIC_WEAPON_PART_CIRCULAR_POOL = BasicWeaponPartCircularPool_new();
}

void BasicWeaponPartCircularPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicWeaponPartCircularPool", nullptr);
    java_register_method("BasicWeaponPartCircularPool", "init", (void*) BasicWeaponPartCircularPool_initMethod);
    java_register_method("BasicWeaponPartCircularPool", "getInstance", (void*) BasicWeaponPartCircularPool_getInstance);
}

static void BasicWeaponPartCircularPool_initFields(BasicWeaponPartCircularPool* this) {
    this->basicWeaponPart = (BasicWeaponPart_staticInit(), BasicWeaponPart_NULL_BASIC_WEAPON_PART);
}

void BasicWeaponPartCircularPool_init(BasicWeaponPartCircularPool* this) {
    BasicWeaponPartCircularPool_register();
    BasicWeaponPartCircularPool_initFields(this);
}

BasicWeaponPartCircularPool* BasicWeaponPartCircularPool_new(void) {
    BasicWeaponPartCircularPool* this = java_object_alloc(sizeof(BasicWeaponPartCircularPool), "BasicWeaponPartCircularPool");
    BasicWeaponPartCircularPool_init(this);
    return this;
}


// throws Exception
void BasicWeaponPartCircularPool_initMethod(BasicWeaponPartCircularPool* this, BasicWeaponPartFactoryInterface* basicWeaponPartFactoryInterface) {
        this->basicWeaponPart = BasicWeaponPartFactoryInterface_getInstance(basicWeaponPartFactoryInterface);
}


// throws Exception
// synchronized
BasicWeaponPart* BasicWeaponPartCircularPool_getInstance(BasicWeaponPartCircularPool* this, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
        BasicWeaponPart_initMethod(this->basicWeaponPart, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        return this->basicWeaponPart;
}

