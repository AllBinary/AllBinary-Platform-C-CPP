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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"

typedef struct Aggression Aggression;
struct Aggression {
    int32_t ram;
    int32_t projectile;
    int32_t drops;
};


Aggression* Aggression_new(int32_t ram, int32_t projectile, int32_t drops);

void Aggression_init(Aggression* this, int32_t ram, int32_t projectile, int32_t drops);
int32_t Aggression_getRam(Aggression* this);
void Aggression_setRam(Aggression* this, int32_t ram);
int32_t Aggression_getProjectile(Aggression* this);
void Aggression_setProjectile(Aggression* this, int32_t projectile);
int32_t Aggression_getDrops(Aggression* this);
void Aggression_setDrops(Aggression* this, int32_t drops);

static void Aggression_initFields(Aggression* this) {
    this->ram = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
    this->projectile = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
    this->drops = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
}


void Aggression_init(Aggression* this, int32_t ram, int32_t projectile, int32_t drops) {
    Aggression_initFields(this);
        Aggression_setRam(this, ram);
        Aggression_setProjectile(this, projectile);
        Aggression_setDrops(this, drops);
}

Aggression* Aggression_new(int32_t ram, int32_t projectile, int32_t drops) {
    Aggression* this = calloc(1, sizeof(Aggression));
    Aggression_init(this, ram, projectile, drops);
    return this;
}


int32_t Aggression_getRam(Aggression* this) {
        return this->ram;
}


void Aggression_setRam(Aggression* this, int32_t ram) {
        this->ram = ram;
}


int32_t Aggression_getProjectile(Aggression* this) {
        return this->projectile;
}


void Aggression_setProjectile(Aggression* this, int32_t projectile) {
        this->projectile = projectile;
}


int32_t Aggression_getDrops(Aggression* this) {
        return this->drops;
}


void Aggression_setDrops(Aggression* this, int32_t drops) {
        this->drops = drops;
}

