#ifndef ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H
#define ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H
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
typedef struct Scoreable Scoreable;
#include "org/allbinary/game/score/Scoreable.h"

typedef struct NoScoreable NoScoreable;
struct NoScoreable {
    Scoreable base;
};


NoScoreable* NoScoreable_new(void);

NoScoreable* NoScoreable_getInstance(void);

void NoScoreable_init(NoScoreable* this);

void NoScoreable_addPoints(NoScoreable* this, int32_t points);

void NoScoreable_removePoints(NoScoreable* this, int32_t points);
#define NoScoreable_new0 NoScoreable_new
#define NoScoreable_init0 NoScoreable_init
#ifndef NoScoreable_setPoints
#define NoScoreable_setPoints Scoreable_setPoints
#endif
#ifndef NoScoreable_getPoints
#define NoScoreable_getPoints Scoreable_getPoints
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoScoreable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoScoreable_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H
