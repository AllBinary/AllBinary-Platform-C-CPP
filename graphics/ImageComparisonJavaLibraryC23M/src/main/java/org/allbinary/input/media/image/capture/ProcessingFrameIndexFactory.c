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
// package org.allbinary.input.media.image.capture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ProcessingFrameIndexFactory ProcessingFrameIndexFactory;
struct ProcessingFrameIndexFactory {
    char unused;
};

static int64_t ProcessingFrameIndexFactory_currentFrame = 0LL;

ProcessingFrameIndexFactory* ProcessingFrameIndexFactory_new(void);

void ProcessingFrameIndexFactory_init(ProcessingFrameIndexFactory* this);
int64_t ProcessingFrameIndexFactory_next(void);


void ProcessingFrameIndexFactory_init(ProcessingFrameIndexFactory* this) {
}

ProcessingFrameIndexFactory* ProcessingFrameIndexFactory_new(void) {
    ProcessingFrameIndexFactory* this = calloc(1, sizeof(ProcessingFrameIndexFactory));
    ProcessingFrameIndexFactory_init(this);
    return this;
}


// synchronized
int64_t ProcessingFrameIndexFactory_next(void) {
        return ProcessingFrameIndexFactory_currentFrame++;
}

