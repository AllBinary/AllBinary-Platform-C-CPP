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
// #include "javax/microedition/lcdui/Font.h"
#include "org/allbinary/logic/string/StringMaker.h"

//OpenGLESBaseJavaLibrary
typedef struct FontDebugBase FontDebugBase;
struct FontDebugBase {
    const char* SET_FONT;
};

static FontDebugBase* FontDebugBase_instanceBase;

FontDebugBase* FontDebugBase_new(void);
FontDebugBase* FontDebugBase_getInstance(void);
void FontDebugBase_debugMetrics(FontDebugBase* this, Font* currentFont, float convertedTextSize, Any* displayMetrics, StringMaker* stringBuffer);
void FontDebugBase_debugDpi(FontDebugBase* this, int32_t densityDpi, StringMaker* stringBuffer);
void FontDebugBase_debugDimension(FontDebugBase* this, Font* currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker* stringBuffer);

// Static fields with runtime initializers: call this once at startup
void FontDebugBase_staticInit(void) {
    FontDebugBase_instanceBase = FontDebugBase_new();
}

static void FontDebugBase_initFields(FontDebugBase* this) {
    this->SET_FONT = "setFont";
}

void FontDebugBase_init(FontDebugBase* this) {
    FontDebugBase_initFields(this);
}

FontDebugBase* FontDebugBase_new(void) {
    FontDebugBase* this = calloc(1, sizeof(FontDebugBase));
    FontDebugBase_init(this);
    return this;
}


FontDebugBase* FontDebugBase_getInstance(void) {
        return FontDebugBase_instanceBase;
}


void FontDebugBase_debugMetrics(FontDebugBase* this, Font* currentFont, float convertedTextSize, Any* displayMetrics, StringMaker* stringBuffer) {
}


void FontDebugBase_debugDpi(FontDebugBase* this, int32_t densityDpi, StringMaker* stringBuffer) {
}


void FontDebugBase_debugDimension(FontDebugBase* this, Font* currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker* stringBuffer) {
}

