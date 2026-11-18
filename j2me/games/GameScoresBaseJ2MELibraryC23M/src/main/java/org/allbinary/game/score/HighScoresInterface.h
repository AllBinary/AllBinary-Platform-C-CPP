#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESINTERFACE_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESINTERFACE_H
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
typedef struct HighScore HighScore;
typedef struct BasicArrayList BasicArrayList;

typedef struct HighScoresInterface HighScoresInterface;
struct HighScoresInterface {
    BasicArrayList* (*getList)(void* this);
    void (*addHighScore)(void* this, HighScore* newHighScore);
    int32_t (*getTotal)(void* this);
    bool (*isBestScore)(void* this, HighScore* newHighScore);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresInterface_staticInit(void);

static inline BasicArrayList* HighScoresInterface_getList(void* this) {
    return ((__typeof__(((HighScoresInterface*) nullptr)->getList)) java_method_of(this, "getList"))(this);
}

static inline void HighScoresInterface_addHighScore(void* this, HighScore* newHighScore) {
    ((__typeof__(((HighScoresInterface*) nullptr)->addHighScore)) java_method_of(this, "addHighScore"))(this, newHighScore);
}

static inline int32_t HighScoresInterface_getTotal(void* this) {
    return ((__typeof__(((HighScoresInterface*) nullptr)->getTotal)) java_method_of(this, "getTotal"))(this);
}

static inline bool HighScoresInterface_isBestScore(void* this, HighScore* newHighScore) {
    return ((__typeof__(((HighScoresInterface*) nullptr)->isBestScore)) java_method_of(this, "isBestScore"))(this, newHighScore);
}

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESINTERFACE_H
