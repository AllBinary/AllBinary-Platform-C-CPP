// Generated Code Do Not Modify
#include "org/allbinary/game/combat/CombatBaseBehavior.h"
#include "org/allbinary/game/combat/damage/DamageableBaseBehavior.h"
#include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"


CombatBaseBehavior* CombatBaseBehavior_NULL_COMBAT_BEHAVIOR;






void CombatBaseBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CombatBaseBehavior_NULL_COMBAT_BEHAVIOR = CombatBaseBehavior_new(DamageableBaseBehavior_getInstance(), DestroyableBaseBehavior_getInstance());
}

void CombatBaseBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CombatBaseBehavior", nullptr);
    java_register_method("CombatBaseBehavior", "getDamageableBaseBehavior", (void*) CombatBaseBehavior_getDamageableBaseBehavior);
    java_register_method("CombatBaseBehavior", "getDestroyableBaseBehavior", (void*) CombatBaseBehavior_getDestroyableBaseBehavior);
    java_register_method("CombatBaseBehavior", "isReadyForExplosion", (void*) CombatBaseBehavior_isReadyForExplosion);
    java_register_method("CombatBaseBehavior", "setReadyForExplosion", (void*) CombatBaseBehavior_setReadyForExplosion);
}

static void CombatBaseBehavior_initFields(CombatBaseBehavior* this) {
    
    
    this->readyForExplosion = false;
}


void CombatBaseBehavior_init(CombatBaseBehavior* this, DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior) {
    CombatBaseBehavior_register();
    CombatBaseBehavior_initFields(this);
        this->damageableBaseBehavior = damageableBaseBehavior;
        this->destroyableBaseBehavior = destroyableBaseBehavior;
}

CombatBaseBehavior* CombatBaseBehavior_new(DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior) {
    CombatBaseBehavior* this = java_object_alloc(sizeof(CombatBaseBehavior), "CombatBaseBehavior");
    CombatBaseBehavior_init(this, damageableBaseBehavior, destroyableBaseBehavior);
    return this;
}


DamageableBaseBehavior* CombatBaseBehavior_getDamageableBaseBehavior(CombatBaseBehavior* this) {
        return this->damageableBaseBehavior;
}


DestroyableBaseBehavior* CombatBaseBehavior_getDestroyableBaseBehavior(CombatBaseBehavior* this) {
        return this->destroyableBaseBehavior;
}


bool CombatBaseBehavior_isReadyForExplosion(CombatBaseBehavior* this) {
        return this->readyForExplosion;
}


void CombatBaseBehavior_setReadyForExplosion(CombatBaseBehavior* this, bool readyForExplosion) {
        this->readyForExplosion = readyForExplosion;
}

