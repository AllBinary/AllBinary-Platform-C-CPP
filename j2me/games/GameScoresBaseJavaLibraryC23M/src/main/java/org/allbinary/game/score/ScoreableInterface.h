#ifndef ORG_ALLBINARY_GAME_SCORE_SCOREABLEINTERFACE_H
#define ORG_ALLBINARY_GAME_SCORE_SCOREABLEINTERFACE_H
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
struct ScoreableInterface {
    int32_t (*getPoints)(void* this);
    void (*addPoints)(void* this, int32_t points);
    void (*removePoints)(void* this, int32_t points);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScoreableInterface_staticInit(void);

static inline int32_t ScoreableInterface_getPoints(void* this) {
    return ((__typeof__(((ScoreableInterface*) nullptr)->getPoints)) java_method_of(this, "getPoints"))(this);
}

static inline void ScoreableInterface_addPoints(void* this, int32_t points) {
    ((__typeof__(((ScoreableInterface*) nullptr)->addPoints)) java_method_of(this, "addPoints"))(this, points);
}

static inline void ScoreableInterface_removePoints(void* this, int32_t points) {
    ((__typeof__(((ScoreableInterface*) nullptr)->removePoints)) java_method_of(this, "removePoints"))(this, points);
}


#endif // ORG_ALLBINARY_GAME_SCORE_SCOREABLEINTERFACE_H
