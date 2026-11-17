// Generated Code Do Not Modify
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct FixedPoint FixedPoint;
struct FixedPoint {
    int32_t ONE;
};

static FixedPoint* FixedPoint_instance;

FixedPoint* FixedPoint_new(void);
FixedPoint* FixedPoint_getInstance(void);
int32_t FixedPoint_toFixed(FixedPoint* this, double val);
int32_t FixedPoint_toFixed(FixedPoint* this, float val);
int32_t FixedPoint_mul(FixedPoint* this, int32_t a, int32_t b);
int32_t FixedPoint_div(FixedPoint* this, int32_t a, int32_t b);
int32_t FixedPoint_toInt(FixedPoint* this, int32_t fixed);

// Static fields with runtime initializers: call this once at startup
void FixedPoint_staticInit(void) {
    FixedPoint_instance = FixedPoint_new();
}

static void FixedPoint_initFields(FixedPoint* this) {
    this->ONE = 1 << 16;
}

void FixedPoint_init(FixedPoint* this) {
    FixedPoint_initFields(this);
}

FixedPoint* FixedPoint_new(void) {
    FixedPoint* this = calloc(1, sizeof(FixedPoint));
    FixedPoint_init(this);
    return this;
}


FixedPoint* FixedPoint_getInstance(void) {
        return FixedPoint_instance;
}


int32_t FixedPoint_toFixed(FixedPoint* this, double val) {
        return ((int32_t) (val * 65536.0));
}


// Java overloaded method: C needs a different name
int32_t FixedPoint_toFixed(FixedPoint* this, float val) {
        return ((int32_t) (val * 65536.0f));
}


int32_t FixedPoint_mul(FixedPoint* this, int32_t a, int32_t b) {
        return ((int32_t) ((((int64_t) a) * ((int64_t) b)) >> 16));
}


int32_t FixedPoint_div(FixedPoint* this, int32_t a, int32_t b) {
        return ((int32_t) (((((int64_t) a)) << 16) / ((int64_t) b)));
}


int32_t FixedPoint_toInt(FixedPoint* this, int32_t fixed) {
        return fixed >> 16;
}

