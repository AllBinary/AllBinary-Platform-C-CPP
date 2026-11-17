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
// package org.allbinary.direction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"

typedef struct DirectionUtil DirectionUtil;
struct DirectionUtil {
    Angle** directionArray;
    Angle** directionArray2;
};

static DirectionUtil* DirectionUtil_instance;

DirectionUtil* DirectionUtil_new(void);
DirectionUtil* DirectionUtil_getInstance(void);

void DirectionUtil_init(DirectionUtil* this);
Angle* DirectionUtil_getAngle(DirectionUtil* this, Direction* direction);
Angle* DirectionUtil_getFrameAngle(DirectionUtil* this, Direction* direction);

// Static fields with runtime initializers: call this once at startup
void DirectionUtil_staticInit(void) {
    DirectionUtil_instance = DirectionUtil_new();
}

static void DirectionUtil_initFields(DirectionUtil* this) {
    this->directionArray = ((Angle**) java_array_new(sizeof(Angle*), 10));
    this->directionArray2 = ((Angle**) java_array_new(sizeof(Angle*), 10));
}


DirectionUtil* DirectionUtil_getInstance(void) {
        return DirectionUtil_instance;
}


void DirectionUtil_init(DirectionUtil* this) {
    DirectionUtil_initFields(this);
        AngleFactory* angleFactory = AngleFactory_getInstance();
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        this->directionArray[JAVA_CALL(directionFactory->LEFT, getValue)] = angleFactory->LEFT;
        this->directionArray[JAVA_CALL(directionFactory->RIGHT, getValue)] = angleFactory->RIGHT;
        this->directionArray[JAVA_CALL(directionFactory->UP, getValue)] = angleFactory->UP;
        this->directionArray[JAVA_CALL(directionFactory->DOWN, getValue)] = angleFactory->DOWN;
        this->directionArray2[JAVA_CALL(directionFactory->LEFT, getValue)] = angleFactory->LEFT;
        this->directionArray2[JAVA_CALL(directionFactory->RIGHT, getValue)] = angleFactory->RIGHT;
        this->directionArray2[JAVA_CALL(directionFactory->UP, getValue)] = angleFactory->UP;
        this->directionArray2[JAVA_CALL(directionFactory->DOWN, getValue)] = angleFactory->DOWN;
}

DirectionUtil* DirectionUtil_new(void) {
    DirectionUtil* this = calloc(1, sizeof(DirectionUtil));
    DirectionUtil_init(this);
    return this;
}


Angle* DirectionUtil_getAngle(DirectionUtil* this, Direction* direction) {
        return this->directionArray2[Direction_getValue(direction)];
}


Angle* DirectionUtil_getFrameAngle(DirectionUtil* this, Direction* direction) {
        return this->directionArray[Direction_getValue(direction)];
}

