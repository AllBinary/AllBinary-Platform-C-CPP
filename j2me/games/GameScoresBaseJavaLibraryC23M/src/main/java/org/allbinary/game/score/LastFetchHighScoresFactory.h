#ifndef ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H
#define ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
typedef struct NoHighScoresFactory NoHighScoresFactory;
typedef struct HighScores HighScores;
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

typedef struct LastFetchHighScoresFactory LastFetchHighScoresFactory;
struct LastFetchHighScoresFactory {
    HighScores** highScoresArray;
};


LastFetchHighScoresFactory* LastFetchHighScoresFactory_new(void);
void LastFetchHighScoresFactory_init(LastFetchHighScoresFactory* this);

LastFetchHighScoresFactory* LastFetchHighScoresFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LastFetchHighScoresFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LastFetchHighScoresFactory_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H
