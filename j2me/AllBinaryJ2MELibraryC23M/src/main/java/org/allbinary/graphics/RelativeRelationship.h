#ifndef ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H
#define ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H
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
typedef struct PointFactory PointFactory;
typedef struct GPoint GPoint;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct RelativeRelationship RelativeRelationship;
struct RelativeRelationship {
    BasicArrayList* typesAllowedList;
    int32_t x;
    int32_t y;
    int32_t z;
};

extern RelativeRelationship* RelativeRelationship_NULL_RELATIVE_RELATIONSHIP;

RelativeRelationship* RelativeRelationship_new(GPoint* point, BasicArrayList* typesAllowedList);

void RelativeRelationship_init(RelativeRelationship* this, GPoint* point, BasicArrayList* typesAllowedList);

int32_t RelativeRelationship_getX(RelativeRelationship* this);

int32_t RelativeRelationship_getY(RelativeRelationship* this);

int32_t RelativeRelationship_getZ(RelativeRelationship* this);

BasicArrayList* RelativeRelationship_getTypesAllowedList(RelativeRelationship* this);

void RelativeRelationship_setTypesAllowedList(RelativeRelationship* this, BasicArrayList* typesAllowedList);
#define RelativeRelationship_new2 RelativeRelationship_new
#define RelativeRelationship_init2 RelativeRelationship_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RelativeRelationship_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RelativeRelationship_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_RELATIVERELATIONSHIP_H
