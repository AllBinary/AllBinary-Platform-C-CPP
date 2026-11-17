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
// package org.allbinary.thread

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BaseImageLoadingProcessor BaseImageLoadingProcessor;
struct BaseImageLoadingProcessor {
    char unused;
};

static BaseImageLoadingProcessor* BaseImageLoadingProcessor_instance;

BaseImageLoadingProcessor* BaseImageLoadingProcessor_new(void);
BaseImageLoadingProcessor* BaseImageLoadingProcessor_getInstance(void);
void BaseImageLoadingProcessor_runTask(BaseImageLoadingProcessor* this);

// Static fields with runtime initializers: call this once at startup
void BaseImageLoadingProcessor_staticInit(void) {
    BaseImageLoadingProcessor_instance = BaseImageLoadingProcessor_new();
}

void BaseImageLoadingProcessor_init(BaseImageLoadingProcessor* this) {
}

BaseImageLoadingProcessor* BaseImageLoadingProcessor_new(void) {
    BaseImageLoadingProcessor* this = calloc(1, sizeof(BaseImageLoadingProcessor));
    BaseImageLoadingProcessor_init(this);
    return this;
}


BaseImageLoadingProcessor* BaseImageLoadingProcessor_getInstance(void) {
        return BaseImageLoadingProcessor_instance;
}


void BaseImageLoadingProcessor_runTask(BaseImageLoadingProcessor* this) {
}

