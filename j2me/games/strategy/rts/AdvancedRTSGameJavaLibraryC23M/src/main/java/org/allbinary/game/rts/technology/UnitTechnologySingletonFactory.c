/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.rts.technology

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct UnitTechnologySingletonFactory UnitTechnologySingletonFactory;
struct UnitTechnologySingletonFactory {
    int32_t damage;
    int32_t health;
    int32_t reload;
    int32_t repair;
    int32_t speed;
};

static UnitTechnologySingletonFactory* UnitTechnologySingletonFactory_instance;

UnitTechnologySingletonFactory* UnitTechnologySingletonFactory_new(void);
UnitTechnologySingletonFactory* UnitTechnologySingletonFactory_getInstance(void);

void UnitTechnologySingletonFactory_init(UnitTechnologySingletonFactory* this);
void UnitTechnologySingletonFactory_init(UnitTechnologySingletonFactory* this);
int32_t UnitTechnologySingletonFactory_getDamage(UnitTechnologySingletonFactory* this);
void UnitTechnologySingletonFactory_setDamage(UnitTechnologySingletonFactory* this, int32_t damage);
int32_t UnitTechnologySingletonFactory_getHealth(UnitTechnologySingletonFactory* this);
void UnitTechnologySingletonFactory_setHealth(UnitTechnologySingletonFactory* this, int32_t health);
int32_t UnitTechnologySingletonFactory_getReload(UnitTechnologySingletonFactory* this);
void UnitTechnologySingletonFactory_setReload(UnitTechnologySingletonFactory* this, int32_t reload);
int32_t UnitTechnologySingletonFactory_getRepair(UnitTechnologySingletonFactory* this);
void UnitTechnologySingletonFactory_setRepair(UnitTechnologySingletonFactory* this, int32_t repair);
int32_t UnitTechnologySingletonFactory_getSpeed(UnitTechnologySingletonFactory* this);
void UnitTechnologySingletonFactory_setSpeed(UnitTechnologySingletonFactory* this, int32_t speed);

// Static fields with runtime initializers: call this once at startup
void UnitTechnologySingletonFactory_staticInit(void) {
    UnitTechnologySingletonFactory_instance = UnitTechnologySingletonFactory_new();
}

static void UnitTechnologySingletonFactory_initFields(UnitTechnologySingletonFactory* this) {
    this->damage = 0;
    this->health = 0;
    this->reload = 0;
    this->repair = 0;
    this->speed = 0;
}


UnitTechnologySingletonFactory* UnitTechnologySingletonFactory_getInstance(void) {
        return UnitTechnologySingletonFactory_instance;
}


void UnitTechnologySingletonFactory_init(UnitTechnologySingletonFactory* this) {
    UnitTechnologySingletonFactory_initFields(this);
}

UnitTechnologySingletonFactory* UnitTechnologySingletonFactory_new(void) {
    UnitTechnologySingletonFactory* this = calloc(1, sizeof(UnitTechnologySingletonFactory));
    UnitTechnologySingletonFactory_init(this);
    return this;
}


void UnitTechnologySingletonFactory_init(UnitTechnologySingletonFactory* this) {
        UnitTechnologySingletonFactory_setDamage(this, 0);
        UnitTechnologySingletonFactory_setHealth(this, 0);
        UnitTechnologySingletonFactory_setReload(this, 0);
        UnitTechnologySingletonFactory_setRepair(this, 0);
        UnitTechnologySingletonFactory_setSpeed(this, 0);
}


int32_t UnitTechnologySingletonFactory_getDamage(UnitTechnologySingletonFactory* this) {
        return this->damage;
}


void UnitTechnologySingletonFactory_setDamage(UnitTechnologySingletonFactory* this, int32_t damage) {
        this->damage = damage;
}


int32_t UnitTechnologySingletonFactory_getHealth(UnitTechnologySingletonFactory* this) {
        return this->health;
}


void UnitTechnologySingletonFactory_setHealth(UnitTechnologySingletonFactory* this, int32_t health) {
        this->health = health;
}


int32_t UnitTechnologySingletonFactory_getReload(UnitTechnologySingletonFactory* this) {
        return this->reload;
}


void UnitTechnologySingletonFactory_setReload(UnitTechnologySingletonFactory* this, int32_t reload) {
        this->reload = reload;
}


int32_t UnitTechnologySingletonFactory_getRepair(UnitTechnologySingletonFactory* this) {
        return this->repair;
}


void UnitTechnologySingletonFactory_setRepair(UnitTechnologySingletonFactory* this, int32_t repair) {
        this->repair = repair;
}


int32_t UnitTechnologySingletonFactory_getSpeed(UnitTechnologySingletonFactory* this) {
        return this->speed;
}


void UnitTechnologySingletonFactory_setSpeed(UnitTechnologySingletonFactory* this, int32_t speed) {
        this->speed = speed;
}

