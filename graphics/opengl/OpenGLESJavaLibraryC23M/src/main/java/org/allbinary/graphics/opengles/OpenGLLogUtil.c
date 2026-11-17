// Generated Code Do Not Modify
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/image/opengles/OpenGLStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"

typedef struct OpenGLLogUtil OpenGLLogUtil;
struct OpenGLLogUtil {
    const char* MAX_TEXTURE;
    const char* LOG_ERROR;
    const char* IMAGE;
};

static OpenGLLogUtil* OpenGLLogUtil_instance;

OpenGLLogUtil* OpenGLLogUtil_new(void);
OpenGLLogUtil* OpenGLLogUtil_getInstance(void);
void OpenGLLogUtil_logError(OpenGLLogUtil* this, GL10* gl);
void OpenGLLogUtil_logError(OpenGLLogUtil* this, GL10* gl, Image* image);

// Static fields with runtime initializers: call this once at startup
void OpenGLLogUtil_staticInit(void) {
    OpenGLLogUtil_instance = OpenGLLogUtil_new();
}

static void OpenGLLogUtil_initFields(OpenGLLogUtil* this) {
    this->MAX_TEXTURE = " Max Texture Size: ";
    this->LOG_ERROR = "logError";
    this->IMAGE = " Image: ";
}

void OpenGLLogUtil_init(OpenGLLogUtil* this) {
    OpenGLLogUtil_initFields(this);
}

OpenGLLogUtil* OpenGLLogUtil_new(void) {
    OpenGLLogUtil* this = calloc(1, sizeof(OpenGLLogUtil));
    OpenGLLogUtil_init(this);
    return this;
}


OpenGLLogUtil* OpenGLLogUtil_getInstance(void) {
        return OpenGLLogUtil_instance;
}


void OpenGLLogUtil_logError(OpenGLLogUtil* this, GL10* gl) {
        int32_t error = GL10_glGetError(gl);
        if (error != _GL10->GL_NO_ERROR) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, OpenGLStrings_getInstance()->GL_ERROR_LABEL);
            StringMaker_appendint(stringBuffer, error);
            if (error == 1281) {
                StringMaker_append(stringBuffer, this->MAX_TEXTURE);
                int32_t* maxTextureSize = ((int32_t*) java_array_new(sizeof(int32_t), 1));
                GL10_glGetIntegerv(gl, _GL10->GL_MAX_TEXTURE_SIZE, maxTextureSize, 0);
                StringMaker_appendint(stringBuffer, maxTextureSize[0]);
            }
            if (error == 1280) {
                PreLogUtil_put(StringMaker_toString(stringBuffer), this, OpenGLStrings_getInstance()->SET);
            } else {
                ForcedLogUtil_log(StringMaker_toString(stringBuffer), this);
            }
        }
}


// Java overloaded method: C needs a different name
void OpenGLLogUtil_logError(OpenGLLogUtil* this, GL10* gl, Image* image) {
        int32_t error = GL10_glGetError(gl);
        if (error != _GL10->GL_NO_ERROR) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, OpenGLStrings_getInstance()->GL_ERROR_LABEL);
            StringMaker_appendint(stringBuffer, error);
            if (error == 1281) {
                StringMaker_append(stringBuffer, this->MAX_TEXTURE);
                int32_t* maxTextureSize = ((int32_t*) java_array_new(sizeof(int32_t), 1));
                GL10_glGetIntegerv(gl, _GL10->GL_MAX_TEXTURE_SIZE, maxTextureSize, 0);
                StringMaker_appendint(stringBuffer, maxTextureSize[0]);
            }
            StringMaker_append(stringBuffer, this->IMAGE);
            StringMaker_append(stringBuffer, Image_toString(image));
            PreLogUtil_put(StringMaker_toString(stringBuffer), this, this->LOG_ERROR);
        }
}

