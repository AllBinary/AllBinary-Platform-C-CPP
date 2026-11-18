// Generated Code Do Not Modify
#include "org/allbinary/game/combat/damage/DamageUtil.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/combat/damage/DamageableInterface.h"


static DamageUtil* DamageUtil_instance;





void DamageUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DamageUtil_instance = DamageUtil_new();
}

void DamageUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DamageUtil", nullptr);
    java_register_method("DamageUtil", "process", (void*) DamageUtil_process);
    java_register_method("DamageUtil", "debugDamage", (void*) DamageUtil_debugDamage);
}

static void DamageUtil_initFields(DamageUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->COLLIDE = "collide";
}


DamageUtil* DamageUtil_getInstance(void) {
        return (DamageUtil_staticInit(), DamageUtil_instance);
}


void DamageUtil_init(DamageUtil* this) {
    DamageUtil_register();
    DamageUtil_initFields(this);
}

DamageUtil* DamageUtil_new(void) {
    DamageUtil* this = java_object_alloc(sizeof(DamageUtil), "DamageUtil");
    DamageUtil_init(this);
    return this;
}


// throws Exception
void DamageUtil_process(DamageUtil* this, DamageableInterface* damageableInterface, DamageableInterface* damageableInterface2) {
        DamageableInterface_damage(damageableInterface, DamageableInterface_getDamage(damageableInterface2, 0), 0);
}


// throws Exception
void DamageUtil_debugDamage(DamageUtil* this, CollidableCompositeLayer* collidableInterfaceCompositeInterface1, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) collidableInterfaceCompositeInterface);
        int32_t damage = CollidableDestroyableDamageableLayer_getDamage(collidableDestroyableDamageableLayer, 0);
        if (damage > 20000) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Collision ");
            StringMaker_append(stringBuffer, java_string_of(collidableInterfaceCompositeInterface1));
            StringMaker_append(stringBuffer, " with: ");
            StringMaker_append(stringBuffer, java_string_of(collidableInterfaceCompositeInterface));
            StringMaker_append(stringBuffer, " damage: ");
            StringMaker_appendint(stringBuffer, damage);
            LogUtil_putF(this->logUtil, java_string_of(stringBuffer), collidableInterfaceCompositeInterface1, this->COLLIDE);
        }
}

