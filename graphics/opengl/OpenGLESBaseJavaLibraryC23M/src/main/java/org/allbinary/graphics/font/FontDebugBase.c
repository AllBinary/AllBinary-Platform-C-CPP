// Generated Code Do Not Modify
#include "org/allbinary/graphics/font/FontDebugBase.h"
#include "javax/microedition/lcdui/Font.h"
#include "org/allbinary/logic/string/StringMaker.h"


static FontDebugBase* FontDebugBase_instanceBase;





void FontDebugBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FontDebugBase_instanceBase = FontDebugBase_new();
}

void FontDebugBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FontDebugBase", nullptr);
    java_register_method("FontDebugBase", "debugMetrics", (void*) FontDebugBase_debugMetrics);
    java_register_method("FontDebugBase", "debugDpi", (void*) FontDebugBase_debugDpi);
    java_register_method("FontDebugBase", "debugDimension", (void*) FontDebugBase_debugDimension);
}

static void FontDebugBase_initFields(FontDebugBase* this) {
    this->SET_FONT = "setFont";
}

void FontDebugBase_init(FontDebugBase* this) {
    FontDebugBase_register();
    FontDebugBase_initFields(this);
}

FontDebugBase* FontDebugBase_new(void) {
    FontDebugBase* this = java_object_alloc(sizeof(FontDebugBase), "FontDebugBase");
    FontDebugBase_init(this);
    return this;
}


FontDebugBase* FontDebugBase_getInstance(void) {
        return (FontDebugBase_staticInit(), FontDebugBase_instanceBase);
}


void FontDebugBase_debugMetrics(FontDebugBase* this, Font* currentFont, float convertedTextSize, void* displayMetrics, StringMaker* stringBuffer) {
}


void FontDebugBase_debugDpi(FontDebugBase* this, int32_t densityDpi, StringMaker* stringBuffer) {
}


void FontDebugBase_debugDimension(FontDebugBase* this, Font* currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker* stringBuffer) {
}

