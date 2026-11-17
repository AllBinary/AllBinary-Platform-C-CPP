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
// package org.allbinary.game.score.remote

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct RemoteHighScoresProcessorFactory RemoteHighScoresProcessorFactory;
struct RemoteHighScoresProcessorFactory {
    char unused;
};

static RemoteHighScoresProcessorInterface* RemoteHighScoresProcessorFactory_SINGLETON;

RemoteHighScoresProcessorFactory* RemoteHighScoresProcessorFactory_new(void);
RemoteHighScoresProcessorInterface* RemoteHighScoresProcessorFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void RemoteHighScoresProcessorFactory_staticInit(void) {
    RemoteHighScoresProcessorFactory_SINGLETON = RemoteHighScoresProcessor_new();
}

void RemoteHighScoresProcessorFactory_init(RemoteHighScoresProcessorFactory* this) {
}

RemoteHighScoresProcessorFactory* RemoteHighScoresProcessorFactory_new(void) {
    RemoteHighScoresProcessorFactory* this = calloc(1, sizeof(RemoteHighScoresProcessorFactory));
    RemoteHighScoresProcessorFactory_init(this);
    return this;
}


RemoteHighScoresProcessorInterface* RemoteHighScoresProcessorFactory_getInstance(void) {
        return RemoteHighScoresProcessorFactory_SINGLETON;
}

