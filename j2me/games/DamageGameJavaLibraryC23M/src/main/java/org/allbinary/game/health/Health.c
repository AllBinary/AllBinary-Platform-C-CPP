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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/game/health/HealthInterface.h"

typedef struct Health Health;
struct Health {
    HealthInterface HealthInterface_interface;
    int32_t health;
    int32_t maxHealth;
    HealthListenerInterface* healthListenerInterface;
};

Health* Health_NULL_HEALTH;
const char* Health_NAME = "Health Resource";
static const char* Health_HEALTH_LABEL = "Health: ";
static const char* Health_MAX_HEALTH_LABEL = " Max: ";

Health* Health_new(int32_t maxHealth);

void Health_init(Health* this, int32_t maxHealth);
void Health_heal(Health* this, int32_t ahealth);
void Health_healMax(Health* this);
bool Health_isDamaged(Health* this);
void Health_damage(Health* this, int32_t ahealth);
bool Health_isAlive(Health* this);
int32_t Health_getMaxHealth(Health* this);
void Health_setMaxHealth(Health* this, int32_t maxHealth);
void Health_setHealth(Health* this, int32_t health);
int32_t Health_getHealth(Health* this);
void Health_addListener(Health* this, HealthListenerInterface* healthGraphic);
const char* Health_toString(Health* this);

// Static fields with runtime initializers: call this once at startup
void Health_staticInit(void) {
    Health_NULL_HEALTH = Health_new(0);
}

static void Health_initFields(Health* this) {
    this->health = 0;
    this->maxHealth = 0;
    this->healthListenerInterface = NullHealthListener_NULL_HEALTH_LISTENER;
}


void Health_init(Health* this, int32_t maxHealth) {
    Health_initFields(this);
        Health_setMaxHealth(this, maxHealth);
        Health_setHealth(this, maxHealth);
}

Health* Health_new(int32_t maxHealth) {
    Health* this = calloc(1, sizeof(Health));
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
            ForcedLogUtil_log(StringMaker_toString(stringBuffer), this);
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
        return StringMaker_toString(stringBuffer);
}

