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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/j2me/workarea/tools/PointsInterface.h"

typedef struct Points Points;
struct Points {
    PointsInterface PointsInterface_interface;
    BasicArrayList* pointVector;
};


Points* Points_new(void);

void Points_init(Points* this);
void Points_init(Points* this);
BasicArrayList* Points_getPoints(Points* this);
void Points_addPoints(Points* this, BasicArrayList* vector);
bool Points_isValid(Points* this);
int32_t Points_getSize(Points* this);

static void Points_initFields(Points* this) {
    
}


void Points_init(Points* this) {
    Points_initFields(this);
        this->pointVector = BasicArrayListD_new();
}

Points* Points_new(void) {
    Points* this = calloc(1, sizeof(Points));
    Points_init(this);
    return this;
}


void Points_init(Points* this) {
        BasicArrayList_clear(this->pointVector);
}


BasicArrayList* Points_getPoints(Points* this) {
        return this->pointVector;
}


void Points_addPoints(Points* this, BasicArrayList* vector) {
        BasicArrayList_addAll2(this->pointVector, vector);
}


bool Points_isValid(Points* this) {
        if (BasicArrayList_size(this->pointVector) > 1) {
            return true;
        } else {
            return false;
        }
}


int32_t Points_getSize(Points* this) {
        return BasicArrayList_size(this->pointVector);
}

