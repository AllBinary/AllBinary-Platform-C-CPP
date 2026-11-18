// Generated Code Do Not Modify
#include "org/allbinary/game/combat/weapon/SimpleWeaponProperties.h"










void SimpleWeaponProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimpleWeaponProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimpleWeaponProperties", nullptr);
    java_register_method("SimpleWeaponProperties", "set", (void*) SimpleWeaponProperties_set);
    java_register_method("SimpleWeaponProperties", "setDamage", (void*) SimpleWeaponProperties_setDamage);
    java_register_method("SimpleWeaponProperties", "getDamage", (void*) SimpleWeaponProperties_getDamage);
    java_register_method("SimpleWeaponProperties", "setDissipation", (void*) SimpleWeaponProperties_setDissipation);
    java_register_method("SimpleWeaponProperties", "getDissipation", (void*) SimpleWeaponProperties_getDissipation);
    java_register_method("SimpleWeaponProperties", "getRange", (void*) SimpleWeaponProperties_getRange);
    java_register_method("SimpleWeaponProperties", "setRange", (void*) SimpleWeaponProperties_setRange);
}

static void SimpleWeaponProperties_initFields(SimpleWeaponProperties* this) {
    this->damage = 0;
    this->dissipation = 0;
    this->range = 0;
}

void SimpleWeaponProperties_init(SimpleWeaponProperties* this) {
    SimpleWeaponProperties_register();
    SimpleWeaponProperties_initFields(this);
}

SimpleWeaponProperties* SimpleWeaponProperties_new(void) {
    SimpleWeaponProperties* this = java_object_alloc(sizeof(SimpleWeaponProperties), "SimpleWeaponProperties");
    SimpleWeaponProperties_init(this);
    return this;
}


void SimpleWeaponProperties_set(SimpleWeaponProperties* this, SimpleWeaponProperties* simpleWeaponProperties) {
        SimpleWeaponProperties_setDamage(this, SimpleWeaponProperties_getDamage(simpleWeaponProperties));
        SimpleWeaponProperties_setDissipation(this, SimpleWeaponProperties_getDissipation(simpleWeaponProperties));
        SimpleWeaponProperties_setRange(this, SimpleWeaponProperties_getRange(simpleWeaponProperties));
}


void SimpleWeaponProperties_setDamage(SimpleWeaponProperties* this, int32_t damage) {
        this->damage = damage;
}


int32_t SimpleWeaponProperties_getDamage(SimpleWeaponProperties* this) {
        return this->damage;
}


void SimpleWeaponProperties_setDissipation(SimpleWeaponProperties* this, int16_t dissipation) {
        this->dissipation = dissipation;
}


int16_t SimpleWeaponProperties_getDissipation(SimpleWeaponProperties* this) {
        return this->dissipation;
}


int32_t SimpleWeaponProperties_getRange(SimpleWeaponProperties* this) {
        return this->range;
}


void SimpleWeaponProperties_setRange(SimpleWeaponProperties* this, int32_t range) {
        this->range = range;
}

