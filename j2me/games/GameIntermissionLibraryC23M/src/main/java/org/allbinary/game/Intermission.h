#ifndef ORG_ALLBINARY_GAME_INTERMISSION_H
#define ORG_ALLBINARY_GAME_INTERMISSION_H
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
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct IntermissionInterface IntermissionInterface;
typedef struct NullIntermissionEnableListener NullIntermissionEnableListener;
typedef struct IntermissionEnableListenerInterface IntermissionEnableListenerInterface;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "org/allbinary/game/IntermissionInterface.h"
#if __has_include("org/allbinary/game/IntermissionEnableListenerInterface.h")
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"
#endif

typedef struct Intermission Intermission;
struct Intermission {
    IntermissionInterface IntermissionInterface_interface;
    bool enabled;
    TimeDelayHelper* timeElapsedHelper;
    IntermissionEnableListenerInterface* intermissionEnableListener;
};


Intermission* Intermission_new(void);

void Intermission_init(Intermission* this);

void Intermission_setListener(Intermission* this, IntermissionEnableListenerInterface* enableListener);

TimeDelayHelper* Intermission_getTimeDelayHelper(Intermission* this);

void Intermission_setEnabled(Intermission* this, bool enabled);

bool Intermission_isEnabled(Intermission* this);
#define Intermission_new0 Intermission_new
#define Intermission_init0 Intermission_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Intermission_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Intermission_register(void);

#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

#endif // ORG_ALLBINARY_GAME_INTERMISSION_H
