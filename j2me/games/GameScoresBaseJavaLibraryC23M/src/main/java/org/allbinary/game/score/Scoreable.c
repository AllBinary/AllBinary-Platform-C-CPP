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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/game/score/ScoreableInterface.h"

typedef struct Scoreable Scoreable;
struct Scoreable {
    ScoreableInterface ScoreableInterface_interface;
    int32_t points;
};

int32_t Scoreable_ID;

Scoreable* Scoreable_new(int32_t points);

void Scoreable_init(Scoreable* this, int32_t points);
void Scoreable_addPoints(Scoreable* this, int32_t points);
void Scoreable_removePoints(Scoreable* this, int32_t points);
void Scoreable_setPoints(Scoreable* this, int32_t points);
int32_t Scoreable_getPoints(Scoreable* this);

// Static fields with runtime initializers: call this once at startup
void Scoreable_staticInit(void) {
    Scoreable_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 3);
}

static void Scoreable_initFields(Scoreable* this) {
    
}


void Scoreable_init(Scoreable* this, int32_t points) {
    Scoreable_initFields(this);
        this->points = points;
}

Scoreable* Scoreable_new(int32_t points) {
    Scoreable* this = calloc(1, sizeof(Scoreable));
    Scoreable_init(this, points);
    return this;
}


void Scoreable_addPoints(Scoreable* this, int32_t points) {
        this->points += points;
}


void Scoreable_removePoints(Scoreable* this, int32_t points) {
        this->points -= points;
}


void Scoreable_setPoints(Scoreable* this, int32_t points) {
        this->points = points;
}


int32_t Scoreable_getPoints(Scoreable* this) {
        return this->points;
}

