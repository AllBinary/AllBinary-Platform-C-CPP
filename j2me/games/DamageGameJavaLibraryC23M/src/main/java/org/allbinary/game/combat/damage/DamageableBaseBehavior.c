// Generated Code Do Not Modify
#include "org/allbinary/game/combat/damage/DamageableBaseBehavior.h"
#include "org/allbinary/game/combat/damage/DamageableInterface.h"


static DamageableBaseBehavior* DamageableBaseBehavior_instance;





void DamageableBaseBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DamageableBaseBehavior_instance = DamageableBaseBehavior_new();
}

void DamageableBaseBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DamageableBaseBehavior", nullptr);
    java_register_method("DamageableBaseBehavior", "getName", (void*) DamageableBaseBehavior_getName);
    java_register_method("DamageableBaseBehavior", "damage", (void*) DamageableBaseBehavior_damage);
    java_register_method("DamageableBaseBehavior", "getDamage", (void*) DamageableBaseBehavior_getDamage);
}

void DamageableBaseBehavior_init(DamageableBaseBehavior* this) {
    DamageableBaseBehavior_register();
}

DamageableBaseBehavior* DamageableBaseBehavior_new(void) {
    DamageableBaseBehavior* this = java_object_alloc(sizeof(DamageableBaseBehavior), "DamageableBaseBehavior");
    DamageableBaseBehavior_init(this);
    return this;
}


DamageableBaseBehavior* DamageableBaseBehavior_getInstance(void) {
        return (DamageableBaseBehavior_staticInit(), DamageableBaseBehavior_instance);
}


const char* DamageableBaseBehavior_getName(DamageableBaseBehavior* this) {
        return java_class_of(this);
}


// throws Exception
void DamageableBaseBehavior_damage(DamageableBaseBehavior* this, int32_t damage, int32_t damageType) {
}


// throws Exception
int32_t DamageableBaseBehavior_getDamage(DamageableBaseBehavior* this, int32_t damageType) {
        return 6000;
}

