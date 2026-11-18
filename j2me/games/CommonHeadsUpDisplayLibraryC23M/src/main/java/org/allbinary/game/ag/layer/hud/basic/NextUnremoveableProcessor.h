#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NEXTUNREMOVEABLEPROCESSOR_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NEXTUNREMOVEABLEPROCESSOR_H
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

typedef struct NextUnremoveableProcessor NextUnremoveableProcessor;
struct NextUnremoveableProcessor {
    Processor base;
    PlayerGameNotificationHud* updateMeasurementProcessor;
};


NextUnremoveableProcessor* NextUnremoveableProcessor_new(PlayerGameNotificationHud* updateMeasurementProcessor);

void NextUnremoveableProcessor_init(NextUnremoveableProcessor* this, PlayerGameNotificationHud* updateMeasurementProcessor);

void NextUnremoveableProcessor_process(NextUnremoveableProcessor* this);
#define NextUnremoveableProcessor_new1 NextUnremoveableProcessor_new
#define NextUnremoveableProcessor_init1 NextUnremoveableProcessor_init
#ifndef NextUnremoveableProcessor_getInstance
#define NextUnremoveableProcessor_getInstance Processor_getInstance
#endif
#ifndef NextUnremoveableProcessor_processt
#define NextUnremoveableProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NextUnremoveableProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NextUnremoveableProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NEXTUNREMOVEABLEPROCESSOR_H
