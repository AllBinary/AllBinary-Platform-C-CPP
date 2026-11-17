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

typedef struct ScreenCaptureFactory ScreenCaptureFactory;
struct ScreenCaptureFactory {
    char unused;
};

static ScreenCapture* ScreenCaptureFactory_instance;

ScreenCaptureFactory* ScreenCaptureFactory_new(void);
ScreenCapture* ScreenCaptureFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ScreenCaptureFactory_staticInit(void) {
    ScreenCaptureFactory_instance = ScreenCaptureNoneFactory_getInstance();
}

void ScreenCaptureFactory_init(ScreenCaptureFactory* this) {
}

ScreenCaptureFactory* ScreenCaptureFactory_new(void) {
    ScreenCaptureFactory* this = calloc(1, sizeof(ScreenCaptureFactory));
    ScreenCaptureFactory_init(this);
    return this;
}


ScreenCapture* ScreenCaptureFactory_getInstance(void) {
        return ScreenCaptureFactory_instance;
}

