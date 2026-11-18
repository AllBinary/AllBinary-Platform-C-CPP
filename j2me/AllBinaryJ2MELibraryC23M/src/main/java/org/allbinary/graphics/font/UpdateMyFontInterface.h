#ifndef ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTINTERFACE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.graphics.font

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;

typedef struct UpdateMyFontInterface UpdateMyFontInterface;
struct UpdateMyFontInterface {
    void (*updateMeasurement)(void* this, Graphics* graphics);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpdateMyFontInterface_staticInit(void);

static inline void UpdateMyFontInterface_updateMeasurement(void* this, Graphics* graphics) {
    ((__typeof__(((UpdateMyFontInterface*) nullptr)->updateMeasurement)) java_method_of(this, "updateMeasurement"))(this, graphics);
}


#endif // ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTINTERFACE_H
