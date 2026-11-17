/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.combat.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/combat/weapon/SimpleWeaponProperties.h"

typedef struct WeaponProperties WeaponProperties;
struct WeaponProperties {
    SimpleWeaponProperties base;
    int64_t reloadTime;
    int64_t targetingTime;
    BasicDecimal* speed;
    int64_t MAX;
    int16_t ZERO;
};

WeaponProperties* WeaponProperties_NULL_WEAPON_PROPERTIES;
static bool WeaponProperties_messageSent = false;
static const char* WeaponProperties_DAMAGE = "Damage: ";
static const char* WeaponProperties_RANGE = "Range: ";
static const char* WeaponProperties_RELOAD = "Reload: ";

WeaponProperties* WeaponProperties_new(int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation);

void WeaponProperties_init(WeaponProperties* this, int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation);
static void WeaponProperties_setReloadTime(WeaponProperties* this, int64_t reloadTime);
int64_t WeaponProperties_getReloadTime(WeaponProperties* this);
static void WeaponProperties_setTargetingTime(WeaponProperties* this, int64_t targetingTime);
int64_t WeaponProperties_getTargetingTime(WeaponProperties* this);
BasicDecimal* WeaponProperties_getSpeed(WeaponProperties* this);
void WeaponProperties_setSpeed(WeaponProperties* this, BasicDecimal* speed);
int32_t WeaponProperties_getDamageI(WeaponProperties* this, int32_t range);
const char** WeaponProperties_toStringArray(WeaponProperties* this);
const char* WeaponProperties_toString(WeaponProperties* this);

// Static fields with runtime initializers: call this once at startup
void WeaponProperties_staticInit(void) {
    WeaponProperties_NULL_WEAPON_PROPERTIES = WeaponProperties_new(0LL, 0LL, 0LL, 0, ((int16_t) 0));
}

static void WeaponProperties_initFields(WeaponProperties* this) {
    this->reloadTime = 0;
    this->targetingTime = 0;
    this->speed = BasicDecimal_ZERO_BIGDECIMAL;
    this->MAX = 10240LL;
    this->ZERO = 0;
}


void WeaponProperties_init(WeaponProperties* this, int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation) {
    SimpleWeaponProperties_init(&this->base);
    WeaponProperties_initFields(this);
        if (speed < this->MAX && speed != 0LL && !WeaponProperties_messageSent) {
            const char* MESSAGE = "Danger Danger Danger: Speed probably to slow if using 1 degree calculations as velocity for a single axis could be below 1024: ";
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), MESSAGE), appendlong, speed), toString), this, commonStrings->CONSTRUCTOR);
            WeaponProperties_messageSent = true;
        }
        WeaponProperties_setReloadTime(this, reloadTime);
        WeaponProperties_setTargetingTime(this, targetingTime);
        WeaponProperties_setDamage(this, damage);
        WeaponProperties_setDissipation(this, dissipation);
        WeaponProperties_setSpeed(this, BasicDecimal_new(speed));
        if (dissipation != this->ZERO) {
            int64_t unscaledDamage = BasicDecimal_getUnscaled(this->speed) * damage;
            int32_t scaledDissipation = dissipation * BasicDecimal_getScaledFactorValue(this->speed);
            int64_t value = (unscaledDamage / ((int64_t) scaledDissipation));
            WeaponProperties_setRange(this, ((int32_t) (value * 9LL)) / 10);
        }
}

WeaponProperties* WeaponProperties_new(int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation) {
    WeaponProperties* this = calloc(1, sizeof(WeaponProperties));
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
        return WeaponProperties_getDamage(this) - ((WeaponProperties_getDissipation(this) * range) / BasicDecimal_getScaled(this->speed));
}


const char** WeaponProperties_toStringArray(WeaponProperties* this) {
        int32_t index = 0;
        const char** stringArray = ((const char**) java_array_new(sizeof(const char*), 3));
        StringMaker* stringBuffer = StringMaker_new();
        stringArray[index++] = JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, WeaponProperties_DAMAGE), appendint, ((int32_t) WeaponProperties_getDamage(this))), toString);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        stringArray[index++] = JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, WeaponProperties_RANGE), appendint, ((int32_t) WeaponProperties_getRange(this))), toString);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        stringArray[index++] = JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, WeaponProperties_RELOAD), appendlong, WeaponProperties_getReloadTime(this)), toString);
        return stringArray;
}


const char* WeaponProperties_toString(WeaponProperties* this) {
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(StringMaker_append(stringBuffer, WeaponProperties_DAMAGE), appendint, ((int32_t) WeaponProperties_getDamage(this)));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        JAVA_CALL(StringMaker_append(stringBuffer, WeaponProperties_RANGE), appendint, ((int32_t) WeaponProperties_getRange(this)));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        JAVA_CALL(StringMaker_append(stringBuffer, WeaponProperties_RELOAD), appendlong, WeaponProperties_getReloadTime(this));
        return StringMaker_toString(stringBuffer);
}

