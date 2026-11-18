#ifndef ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H
#define ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H
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
typedef struct ScoreableInterface ScoreableInterface;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
#include "java/lang/Integer.h"
#include "org/allbinary/game/score/ScoreableInterface.h"

typedef struct Scoreable Scoreable;
struct Scoreable {
    ScoreableInterface ScoreableInterface_interface;
    int32_t points;
};

extern int32_t Scoreable_ID;

Scoreable* Scoreable_new(int32_t points);

void Scoreable_init(Scoreable* this, int32_t points);

void Scoreable_addPoints(Scoreable* this, int32_t points);

void Scoreable_removePoints(Scoreable* this, int32_t points);

void Scoreable_setPoints(Scoreable* this, int32_t points);

int32_t Scoreable_getPoints(Scoreable* this);
#define Scoreable_new1 Scoreable_new
#define Scoreable_init1 Scoreable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Scoreable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Scoreable_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H
