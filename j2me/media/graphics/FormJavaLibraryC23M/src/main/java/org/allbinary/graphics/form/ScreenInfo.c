// Generated Code Do Not Modify
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ScreenInfo ScreenInfo;
struct ScreenInfo {
    int32_t SMALL_WIDTH;
    int32_t SMALL_HEIGHT;
    int32_t MEDIUM_WIDTH;
    int32_t MEDIUM_HEIGHT;
};

static ScreenInfo* ScreenInfo_instance;

ScreenInfo* ScreenInfo_new(void);
ScreenInfo* ScreenInfo_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ScreenInfo_staticInit(void) {
    ScreenInfo_instance = ScreenInfo_new();
}

static void ScreenInfo_initFields(ScreenInfo* this) {
    this->SMALL_WIDTH = 320;
    this->SMALL_HEIGHT = 240;
    this->MEDIUM_WIDTH = 800;
    this->MEDIUM_HEIGHT = 600;
}

void ScreenInfo_init(ScreenInfo* this) {
    ScreenInfo_initFields(this);
}

ScreenInfo* ScreenInfo_new(void) {
    ScreenInfo* this = calloc(1, sizeof(ScreenInfo));
    ScreenInfo_init(this);
    return this;
}


ScreenInfo* ScreenInfo_getInstance(void) {
        return ScreenInfo_instance;
}

