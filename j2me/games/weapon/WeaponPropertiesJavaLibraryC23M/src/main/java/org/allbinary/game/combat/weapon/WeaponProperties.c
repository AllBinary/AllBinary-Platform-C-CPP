// Generated Code Do Not Modify
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/combat/weapon/SimpleWeaponProperties.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


WeaponProperties* WeaponProperties_NULL_WEAPON_PROPERTIES;
static bool WeaponProperties_messageSent = false;
static const char* WeaponProperties_DAMAGE = "Damage: ";
static const char* WeaponProperties_RANGE = "Range: ";
static const char* WeaponProperties_RELOAD = "Reload: ";


static void WeaponProperties_setReloadTime(WeaponProperties* this, int64_t reloadTime);


static void WeaponProperties_setTargetingTime(WeaponProperties* this, int64_t targetingTime);







void WeaponProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    WeaponProperties_NULL_WEAPON_PROPERTIES = WeaponProperties_new(0LL, 0LL, 0LL, 0, ((int16_t) 0));
}

void WeaponProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WeaponProperties", "SimpleWeaponProperties");
    java_register_method("WeaponProperties", "setReloadTime", (void*) WeaponProperties_setReloadTime);
    java_register_method("WeaponProperties", "getReloadTime", (void*) WeaponProperties_getReloadTime);
    java_register_method("WeaponProperties", "setTargetingTime", (void*) WeaponProperties_setTargetingTime);
    java_register_method("WeaponProperties", "getTargetingTime", (void*) WeaponProperties_getTargetingTime);
    java_register_method("WeaponProperties", "getSpeed", (void*) WeaponProperties_getSpeed);
    java_register_method("WeaponProperties", "setSpeed", (void*) WeaponProperties_setSpeed);
    java_register_method("WeaponProperties", "getDamageI", (void*) WeaponProperties_getDamageI);
    java_register_method("WeaponProperties", "toStringArray", (void*) WeaponProperties_toStringArray);
    java_register_method("WeaponProperties", "toString", (void*) WeaponProperties_toString);
}

static void WeaponProperties_initFields(WeaponProperties* this) {
    this->reloadTime = 0;
    this->targetingTime = 0;
    this->speed = (BasicDecimal_staticInit(), BasicDecimal_ZERO_BIGDECIMAL);
    this->MAX = 10240LL;
    this->ZERO = 0;
}


void WeaponProperties_init(WeaponProperties* this, int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation) {
    WeaponProperties_register();
    SimpleWeaponProperties_init(&this->base);
    WeaponProperties_initFields(this);
        if (speed < this->MAX && speed != 0LL && !WeaponProperties_messageSent) {
            const char* MESSAGE = "Danger Danger Danger: Speed probably to slow if using 1 degree calculations as velocity for a single axis could be below 1024: ";
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_put(java_string_of(StringMaker_appendlong(StringMaker_append(StringMaker_new(), MESSAGE), speed)), this, commonStrings->CONSTRUCTOR);
            WeaponProperties_messageSent = true;
        }
        WeaponProperties_setReloadTime(this, reloadTime);
        WeaponProperties_setTargetingTime(this, targetingTime);
        SimpleWeaponProperties_setDamage(this, damage);
        SimpleWeaponProperties_setDissipation(this, dissipation);
        WeaponProperties_setSpeed(this, BasicDecimal_new(speed));
        if (dissipation != this->ZERO) {
            int64_t unscaledDamage = BasicDecimal_getUnscaled(this->speed) * ((int64_t) damage);
            int32_t scaledDissipation = ((int32_t) dissipation) * BasicDecimal_getScaledFactorValue(this->speed);
            int64_t value = (unscaledDamage / ((int64_t) scaledDissipation));
            SimpleWeaponProperties_setRange(this, ((int32_t) (value * 9LL)) / 10);
        }
}

WeaponProperties* WeaponProperties_new(int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation) {
    WeaponProperties* this = java_object_alloc(sizeof(WeaponProperties), "WeaponProperties");
    WeaponProperties_init(this, reloadTime, targetingTime, speed, damage, dissipation);
    return this;
}


static void WeaponProperties_setReloadTime(WeaponProperties* this, int64_t reloadTime) {
        this->reloadTime = reloadTime;
}


int64_t WeaponProperties_getReloadTime(WeaponProperties* this) {
        return this->reloadTime;
}


static void WeaponProperties_setTargetingTime(WeaponProperties* this, int64_t targetingTime) {
        this->targetingTime = targetingTime;
}


int64_t WeaponProperties_getTargetingTime(WeaponProperties* this) {
        return this->targetingTime;
}


BasicDecimal* WeaponProperties_getSpeed(WeaponProperties* this) {
        return this->speed;
}


void WeaponProperties_setSpeed(WeaponProperties* this, BasicDecimal* speed) {
        this->speed = speed;
}


int32_t WeaponProperties_getDamageI(WeaponProperties* this, int32_t range) {
        return SimpleWeaponProperties_getDamage(this) - ((((int32_t) SimpleWeaponProperties_getDissipation(this)) * range) / BasicDecimal_getScaled(this->speed));
}


const char** WeaponProperties_toStringArray(WeaponProperties* this) {
        int32_t index = 0;
        const char** stringArray = ((const char**) java_array_new(sizeof(const char*), 3));
        StringMaker* stringBuffer = StringMaker_new();
        stringArray[index++] = java_string_of(StringMaker_appendint(StringMaker_append(stringBuffer, WeaponProperties_DAMAGE), SimpleWeaponProperties_getDamage(this)));
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        stringArray[index++] = java_string_of(StringMaker_appendint(StringMaker_append(stringBuffer, WeaponProperties_RANGE), SimpleWeaponProperties_getRange(this)));
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        stringArray[index++] = java_string_of(StringMaker_appendlong(StringMaker_append(stringBuffer, WeaponProperties_RELOAD), WeaponProperties_getReloadTime(this)));
        return stringArray;
}


const char* WeaponProperties_toString(WeaponProperties* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_appendint(StringMaker_append(stringBuffer, WeaponProperties_DAMAGE), SimpleWeaponProperties_getDamage(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_appendint(StringMaker_append(stringBuffer, WeaponProperties_RANGE), SimpleWeaponProperties_getRange(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_appendlong(StringMaker_append(stringBuffer, WeaponProperties_RELOAD), WeaponProperties_getReloadTime(this));
        return java_string_of(stringBuffer);
}

