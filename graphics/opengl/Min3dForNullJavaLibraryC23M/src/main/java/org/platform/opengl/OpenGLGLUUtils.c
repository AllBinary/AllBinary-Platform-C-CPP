// Generated Code Do Not Modify
// package org.platform.opengl

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/nio/ByteBuffer.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/OpenGLBitmap.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"

typedef struct OpenGLGLUUtils OpenGLGLUUtils;
struct OpenGLGLUUtils {
    char unused;
};

static OpenGLGLUUtils* OpenGLGLUUtils_instance;

OpenGLGLUUtils* OpenGLGLUUtils_new(void);
OpenGLGLUUtils* OpenGLGLUUtils_getInstance(void);
ByteBuffer* OpenGLGLUUtils_makeByteBuffer(OpenGLGLUUtils* this, OpenGLBitmap* bmp, bool flip);
void OpenGLGLUUtils_texImage2D(OpenGLGLUUtils* this, GL10* gl, const char* glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLESImage* openGLESImage, int32_t border, bool flip);
void OpenGLGLUUtils_texImage2D(OpenGLGLUUtils* this, GL10* gl, const char* glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLBitmap* bitmap, int32_t border, bool flip);

// Static fields with runtime initializers: call this once at startup
void OpenGLGLUUtils_staticInit(void) {
    OpenGLGLUUtils_instance = OpenGLGLUUtils_new();
}

void OpenGLGLUUtils_init(OpenGLGLUUtils* this) {
}

OpenGLGLUUtils* OpenGLGLUUtils_new(void) {
    OpenGLGLUUtils* this = calloc(1, sizeof(OpenGLGLUUtils));
    OpenGLGLUUtils_init(this);
    return this;
}


OpenGLGLUUtils* OpenGLGLUUtils_getInstance(void) {
        return OpenGLGLUUtils_instance;
}


ByteBuffer* OpenGLGLUUtils_makeByteBuffer(OpenGLGLUUtils* this, OpenGLBitmap* bmp, bool flip) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void OpenGLGLUUtils_texImage2D(OpenGLGLUUtils* this, GL10* gl, const char* glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLESImage* openGLESImage, int32_t border, bool flip) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// Java overloaded method: C needs a different name
void OpenGLGLUUtils_texImage2D(OpenGLGLUUtils* this, GL10* gl, const char* glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLBitmap* bitmap, int32_t border, bool flip) {
        java_throw(java_exception_new("RuntimeException", ""));
}

