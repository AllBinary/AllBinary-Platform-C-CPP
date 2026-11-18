#ifndef ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_H
#define ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_H
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
typedef struct HighScores HighScores;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
struct NullHighScoresSingletonFactory {
    char unused;
};


NullHighScoresSingletonFactory* NullHighScoresSingletonFactory_new(void);
void NullHighScoresSingletonFactory_init(NullHighScoresSingletonFactory* this);

HighScores* NullHighScoresSingletonFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullHighScoresSingletonFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullHighScoresSingletonFactory_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_H
