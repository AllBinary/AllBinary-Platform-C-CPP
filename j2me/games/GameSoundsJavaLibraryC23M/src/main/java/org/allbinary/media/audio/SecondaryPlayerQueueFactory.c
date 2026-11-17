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

typedef struct SecondaryPlayerQueueFactory SecondaryPlayerQueueFactory;
struct SecondaryPlayerQueueFactory {
    char unused;
};

static PlayerQueue* SecondaryPlayerQueueFactory_SINGLETON;

SecondaryPlayerQueueFactory* SecondaryPlayerQueueFactory_new(void);
PlayerQueue* SecondaryPlayerQueueFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void SecondaryPlayerQueueFactory_staticInit(void) {
    SecondaryPlayerQueueFactory_SINGLETON = PlayerQueue_new(4);
}

void SecondaryPlayerQueueFactory_init(SecondaryPlayerQueueFactory* this) {
}

SecondaryPlayerQueueFactory* SecondaryPlayerQueueFactory_new(void) {
    SecondaryPlayerQueueFactory* this = calloc(1, sizeof(SecondaryPlayerQueueFactory));
    SecondaryPlayerQueueFactory_init(this);
    return this;
}


PlayerQueue* SecondaryPlayerQueueFactory_getInstance(void) {
        return SecondaryPlayerQueueFactory_SINGLETON;
}

