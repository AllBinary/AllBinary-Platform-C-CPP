#ifndef JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG_H
#define JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG_H
// Generated Code Do Not Modify
// package javax.microedition.khronos.egl

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct EGLConfig EGLConfig;
struct EGLConfig {
    char unused;
};


EGLConfig* EGLConfig_new(void);

void EGLConfig_init(EGLConfig* this);
#define EGLConfig_new0 EGLConfig_new
#define EGLConfig_init0 EGLConfig_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EGLConfig_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void EGLConfig_register(void);


#endif // JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG_H
