#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTTRIGGERGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTTRIGGERGAMEINPUTPROCESSOR_H
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
typedef struct SpecialGameInputProcessor SpecialGameInputProcessor;
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"

typedef struct SpecialAnalogLeftTriggerGameInputProcessor SpecialAnalogLeftTriggerGameInputProcessor;
struct SpecialAnalogLeftTriggerGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialAnalogLeftTriggerGameInputProcessor* SpecialAnalogLeftTriggerGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogLeftTriggerGameInputProcessor_init(SpecialAnalogLeftTriggerGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogLeftTriggerGameInputProcessor_processAnalog(SpecialAnalogLeftTriggerGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue);
#define SpecialAnalogLeftTriggerGameInputProcessor_new1 SpecialAnalogLeftTriggerGameInputProcessor_new
#define SpecialAnalogLeftTriggerGameInputProcessor_init1 SpecialAnalogLeftTriggerGameInputProcessor_init
#ifndef SpecialAnalogLeftTriggerGameInputProcessor_getInstance
#define SpecialAnalogLeftTriggerGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialAnalogLeftTriggerGameInputProcessor_processEvent
#define SpecialAnalogLeftTriggerGameInputProcessor_processEvent GameInputProcessor_processEvent
#endif
#ifndef SpecialAnalogLeftTriggerGameInputProcessor_processReleasedEvent
#define SpecialAnalogLeftTriggerGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialAnalogLeftTriggerGameInputProcessor_process
#define SpecialAnalogLeftTriggerGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialAnalogLeftTriggerGameInputProcessor_processReleased
#define SpecialAnalogLeftTriggerGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialAnalogLeftTriggerGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialAnalogLeftTriggerGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGLEFTTRIGGERGAMEINPUTPROCESSOR_H
