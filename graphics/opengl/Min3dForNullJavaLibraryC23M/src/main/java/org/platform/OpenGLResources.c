// Generated Code Do Not Modify
// package org.platform

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"

typedef struct OpenGLResources OpenGLResources;
struct OpenGLResources {
    char unused;
};

static OpenGLResources* OpenGLResources_instance;

OpenGLResources* OpenGLResources_new(void);
OpenGLResources* OpenGLResources_getInstance(void);
void OpenGLResources_init(OpenGLResources* this);
bool OpenGLResources_isExcluded(OpenGLResources* this, const char* name);
int32_t OpenGLResources_getIdentifier(OpenGLResources* this, const char* name, const char* defType, const char* defPackage);
InputStream* OpenGLResources_openRawResource(OpenGLResources* this, int32_t id);
InputStream* OpenGLResources_openRawResourceFromName(OpenGLResources* this, const char* resourceName);
InputStream* OpenGLResources_getResourceAsStream(OpenGLResources* this, const char* resourceName);
const char* OpenGLResources_getPackageName(OpenGLResources* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLResources_staticInit(void) {
    OpenGLResources_instance = OpenGLResources_new();
}

void OpenGLResources_init(OpenGLResources* this) {
}

OpenGLResources* OpenGLResources_new(void) {
    OpenGLResources* this = calloc(1, sizeof(OpenGLResources));
    OpenGLResources_init(this);
    return this;
}


OpenGLResources* OpenGLResources_getInstance(void) {
        return OpenGLResources_instance;
}


void OpenGLResources_init(OpenGLResources* this) {
}


bool OpenGLResources_isExcluded(OpenGLResources* this, const char* name) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t OpenGLResources_getIdentifier(OpenGLResources* this, const char* name, const char* defType, const char* defPackage) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
InputStream* OpenGLResources_openRawResource(OpenGLResources* this, int32_t id) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
InputStream* OpenGLResources_openRawResourceFromName(OpenGLResources* this, const char* resourceName) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
InputStream* OpenGLResources_getResourceAsStream(OpenGLResources* this, const char* resourceName) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* OpenGLResources_getPackageName(OpenGLResources* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

