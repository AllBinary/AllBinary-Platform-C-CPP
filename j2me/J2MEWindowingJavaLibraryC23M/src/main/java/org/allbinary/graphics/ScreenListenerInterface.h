#ifndef ORG_ALLBINARY_GRAPHICS_SCREENLISTENERINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_SCREENLISTENERINTERFACE_H
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

typedef struct ScreenListenerInterface ScreenListenerInterface;
struct ScreenListenerInterface {
    void (*onFullScreen)(void* this, bool isFullScreen);
    void (*onFullScreenDisplay)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScreenListenerInterface_staticInit(void);

static inline void ScreenListenerInterface_onFullScreen(void* this, bool isFullScreen) {
    ((__typeof__(((ScreenListenerInterface*) nullptr)->onFullScreen)) java_method_of(this, "onFullScreen"))(this, isFullScreen);
}

static inline void ScreenListenerInterface_onFullScreenDisplay(void* this) {
    ((__typeof__(((ScreenListenerInterface*) nullptr)->onFullScreenDisplay)) java_method_of(this, "onFullScreenDisplay"))(this);
}


#endif // ORG_ALLBINARY_GRAPHICS_SCREENLISTENERINTERFACE_H
