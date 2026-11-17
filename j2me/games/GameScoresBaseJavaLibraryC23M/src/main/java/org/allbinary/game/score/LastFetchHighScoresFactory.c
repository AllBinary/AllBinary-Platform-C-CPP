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
#include "org/allbinary/logic/NullUtil.h"

typedef struct LastFetchHighScoresFactory LastFetchHighScoresFactory;
struct LastFetchHighScoresFactory {
    HighScores** highScoresArray;
};

static Any* LastFetchHighScoresFactory_instance;

LastFetchHighScoresFactory* LastFetchHighScoresFactory_new(void);
LastFetchHighScoresFactory* LastFetchHighScoresFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LastFetchHighScoresFactory_staticInit(void) {
    LastFetchHighScoresFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void LastFetchHighScoresFactory_initFields(LastFetchHighScoresFactory* this) {
    this->highScoresArray = NoHighScoresFactory_getInstance()->NO_HIGH_SCORES;
}

void LastFetchHighScoresFactory_init(LastFetchHighScoresFactory* this) {
    LastFetchHighScoresFactory_initFields(this);
}

LastFetchHighScoresFactory* LastFetchHighScoresFactory_new(void) {
    LastFetchHighScoresFactory* this = calloc(1, sizeof(LastFetchHighScoresFactory));
    LastFetchHighScoresFactory_init(this);
    return this;
}


LastFetchHighScoresFactory* LastFetchHighScoresFactory_getInstance(void) {
        if (LastFetchHighScoresFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            LastFetchHighScoresFactory_instance = LastFetchHighScoresFactory_new();
        }
        return ((LastFetchHighScoresFactory*) LastFetchHighScoresFactory_instance);
}

