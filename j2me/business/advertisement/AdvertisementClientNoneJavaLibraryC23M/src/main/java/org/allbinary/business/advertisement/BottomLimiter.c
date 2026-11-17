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
// package org.allbinary.business.advertisement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"

typedef struct BottomLimiter BottomLimiter;
struct BottomLimiter {
    int32_t bottom;
    int32_t deltaY;
    int32_t lower;
    int32_t higher;
};

static BottomLimiter* BottomLimiter_instance;

BottomLimiter* BottomLimiter_new(void);
BottomLimiter* BottomLimiter_getInstance(void);

void BottomLimiter_init(BottomLimiter* this);
void BottomLimiter_init(BottomLimiter* this, int32_t lower, int32_t higher);
void BottomLimiter_update(BottomLimiter* this);
int32_t BottomLimiter_getDeltaY(BottomLimiter* this);
int32_t BottomLimiter_getBottom(BottomLimiter* this);

// Static fields with runtime initializers: call this once at startup
void BottomLimiter_staticInit(void) {
    BottomLimiter_instance = BottomLimiter_new();
}

static void BottomLimiter_initFields(BottomLimiter* this) {
    this->bottom = 0;
    this->deltaY = 0;
    this->lower = 0;
    this->higher = 0;
}


BottomLimiter* BottomLimiter_getInstance(void) {
        return BottomLimiter_instance;
}


void BottomLimiter_init(BottomLimiter* this) {
    BottomLimiter_initFields(this);
}

BottomLimiter* BottomLimiter_new(void) {
    BottomLimiter* this = calloc(1, sizeof(BottomLimiter));
    BottomLimiter_init(this);
    return this;
}


void BottomLimiter_init(BottomLimiter* this, int32_t lower, int32_t higher) {
        this->lower = lower;
        this->higher = higher;
}


void BottomLimiter_update(BottomLimiter* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(GameAdStateFactory_getInstance());
        if (GameAdState_isShowingAt(gameAdState)) {
            this->deltaY = this->higher;
        } else {
            this->deltaY = this->lower;
        }
        this->bottom = DisplayInfoSingleton_getLastHeight(displayInfo) - this->deltaY;
}


int32_t BottomLimiter_getDeltaY(BottomLimiter* this) {
        return this->deltaY;
}


int32_t BottomLimiter_getBottom(BottomLimiter* this) {
        return this->bottom;
}

