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
// package org.allbinary.game.layer.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInputProcessor.h"

typedef struct AnalogInputBuilder AnalogInputBuilder;
struct AnalogInputBuilder {
    char unused;
};

static AnalogInputBuilder* AnalogInputBuilder_instance;

AnalogInputBuilder* AnalogInputBuilder_new(void);
AnalogInputBuilder* AnalogInputBuilder_getInstance(void);
void AnalogInputBuilder_disable(AnalogInputBuilder* this, GameInputProcessor** inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);
void AnalogInputBuilder_enable(AnalogInputBuilder* this, GameInputProcessor** inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

// Static fields with runtime initializers: call this once at startup
void AnalogInputBuilder_staticInit(void) {
    AnalogInputBuilder_instance = AnalogInputBuilder_new();
}

void AnalogInputBuilder_init(AnalogInputBuilder* this) {
}

AnalogInputBuilder* AnalogInputBuilder_new(void) {
    AnalogInputBuilder* this = calloc(1, sizeof(AnalogInputBuilder));
    AnalogInputBuilder_init(this);
    return this;
}


AnalogInputBuilder* AnalogInputBuilder_getInstance(void) {
        return AnalogInputBuilder_instance;
}


void AnalogInputBuilder_disable(AnalogInputBuilder* this, GameInputProcessor** inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
        inputProcessorArray[Canvas_UP] = SpecialUpGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_DOWN] = SpecialDownGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_RIGHT] = SpecialRightGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_LEFT] = SpecialLeftGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_KEY_NUM0] = Special1GameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_KEY_NUM5] = Special3GameInputProcessor_new(collidableDestroyableDamageableLayer);
}


void AnalogInputBuilder_enable(AnalogInputBuilder* this, GameInputProcessor** inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
        inputProcessorArray[Canvas_UP] = SpecialAnalogUpGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_DOWN] = SpecialAnalogDownGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_RIGHT] = SpecialAnalogRightGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_LEFT] = SpecialAnalogLeftGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_KEY_NUM0] = SpecialAnalogLeftTriggerGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[Canvas_KEY_NUM5] = SpecialAnalogRightTriggerGameInputProcessor_new(collidableDestroyableDamageableLayer);
}

