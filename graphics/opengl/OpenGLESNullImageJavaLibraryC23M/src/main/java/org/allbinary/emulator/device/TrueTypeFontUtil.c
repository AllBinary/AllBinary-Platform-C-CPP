// Generated Code Do Not Modify
#include "org/allbinary/emulator/device/TrueTypeFontUtil.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"


static TrueTypeFontUtil* TrueTypeFontUtil_instance;









void TrueTypeFontUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TrueTypeFontUtil_instance = TrueTypeFontUtil_new();
}

void TrueTypeFontUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TrueTypeFontUtil", "TrueTypeFontUtilBase");
    java_register_method("TrueTypeFontUtil", "getAsTextureSize", (void*) TrueTypeFontUtil_getAsTextureSize);
    java_register_method("TrueTypeFontUtil", "getCellSize", (void*) TrueTypeFontUtil_getCellSize);
    java_register_method("TrueTypeFontUtil", "getFontBitmap", (void*) TrueTypeFontUtil_getFontBitmap);
    java_register_method("TrueTypeFontUtil", "saveFontAtlasAsFile", (void*) TrueTypeFontUtil_saveFontAtlasAsFile);
    java_register_method("TrueTypeFontUtil", "getFontBitmapGL", (void*) TrueTypeFontUtil_getFontBitmapGL);
    java_register_method("TrueTypeFontUtil", "getFontWidths", (void*) TrueTypeFontUtil_getFontWidths);
}

static void TrueTypeFontUtil_initFields(TrueTypeFontUtil* this) {
    this->fontImage = (OpenGLESImage_staticInit(), OpenGLESImage_NULL_OPENGL_IMAGE);
}


TrueTypeFontUtil* TrueTypeFontUtil_getInstance(void) {
        return (TrueTypeFontUtil_staticInit(), TrueTypeFontUtil_instance);
}


void TrueTypeFontUtil_init(TrueTypeFontUtil* this) {
    TrueTypeFontUtil_register();
        TrueTypeFontUtilBase_init(&this->base, 1);
        TrueTypeFontUtil_initFields(this);
}

TrueTypeFontUtil* TrueTypeFontUtil_new(void) {
    TrueTypeFontUtil* this = java_object_alloc(sizeof(TrueTypeFontUtil), "TrueTypeFontUtil");
    TrueTypeFontUtil_init(this);
    return this;
}


int32_t TrueTypeFontUtil_getAsTextureSize(TrueTypeFontUtil* this, int32_t textureSize) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t TrueTypeFontUtil_getCellSize(TrueTypeFontUtil* this, int32_t cellSize) {
        java_throw(java_exception_new("RuntimeException", ""));
}


Image* TrueTypeFontUtil_getFontBitmap(TrueTypeFontUtil* this, const char* filename, int32_t fontSize, int32_t cellSize, BasicColor* basicColor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void TrueTypeFontUtil_saveFontAtlasAsFile(TrueTypeFontUtil* this) {
}


Image* TrueTypeFontUtil_getFontBitmapGL(TrueTypeFontUtil* this, GL10* gl, const char* filename, int32_t cellSize, BasicColor* basicColor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t* TrueTypeFontUtil_getFontWidths(TrueTypeFontUtil* this, const char* filename, int32_t fontSize) {
        java_throw(java_exception_new("RuntimeException", ""));
}

