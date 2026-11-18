#ifndef ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H
#define ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H
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
// package org.allbinary.layer.relationship

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GPoint GPoint;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/graphics/RelativeRelationship.h"
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

typedef struct RelativeLayerRelationship RelativeLayerRelationship;
struct RelativeLayerRelationship {
    RelativeRelationship base;
    AllBinaryLayer* layer;
};


RelativeLayerRelationship* RelativeLayerRelationship_new(AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList);

void RelativeLayerRelationship_init(RelativeLayerRelationship* this, AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList);

int32_t RelativeLayerRelationship_getX(RelativeLayerRelationship* this);

int32_t RelativeLayerRelationship_getY(RelativeLayerRelationship* this);

int32_t RelativeLayerRelationship_getZ(RelativeLayerRelationship* this);
#define RelativeLayerRelationship_new3 RelativeLayerRelationship_new
#define RelativeLayerRelationship_init3 RelativeLayerRelationship_init
#ifndef RelativeLayerRelationship_getTypesAllowedList
#define RelativeLayerRelationship_getTypesAllowedList RelativeRelationship_getTypesAllowedList
#endif
#ifndef RelativeLayerRelationship_setTypesAllowedList
#define RelativeLayerRelationship_setTypesAllowedList RelativeRelationship_setTypesAllowedList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RelativeLayerRelationship_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RelativeLayerRelationship_register(void);


#endif // ORG_ALLBINARY_LAYER_RELATIONSHIP_RELATIVELAYERRELATIONSHIP_H
