#ifndef ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H
#define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H
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
typedef struct Font Font;
typedef struct StringMaker StringMaker;

//OpenGLNoneOther2JavaLibrary
typedef struct FontDebugBase FontDebugBase;
struct FontDebugBase {
    const char* SET_FONT;
};


FontDebugBase* FontDebugBase_new(void);
void FontDebugBase_init(FontDebugBase* this);

FontDebugBase* FontDebugBase_getInstance(void);

void FontDebugBase_debugMetrics(FontDebugBase* this, Font* currentFont, float convertedTextSize, void* displayMetrics, StringMaker* stringBuffer);

void FontDebugBase_debugDpi(FontDebugBase* this, int32_t densityDpi, StringMaker* stringBuffer);

void FontDebugBase_debugDimension(FontDebugBase* this, Font* currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker* stringBuffer);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FontDebugBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FontDebugBase_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H
