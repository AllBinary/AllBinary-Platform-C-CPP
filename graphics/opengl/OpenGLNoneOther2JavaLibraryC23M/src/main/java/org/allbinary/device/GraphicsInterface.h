#ifndef ORG_ALLBINARY_DEVICE_GRAPHICSINTERFACE_H
#define ORG_ALLBINARY_DEVICE_GRAPHICSINTERFACE_H
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
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Font Font;
typedef struct FontDebugBase FontDebugBase;

typedef struct GraphicsInterface GraphicsInterface;
struct GraphicsInterface {
    void (*setFontDebug)(void* this, Font* font, FontDebugBase* fontDebug);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GraphicsInterface_staticInit(void);

static inline void GraphicsInterface_setFontDebug(void* this, Font* font, FontDebugBase* fontDebug) {
    ((__typeof__(((GraphicsInterface*) nullptr)->setFontDebug)) java_method_of(this, "setFontDebug"))(this, font, fontDebug);
}


#endif // ORG_ALLBINARY_DEVICE_GRAPHICSINTERFACE_H
