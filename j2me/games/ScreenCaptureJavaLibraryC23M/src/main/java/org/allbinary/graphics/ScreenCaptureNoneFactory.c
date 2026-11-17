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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ScreenCaptureNoneFactory ScreenCaptureNoneFactory;
struct ScreenCaptureNoneFactory {
    char unused;
};

static ScreenCapture* ScreenCaptureNoneFactory_instance;

ScreenCaptureNoneFactory* ScreenCaptureNoneFactory_new(void);
ScreenCapture* ScreenCaptureNoneFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ScreenCaptureNoneFactory_staticInit(void) {
    ScreenCaptureNoneFactory_instance = ScreenCapture_new();
}

void ScreenCaptureNoneFactory_init(ScreenCaptureNoneFactory* this) {
}

ScreenCaptureNoneFactory* ScreenCaptureNoneFactory_new(void) {
    ScreenCaptureNoneFactory* this = calloc(1, sizeof(ScreenCaptureNoneFactory));
    ScreenCaptureNoneFactory_init(this);
    return this;
}


ScreenCapture* ScreenCaptureNoneFactory_getInstance(void) {
        return ScreenCaptureNoneFactory_instance;
}

