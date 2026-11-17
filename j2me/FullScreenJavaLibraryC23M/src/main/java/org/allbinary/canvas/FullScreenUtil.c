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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
// #include "javax/microedition/lcdui/CommandListener.h"

typedef struct FullScreenUtil FullScreenUtil;
struct FullScreenUtil {
    char unused;
};

static FullScreenUtil* FullScreenUtil_instance;

FullScreenUtil* FullScreenUtil_new(void);
FullScreenUtil* FullScreenUtil_getInstance(void);
void FullScreenUtil_initOnRun(FullScreenUtil* this, Canvas* fullScreenInterface, CommandListener* commandListener);
void FullScreenUtil_init(FullScreenUtil* this, Canvas* fullScreenInterface);
bool FullScreenUtil_isScreenChange(FullScreenUtil* this, bool isFullScreen);
bool FullScreenUtil_isScreenChangeCanvas(FullScreenUtil* this, Canvas* fullScreenInterface);

// Static fields with runtime initializers: call this once at startup
void FullScreenUtil_staticInit(void) {
    FullScreenUtil_instance = FullScreenUtil_new();
}

void FullScreenUtil_init(FullScreenUtil* this) {
}

FullScreenUtil* FullScreenUtil_new(void) {
    FullScreenUtil* this = calloc(1, sizeof(FullScreenUtil));
    FullScreenUtil_init(this);
    return this;
}


FullScreenUtil* FullScreenUtil_getInstance(void) {
        return FullScreenUtil_instance;
}


// throws Exception
void FullScreenUtil_initOnRun(FullScreenUtil* this, Canvas* fullScreenInterface, CommandListener* commandListener) {
        RunnableCanvas_waitOnNotify((((RunnableCanvas*) fullScreenInterface)), 0);
        if (commandListener != nullptr) {
            FullScreenUtil_init(this, fullScreenInterface);
        }
}


void FullScreenUtil_init(FullScreenUtil* this, Canvas* fullScreenInterface) {
        MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
        Features* features = Features_getInstance();
        if (Features_isFeature(features, mainFeatureFactory->FULL_SCREEN)) {
            Canvas_setFullScreenMode(fullScreenInterface, true);
        } else {
            Canvas_setFullScreenMode(fullScreenInterface, false);
        }
}


bool FullScreenUtil_isScreenChange(FullScreenUtil* this, bool isFullScreen) {
        MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
        Features* features = Features_getInstance();
        if (Features_isFeature(features, mainFeatureFactory->FULL_SCREEN) != isFullScreen) {
            return true;
        }
        return false;
}


bool FullScreenUtil_isScreenChangeCanvas(FullScreenUtil* this, Canvas* fullScreenInterface) {
        return FullScreenUtil_isScreenChange(this, Canvas_isFullScreenMode(fullScreenInterface));
}

