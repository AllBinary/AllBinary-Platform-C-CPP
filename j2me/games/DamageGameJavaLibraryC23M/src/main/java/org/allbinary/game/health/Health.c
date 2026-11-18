// Generated Code Do Not Modify
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/game/health/NullHealthListener.h"
#include "org/allbinary/game/health/HealthListenerInterface.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif


Health* Health_NULL_HEALTH;
const char* Health_NAME = "Health Resource";
static const char* Health_HEALTH_LABEL = "Health: ";
static const char* Health_MAX_HEALTH_LABEL = " Max: ";













void Health_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Health_NULL_HEALTH = Health_new(0);
}

void Health_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Health", nullptr);
    java_register_method("Health", "heal", (void*) Health_heal);
    java_register_method("Health", "healMax", (void*) Health_healMax);
    java_register_method("Health", "isDamaged", (void*) Health_isDamaged);
    java_register_method("Health", "damage", (void*) Health_damage);
    java_register_method("Health", "isAlive", (void*) Health_isAlive);
    java_register_method("Health", "getMaxHealth", (void*) Health_getMaxHealth);
    java_register_method("Health", "setMaxHealth", (void*) Health_setMaxHealth);
    java_register_method("Health", "setHealth", (void*) Health_setHealth);
    java_register_method("Health", "getHealth", (void*) Health_getHealth);
    java_register_method("Health", "addListener", (void*) Health_addListener);
    java_register_method("Health", "toString", (void*) Health_toString);
}

static void Health_initFields(Health* this) {
    this->health = 0;
    this->maxHealth = 0;
    this->healthListenerInterface = (NullHealthListener_staticInit(), NullHealthListener_NULL_HEALTH_LISTENER);
}


void Health_init(Health* this, int32_t maxHealth) {
    Health_register();
    Health_initFields(this);
        Health_setMaxHealth(this, maxHealth);
        Health_setHealth(this, maxHealth);
}

Health* Health_new(int32_t maxHealth) {
    Health* this = java_object_alloc(sizeof(Health), "Health");
    Health_init(this, maxHealth);
    return this;
}


void Health_heal(Health* this, int32_t ahealth) {
        int32_t newHealth = Health_getHealth(this) + ahealth;
        if (newHealth > Health_getMaxHealth(this)) {
            Health_setHealth(this, Health_getMaxHealth(this));
        } else {
            Health_setHealth(this, newHealth);
        }
}


void Health_healMax(Health* this) {
        Health_setHealth(this, Health_getMaxHealth(this));
}


bool Health_isDamaged(Health* this) {
        if (Health_getHealth(this) != Health_getMaxHealth(this)) {
            return true;
        } else {
            return false;
        }
}


void Health_damage(Health* this, int32_t ahealth) {
        if (ahealth < 0) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "******* Trying to heal when damaging. Damage: ");
            StringMaker_appendint(stringBuffer, ahealth);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            StringMaker_append(stringBuffer, Health_toString(this));
            ForcedLogUtil_log(java_string_of(stringBuffer), this);
            return;
        }
        int32_t health = Health_getHealth(this) - ahealth;
        Health_setHealth(this, health);
}


bool Health_isAlive(Health* this) {
        if (Health_getHealth(this) <= 0) {
            return false;
        } else {
            return true;
        }
}


int32_t Health_getMaxHealth(Health* this) {
        return this->maxHealth;
}


void Health_setMaxHealth(Health* this, int32_t maxHealth) {
        this->maxHealth = maxHealth;
}


void Health_setHealth(Health* this, int32_t health) {
        if (health > Health_getMaxHealth(this)) {
            this->health = Health_getMaxHealth(this);
        } else if (health < 0) {
            this->health = 0;
        } else {
            this->health = health;
        }
        if (this->healthListenerInterface != nullptr) {
            HealthListenerInterface_onHealthChange(this->healthListenerInterface);
        }
}


int32_t Health_getHealth(Health* this) {
        return this->health;
}


void Health_addListener(Health* this, HealthListenerInterface* healthGraphic) {
        this->healthListenerInterface = healthGraphic;
}


const char* Health_toString(Health* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, Health_HEALTH_LABEL);
        StringMaker_appendint(stringBuffer, this->health);
        StringMaker_append(stringBuffer, Health_MAX_HEALTH_LABEL);
        StringMaker_appendint(stringBuffer, this->maxHealth);
        return java_string_of(stringBuffer);
}

