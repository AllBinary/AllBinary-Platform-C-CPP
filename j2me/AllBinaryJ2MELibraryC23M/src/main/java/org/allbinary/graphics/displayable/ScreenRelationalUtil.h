#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H
// Generated Code Do Not Modify
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct Image Image;

typedef struct ScreenRelationalUtil ScreenRelationalUtil;
struct ScreenRelationalUtil {
    char unused;
};


ScreenRelationalUtil* ScreenRelationalUtil_new(void);
void ScreenRelationalUtil_init(ScreenRelationalUtil* this);

ScreenRelationalUtil* ScreenRelationalUtil_getInstance(void);

float ScreenRelationalUtil_getScaleImage(ScreenRelationalUtil* this, Image* image);

float ScreenRelationalUtil_getScaleWH(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight);

float ScreenRelationalUtil_getScaleWHA(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight, int32_t add);

int32_t ScreenRelationalUtil_getScaledHeight(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight);

int32_t ScreenRelationalUtil_getScaledHeightAdd(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight, int32_t add);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScreenRelationalUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScreenRelationalUtil_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H
