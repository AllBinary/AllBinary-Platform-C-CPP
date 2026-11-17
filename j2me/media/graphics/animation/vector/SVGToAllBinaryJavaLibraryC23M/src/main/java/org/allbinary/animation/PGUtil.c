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

typedef struct PGUtil PGUtil;
struct PGUtil {
    char unused;
};

static PGUtil* PGUtil_instance;

PGUtil* PGUtil_new(void);
PGUtil* PGUtil_getInstance(void);
void PGUtil_flattenCubicBezier(PGUtil* this, int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, int32_t* outX, int32_t* outY, int32_t* count, int32_t maxPoints);

// Static fields with runtime initializers: call this once at startup
void PGUtil_staticInit(void) {
    PGUtil_instance = PGUtil_new();
}

void PGUtil_init(PGUtil* this) {
}

PGUtil* PGUtil_new(void) {
    PGUtil* this = calloc(1, sizeof(PGUtil));
    PGUtil_init(this);
    return this;
}


PGUtil* PGUtil_getInstance(void) {
        return PGUtil_instance;
}


void PGUtil_flattenCubicBezier(PGUtil* this, int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, int32_t* outX, int32_t* outY, int32_t* count, int32_t maxPoints) {
        FixedPoint* fixedPoint = FixedPoint_getInstance();
        int32_t steps = 10;
        for (int32_t i = 1; i <= steps; i++) {
            int32_t t = FixedPoint_div(fixedPoint, FixedPoint_toFixed(fixedPoint, ((double) i)), FixedPoint_toFixed(fixedPoint, steps));
            int32_t mt = fixedPoint->ONE - t;
            int32_t mt3 = FixedPoint_mul(fixedPoint, FixedPoint_mul(fixedPoint, mt, mt), mt);
            int32_t mt2t3 = 3 * FixedPoint_mul(fixedPoint, FixedPoint_mul(fixedPoint, mt, mt), t);
            int32_t mtt23 = 3 * FixedPoint_mul(fixedPoint, FixedPoint_mul(fixedPoint, mt, t), t);
            int32_t t3 = FixedPoint_mul(fixedPoint, FixedPoint_mul(fixedPoint, t, t), t);
            int32_t x = FixedPoint_mul(fixedPoint, mt3, x0) + FixedPoint_mul(fixedPoint, mt2t3, x1) + FixedPoint_mul(fixedPoint, mtt23, x2) + FixedPoint_mul(fixedPoint, t3, x3);
            int32_t y = FixedPoint_mul(fixedPoint, mt3, y0) + FixedPoint_mul(fixedPoint, mt2t3, y1) + FixedPoint_mul(fixedPoint, mtt23, y2) + FixedPoint_mul(fixedPoint, t3, y3);
            if (count[0] < maxPoints) {
                outX[count[0]] = x;
                outY[count[0]] = y;
                count[0]++;
            }
        }
}

