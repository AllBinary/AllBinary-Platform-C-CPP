#ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTTRIGGERGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTTRIGGERGAMEINPUTPROCESSOR_H
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

typedef struct SpecialAnalogRightTriggerGameInputProcessor SpecialAnalogRightTriggerGameInputProcessor;
struct SpecialAnalogRightTriggerGameInputProcessor {
    SpecialGameInputProcessor base;
};


SpecialAnalogRightTriggerGameInputProcessor* SpecialAnalogRightTriggerGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogRightTriggerGameInputProcessor_init(SpecialAnalogRightTriggerGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

void SpecialAnalogRightTriggerGameInputProcessor_processAnalog(SpecialAnalogRightTriggerGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue);
#define SpecialAnalogRightTriggerGameInputProcessor_new1 SpecialAnalogRightTriggerGameInputProcessor_new
#define SpecialAnalogRightTriggerGameInputProcessor_init1 SpecialAnalogRightTriggerGameInputProcessor_init
#ifndef SpecialAnalogRightTriggerGameInputProcessor_getInstance
#define SpecialAnalogRightTriggerGameInputProcessor_getInstance GameInputProcessor_getInstance
#endif
#ifndef SpecialAnalogRightTriggerGameInputProcessor_processEvent
#define SpecialAnalogRightTriggerGameInputProcessor_processEvent GameInputProcessor_processEvent
#endif
#ifndef SpecialAnalogRightTriggerGameInputProcessor_processReleasedEvent
#define SpecialAnalogRightTriggerGameInputProcessor_processReleasedEvent GameInputProcessor_processReleasedEvent
#endif
#ifndef SpecialAnalogRightTriggerGameInputProcessor_process
#define SpecialAnalogRightTriggerGameInputProcessor_process GameInputProcessor_process
#endif
#ifndef SpecialAnalogRightTriggerGameInputProcessor_processReleased
#define SpecialAnalogRightTriggerGameInputProcessor_processReleased GameInputProcessor_processReleased
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialAnalogRightTriggerGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpecialAnalogRightTriggerGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTTRIGGERGAMEINPUTPROCESSOR_H
