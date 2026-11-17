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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Line Line;
struct Line {
    GPoint* p1;
    GPoint* p2;
    double deltaX;
    double deltaY;
};


Line* Line_new(GPoint* p1, GPoint* p2);

void Line_init(Line* this, GPoint* p1, GPoint* p2);
double Line_getGradient(Line* this);
static void Line_update(Line* this);
double Line_getDeltaX(Line* this);
double Line_getDeltaY(Line* this);
GPoint* Line_getP1(Line* this);
GPoint* Line_getP2(Line* this);
void Line_setP1(Line* this, GPoint* p1);
void Line_setP2(Line* this, GPoint* p2);

static void Line_initFields(Line* this) {
    
    
    this->deltaX = 0.0;
    this->deltaY = 0.0;
}


void Line_init(Line* this, GPoint* p1, GPoint* p2) {
    Line_initFields(this);
        this->p1 = PointFactory_getInstance()->ZERO_ZERO;
        this->p2 = this->p1;
        Line_setP1(this, p1);
        Line_setP2(this, p2);
}

Line* Line_new(GPoint* p1, GPoint* p2) {
    Line* this = calloc(1, sizeof(Line));
    Line_init(this, p1, p2);
    return this;
}


double Line_getGradient(Line* this) {
        return Line_getDeltaY(this) / Line_getDeltaX(this);
}


static void Line_update(Line* this) {
        this->deltaX = ((double) JAVA_CALL(Line_getP1(this), getX)) - JAVA_CALL(Line_getP2(this), getX);
        this->deltaY = ((double) JAVA_CALL(Line_getP1(this), getY)) - JAVA_CALL(Line_getP2(this), getY);
}


double Line_getDeltaX(Line* this) {
        return this->deltaX;
}


double Line_getDeltaY(Line* this) {
        return this->deltaY;
}


GPoint* Line_getP1(Line* this) {
        return this->p1;
}


GPoint* Line_getP2(Line* this) {
        return this->p2;
}


void Line_setP1(Line* this, GPoint* p1) {
        this->p1 = p1;
        Line_update(this);
}


void Line_setP2(Line* this, GPoint* p2) {
        this->p2 = p2;
        Line_update(this);
}

