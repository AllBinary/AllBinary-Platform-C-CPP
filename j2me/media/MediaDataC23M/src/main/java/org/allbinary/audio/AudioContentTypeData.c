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
// package org.allbinary.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AudioContentTypeData AudioContentTypeData;
struct AudioContentTypeData {
    const char* name;
};


AudioContentTypeData* AudioContentTypeData_new(const char* name);

void AudioContentTypeData_init(AudioContentTypeData* this, const char* name);
const char* AudioContentTypeData_getName(AudioContentTypeData* this);

static void AudioContentTypeData_initFields(AudioContentTypeData* this) {
    
}


void AudioContentTypeData_init(AudioContentTypeData* this, const char* name) {
    AudioContentTypeData_initFields(this);
        this->name = name;
}

AudioContentTypeData* AudioContentTypeData_new(const char* name) {
    AudioContentTypeData* this = calloc(1, sizeof(AudioContentTypeData));
    AudioContentTypeData_init(this, name);
    return this;
}


const char* AudioContentTypeData_getName(AudioContentTypeData* this) {
        return this->name;
}

