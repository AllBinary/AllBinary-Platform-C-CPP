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
// package org.allbinary.logic.visual.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MediaTypeData MediaTypeData;
struct MediaTypeData {
    const char* RESIZABLE_MEDIA;
    const char* NOT_RESIZABLE_MEDIA;
};

static MediaTypeData* MediaTypeData_instance;

MediaTypeData* MediaTypeData_new(void);
MediaTypeData* MediaTypeData_getInstance(void);

void MediaTypeData_init(MediaTypeData* this);

// Static fields with runtime initializers: call this once at startup
void MediaTypeData_staticInit(void) {
    MediaTypeData_instance = MediaTypeData_new();
}

static void MediaTypeData_initFields(MediaTypeData* this) {
    this->RESIZABLE_MEDIA = "RESIZABLE_MEDIA";
    this->NOT_RESIZABLE_MEDIA = "NOT_RESIZABLE_MEDIA";
}


MediaTypeData* MediaTypeData_getInstance(void) {
        return MediaTypeData_instance;
}


void MediaTypeData_init(MediaTypeData* this) {
    MediaTypeData_initFields(this);
}

MediaTypeData* MediaTypeData_new(void) {
    MediaTypeData* this = calloc(1, sizeof(MediaTypeData));
    MediaTypeData_init(this);
    return this;
}

