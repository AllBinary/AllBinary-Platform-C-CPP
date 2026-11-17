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
// package org.allbinary.game.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/init/Init.h"

typedef struct ResourceInitialization ResourceInitialization;
struct ResourceInitialization {
    Init base;
};


ResourceInitialization* ResourceInitialization_new(void);

void ResourceInitialization_init(ResourceInitialization* this) {
    Init_init(&this->base);
}

ResourceInitialization* ResourceInitialization_new(void) {
    ResourceInitialization* this = calloc(1, sizeof(ResourceInitialization));
    ResourceInitialization_init(this);
    return this;
}

