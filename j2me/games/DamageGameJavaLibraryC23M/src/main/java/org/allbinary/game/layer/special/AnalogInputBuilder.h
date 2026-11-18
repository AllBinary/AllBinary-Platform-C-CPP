#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H
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
typedef struct SpecialUpGameInputProcessor SpecialUpGameInputProcessor;
typedef struct SpecialDownGameInputProcessor SpecialDownGameInputProcessor;
typedef struct SpecialRightGameInputProcessor SpecialRightGameInputProcessor;
typedef struct SpecialLeftGameInputProcessor SpecialLeftGameInputProcessor;
typedef struct Special1GameInputProcessor Special1GameInputProcessor;
typedef struct Special3GameInputProcessor Special3GameInputProcessor;
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct SpecialAnalogUpGameInputProcessor SpecialAnalogUpGameInputProcessor;
typedef struct SpecialAnalogDownGameInputProcessor SpecialAnalogDownGameInputProcessor;
typedef struct SpecialAnalogRightGameInputProcessor SpecialAnalogRightGameInputProcessor;
typedef struct SpecialAnalogLeftGameInputProcessor SpecialAnalogLeftGameInputProcessor;
typedef struct SpecialAnalogLeftTriggerGameInputProcessor SpecialAnalogLeftTriggerGameInputProcessor;
typedef struct SpecialAnalogRightTriggerGameInputProcessor SpecialAnalogRightTriggerGameInputProcessor;
typedef struct Canvas Canvas;
typedef struct GameInputProcessor GameInputProcessor;

typedef struct AnalogInputBuilder AnalogInputBuilder;
struct AnalogInputBuilder {
    char unused;
};


AnalogInputBuilder* AnalogInputBuilder_new(void);
void AnalogInputBuilder_init(AnalogInputBuilder* this);

AnalogInputBuilder* AnalogInputBuilder_getInstance(void);

void AnalogInputBuilder_disable(AnalogInputBuilder* this, GameInputProcessor** inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void AnalogInputBuilder_enable(AnalogInputBuilder* this, GameInputProcessor** inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnalogInputBuilder_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnalogInputBuilder_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H
