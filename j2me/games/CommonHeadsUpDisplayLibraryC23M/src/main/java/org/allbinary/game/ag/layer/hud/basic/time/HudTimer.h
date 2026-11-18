#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_HUDTIMER_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_HUDTIMER_H
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
// package org.allbinary.game.ag.layer.hud.basic.time

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PrimitiveLongSingleton PrimitiveLongSingleton;
typedef struct PrimitiveLongUtil PrimitiveLongUtil;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
#if __has_include("org/allbinary/logic/math/PrimitiveLongUtil.h")
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif

typedef struct HudTimer HudTimer;
struct HudTimer {
    int64_t startTime;
    int64_t hundredthTime;
    int64_t maxTime;
    int64_t modifier;
    uint16_t* hundrethsString;
    int32_t totalDigits;
    PrimitiveLongUtil* primitiveLongUtil;
    uint16_t* MAX;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


HudTimer* HudTimer_new(int32_t maxTime);

void HudTimer_init(HudTimer* this, int32_t maxTime);

void HudTimer_start(HudTimer* this);

int64_t HudTimer_get(HudTimer* this);

void HudTimer_update(HudTimer* this);

void HudTimer_reduce(HudTimer* this, int32_t value);

void HudTimer_add(HudTimer* this, int32_t value);

uint16_t* HudTimer_getTimeChars(HudTimer* this);

int32_t HudTimer_getCurrentTotalDigits(HudTimer* this);
#define HudTimer_new1 HudTimer_new
#define HudTimer_init1 HudTimer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HudTimer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HudTimer_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_HUDTIMER_H
