#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLPROCESSOR_H
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
typedef struct GL10 GL10;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct OpenGLProcessor OpenGLProcessor;
struct OpenGLProcessor {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


OpenGLProcessor* OpenGLProcessor_new(void);
void OpenGLProcessor_init(OpenGLProcessor* this);

void OpenGLProcessor_process(OpenGLProcessor* this, GL10* gl);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLPROCESSOR_H
