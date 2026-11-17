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
// package org.allbinary.media.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PrimaryPlayerQueueFactory PrimaryPlayerQueueFactory;
struct PrimaryPlayerQueueFactory {
    char unused;
};

static PlayerQueue* PrimaryPlayerQueueFactory_SINGLETON;

PrimaryPlayerQueueFactory* PrimaryPlayerQueueFactory_new(void);
PlayerQueue* PrimaryPlayerQueueFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PrimaryPlayerQueueFactory_staticInit(void) {
    PrimaryPlayerQueueFactory_SINGLETON = PlayerQueue_new(4);
}

void PrimaryPlayerQueueFactory_init(PrimaryPlayerQueueFactory* this) {
}

PrimaryPlayerQueueFactory* PrimaryPlayerQueueFactory_new(void) {
    PrimaryPlayerQueueFactory* this = calloc(1, sizeof(PrimaryPlayerQueueFactory));
    PrimaryPlayerQueueFactory_init(this);
    return this;
}


PlayerQueue* PrimaryPlayerQueueFactory_getInstance(void) {
        return PrimaryPlayerQueueFactory_SINGLETON;
}

