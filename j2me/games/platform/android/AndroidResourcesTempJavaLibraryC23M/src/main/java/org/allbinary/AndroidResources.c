// Generated Code Do Not Modify
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/testgamedemo/R.h"

typedef struct AndroidResources AndroidResources;
struct AndroidResources {
    drawable* drawable;
    id* id;
    layout* layout;
    raw* raw;
    string* string;
};

static AndroidResources* AndroidResources_instance;

AndroidResources* AndroidResources_new(void);
AndroidResources* AndroidResources_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void AndroidResources_staticInit(void) {
    AndroidResources_instance = AndroidResources_new();
}

static void AndroidResources_initFields(AndroidResources* this) {
    this->drawable = drawable_new();
    this->id = id_new();
    this->layout = layout_new();
    this->raw = raw_new();
    this->string = string_new();
}

void AndroidResources_init(AndroidResources* this) {
    AndroidResources_initFields(this);
}

AndroidResources* AndroidResources_new(void) {
    AndroidResources* this = calloc(1, sizeof(AndroidResources));
    AndroidResources_init(this);
    return this;
}


AndroidResources* AndroidResources_getInstance(void) {
        return AndroidResources_instance;
}

