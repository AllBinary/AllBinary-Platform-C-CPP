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

typedef struct RemoteHighScoresSubmissionProcessorFactory RemoteHighScoresSubmissionProcessorFactory;
struct RemoteHighScoresSubmissionProcessorFactory {
    char unused;
};

static RemoteHighScoresSubmissionProcessorInterface* RemoteHighScoresSubmissionProcessorFactory_SINGLETON;

RemoteHighScoresSubmissionProcessorFactory* RemoteHighScoresSubmissionProcessorFactory_new(void);
RemoteHighScoresSubmissionProcessorInterface* RemoteHighScoresSubmissionProcessorFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void RemoteHighScoresSubmissionProcessorFactory_staticInit(void) {
    RemoteHighScoresSubmissionProcessorFactory_SINGLETON = RemoteHighScoresSubmissionProcessor_new();
}

void RemoteHighScoresSubmissionProcessorFactory_init(RemoteHighScoresSubmissionProcessorFactory* this) {
}

RemoteHighScoresSubmissionProcessorFactory* RemoteHighScoresSubmissionProcessorFactory_new(void) {
    RemoteHighScoresSubmissionProcessorFactory* this = calloc(1, sizeof(RemoteHighScoresSubmissionProcessorFactory));
    RemoteHighScoresSubmissionProcessorFactory_init(this);
    return this;
}


RemoteHighScoresSubmissionProcessorInterface* RemoteHighScoresSubmissionProcessorFactory_getInstance(void) {
        return RemoteHighScoresSubmissionProcessorFactory_SINGLETON;
}

