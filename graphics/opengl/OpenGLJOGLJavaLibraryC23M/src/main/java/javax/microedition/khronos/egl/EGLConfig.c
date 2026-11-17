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


void EGLConfig_init(EGLConfig* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

EGLConfig* EGLConfig_new(void) {
    EGLConfig* this = calloc(1, sizeof(EGLConfig));
    EGLConfig_init(this);
    return this;
}

