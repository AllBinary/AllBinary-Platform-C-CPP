/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.input.automation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PointHelper PointHelper;
struct PointHelper {
    char unused;
};

static constexpr double PointHelper_two = 2.0;

PointHelper* PointHelper_new(void);

void PointHelper_init(PointHelper* this);
Point* PointHelper_getCenterPoint(Rectangle* rectangle);


void PointHelper_init(PointHelper* this) {
}

PointHelper* PointHelper_new(void) {
    PointHelper* this = calloc(1, sizeof(PointHelper));
    PointHelper_init(this);
    return this;
}


Point* PointHelper_getCenterPoint(Rectangle* rectangle) {
        double x = Rectangle_getX(rectangle) + Rectangle_getWidth(rectangle) / PointHelper_two;
        double y = Rectangle_getY(rectangle) + Rectangle_getHeight(rectangle) / PointHelper_two;
        return PointFactory_getInstance(((int32_t) x), ((int32_t) y));
}

