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

typedef struct SimpleWeaponProperties SimpleWeaponProperties;
struct SimpleWeaponProperties {
    int32_t damage;
    int16_t dissipation;
    int32_t range;
};


SimpleWeaponProperties* SimpleWeaponProperties_new(void);
void SimpleWeaponProperties_set(SimpleWeaponProperties* this, SimpleWeaponProperties* simpleWeaponProperties);
void SimpleWeaponProperties_setDamage(SimpleWeaponProperties* this, int32_t damage);
int32_t SimpleWeaponProperties_getDamage(SimpleWeaponProperties* this);
void SimpleWeaponProperties_setDissipation(SimpleWeaponProperties* this, int16_t dissipation);
int16_t SimpleWeaponProperties_getDissipation(SimpleWeaponProperties* this);
int32_t SimpleWeaponProperties_getRange(SimpleWeaponProperties* this);
void SimpleWeaponProperties_setRange(SimpleWeaponProperties* this, int32_t range);

static void SimpleWeaponProperties_initFields(SimpleWeaponProperties* this) {
    this->damage = 0;
    this->dissipation = 0;
    this->range = 0;
}

void SimpleWeaponProperties_init(SimpleWeaponProperties* this) {
    SimpleWeaponProperties_initFields(this);
}

SimpleWeaponProperties* SimpleWeaponProperties_new(void) {
    SimpleWeaponProperties* this = calloc(1, sizeof(SimpleWeaponProperties));
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

