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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct RelativeRelationship RelativeRelationship;
struct RelativeRelationship {
    BasicArrayList* typesAllowedList;
    int32_t x;
    int32_t y;
    int32_t z;
};

RelativeRelationship* RelativeRelationship_NULL_RELATIVE_RELATIONSHIP;

RelativeRelationship* RelativeRelationship_new(GPoint* point, BasicArrayList* typesAllowedList);

void RelativeRelationship_init(RelativeRelationship* this, GPoint* point, BasicArrayList* typesAllowedList);
int32_t RelativeRelationship_getX(RelativeRelationship* this);
int32_t RelativeRelationship_getY(RelativeRelationship* this);
int32_t RelativeRelationship_getZ(RelativeRelationship* this);
BasicArrayList* RelativeRelationship_getTypesAllowedList(RelativeRelationship* this);
void RelativeRelationship_setTypesAllowedList(RelativeRelationship* this, BasicArrayList* typesAllowedList);

// Static fields with runtime initializers: call this once at startup
void RelativeRelationship_staticInit(void) {
    RelativeRelationship_NULL_RELATIVE_RELATIONSHIP = RelativeRelationship_new(PointFactory_getInstance()->ZERO_ZERO, BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
}

static void RelativeRelationship_initFields(RelativeRelationship* this) {
    
    
    
    
}


void RelativeRelationship_init(RelativeRelationship* this, GPoint* point, BasicArrayList* typesAllowedList) {
    RelativeRelationship_initFields(this);
        this->x = GPoint_getX(point);
        this->y = GPoint_getY(point);
        this->z = GPoint_getZ(point);
        this->typesAllowedList = typesAllowedList;
}

RelativeRelationship* RelativeRelationship_new(GPoint* point, BasicArrayList* typesAllowedList) {
    RelativeRelationship* this = calloc(1, sizeof(RelativeRelationship));
    RelativeRelationship_init(this, point, typesAllowedList);
    return this;
}


int32_t RelativeRelationship_getX(RelativeRelationship* this) {
        return this->x;
}


int32_t RelativeRelationship_getY(RelativeRelationship* this) {
        return this->y;
}


int32_t RelativeRelationship_getZ(RelativeRelationship* this) {
        return this->z;
}


BasicArrayList* RelativeRelationship_getTypesAllowedList(RelativeRelationship* this) {
        return this->typesAllowedList;
}


void RelativeRelationship_setTypesAllowedList(RelativeRelationship* this, BasicArrayList* typesAllowedList) {
        this->typesAllowedList = typesAllowedList;
}

