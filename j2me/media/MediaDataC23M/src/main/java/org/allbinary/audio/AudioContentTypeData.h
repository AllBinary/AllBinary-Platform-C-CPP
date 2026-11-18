#ifndef ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATA_H
#define ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATA_H
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
#define AudioContentTypeData_new1 AudioContentTypeData_new
#define AudioContentTypeData_init1 AudioContentTypeData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AudioContentTypeData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AudioContentTypeData_register(void);


#endif // ORG_ALLBINARY_AUDIO_AUDIOCONTENTTYPEDATA_H
