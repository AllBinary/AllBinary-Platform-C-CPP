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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct OpenGLProcessor OpenGLProcessor;
struct OpenGLProcessor {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


OpenGLProcessor* OpenGLProcessor_new(void);
void OpenGLProcessor_process(OpenGLProcessor* this, GL10* gl);

static void OpenGLProcessor_initFields(OpenGLProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void OpenGLProcessor_init(OpenGLProcessor* this) {
    OpenGLProcessor_initFields(this);
}

OpenGLProcessor* OpenGLProcessor_new(void) {
    OpenGLProcessor* this = calloc(1, sizeof(OpenGLProcessor));
    OpenGLProcessor_init(this);
    return this;
}


void OpenGLProcessor_process(OpenGLProcessor* this, GL10* gl) {
}

