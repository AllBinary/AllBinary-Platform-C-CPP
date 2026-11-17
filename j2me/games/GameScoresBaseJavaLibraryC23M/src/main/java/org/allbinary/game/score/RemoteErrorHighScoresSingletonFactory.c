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
#include "org/allbinary/string/CommonStrings.h"

typedef struct RemoteErrorHighScoresSingletonFactory RemoteErrorHighScoresSingletonFactory;
struct RemoteErrorHighScoresSingletonFactory {
    char unused;
};

static HighScores* RemoteErrorHighScoresSingletonFactory_SINGLETON;

RemoteErrorHighScoresSingletonFactory* RemoteErrorHighScoresSingletonFactory_new(void);
HighScores* RemoteErrorHighScoresSingletonFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void RemoteErrorHighScoresSingletonFactory_staticInit(void) {
    RemoteErrorHighScoresSingletonFactory_SINGLETON = HighScores_new(CommonStrings_getInstance()->LOADING, "Remote High Scores Did Not Load", CommonStrings_getInstance()->PERIODS);
}

void RemoteErrorHighScoresSingletonFactory_init(RemoteErrorHighScoresSingletonFactory* this) {
}

RemoteErrorHighScoresSingletonFactory* RemoteErrorHighScoresSingletonFactory_new(void) {
    RemoteErrorHighScoresSingletonFactory* this = calloc(1, sizeof(RemoteErrorHighScoresSingletonFactory));
    RemoteErrorHighScoresSingletonFactory_init(this);
    return this;
}


HighScores* RemoteErrorHighScoresSingletonFactory_getInstance(void) {
        return RemoteErrorHighScoresSingletonFactory_SINGLETON;
}

