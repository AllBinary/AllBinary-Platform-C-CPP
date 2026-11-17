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
// package org.allbinary.graphics.j2me.workarea.tools

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/VectorRotationGenerator.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct PointsUtil PointsUtil;
struct PointsUtil {
    char unused;
};

static PointsUtil* PointsUtil_instance;

PointsUtil* PointsUtil_new(void);
PointsUtil* PointsUtil_getInstance(void);
BasicArrayList* PointsUtil_doTransforms(PointsUtil* this, BasicArrayList* pointVector, double angle, GPoint* fulcrumPoint);

// Static fields with runtime initializers: call this once at startup
void PointsUtil_staticInit(void) {
    PointsUtil_instance = PointsUtil_new();
}

void PointsUtil_init(PointsUtil* this) {
}

PointsUtil* PointsUtil_new(void) {
    PointsUtil* this = calloc(1, sizeof(PointsUtil));
    PointsUtil_init(this);
    return this;
}


PointsUtil* PointsUtil_getInstance(void) {
        return PointsUtil_instance;
}


// throws Exception
BasicArrayList* PointsUtil_doTransforms(PointsUtil* this, BasicArrayList* pointVector, double angle, GPoint* fulcrumPoint) {
        return VectorRotationGenerator_getListAtAngle(VectorRotationGenerator_getInstance(), GPoint_getX(fulcrumPoint), GPoint_getY(fulcrumPoint), pointVector, AngleFactory_getAt(AngleFactory_getInstance(), Double_intValue(angle)));
}

