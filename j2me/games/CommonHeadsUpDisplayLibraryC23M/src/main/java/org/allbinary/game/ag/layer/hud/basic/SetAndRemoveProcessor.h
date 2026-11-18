#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SETANDREMOVEPROCESSOR_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SETANDREMOVEPROCESSOR_H
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
// package org.allbinary.game.ag.layer.hud.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PlayerGameNotificationHud PlayerGameNotificationHud;
typedef struct Processor Processor;
#include "org/allbinary/canvas/Processor.h"
#if __has_include("org/allbinary/game/ag/layer/hud/basic/PlayerGameNotificationHud.h")
#include "org/allbinary/game/ag/layer/hud/basic/PlayerGameNotificationHud.h"
#endif

typedef struct SetAndRemoveProcessor SetAndRemoveProcessor;
struct SetAndRemoveProcessor {
    Processor base;
    PlayerGameNotificationHud* updateMeasurementProcessor;
};


SetAndRemoveProcessor* SetAndRemoveProcessor_new(PlayerGameNotificationHud* updateMeasurementProcessor);

void SetAndRemoveProcessor_init(SetAndRemoveProcessor* this, PlayerGameNotificationHud* updateMeasurementProcessor);

void SetAndRemoveProcessor_process(SetAndRemoveProcessor* this);
#define SetAndRemoveProcessor_new1 SetAndRemoveProcessor_new
#define SetAndRemoveProcessor_init1 SetAndRemoveProcessor_init
#ifndef SetAndRemoveProcessor_getInstance
#define SetAndRemoveProcessor_getInstance Processor_getInstance
#endif
#ifndef SetAndRemoveProcessor_processt
#define SetAndRemoveProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SetAndRemoveProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SetAndRemoveProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SETANDREMOVEPROCESSOR_H
