#ifndef ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_H
#define ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_H
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
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
typedef struct SoundsFactoryInterface SoundsFactoryInterface;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;

typedef struct AllBinaryMediaManagerShutdown AllBinaryMediaManagerShutdown;
struct AllBinaryMediaManagerShutdown {
    char unused;
};


AllBinaryMediaManagerShutdown* AllBinaryMediaManagerShutdown_new(void);
void AllBinaryMediaManagerShutdown_init(AllBinaryMediaManagerShutdown* this);

void AllBinaryMediaManagerShutdown_shutdown(SoundsFactoryInterface* soundsFactoryInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryMediaManagerShutdown_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryMediaManagerShutdown_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_H
