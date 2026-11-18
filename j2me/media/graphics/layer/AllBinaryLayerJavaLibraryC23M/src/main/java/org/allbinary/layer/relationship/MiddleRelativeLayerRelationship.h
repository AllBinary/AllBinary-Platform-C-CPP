#ifndef ORG_ALLBINARY_LAYER_RELATIONSHIP_MIDDLERELATIVELAYERRELATIONSHIP_H
#define ORG_ALLBINARY_LAYER_RELATIONSHIP_MIDDLERELATIVELAYERRELATIONSHIP_H
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
typedef struct RelativeLayerRelationship RelativeLayerRelationship;
typedef struct PointFactory PointFactory;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#include "org/allbinary/layer/relationship/RelativeLayerRelationship.h"

typedef struct MiddleRelativeLayerRelationship MiddleRelativeLayerRelationship;
struct MiddleRelativeLayerRelationship {
    RelativeLayerRelationship base;
};


MiddleRelativeLayerRelationship* MiddleRelativeLayerRelationship_new(AllBinaryLayer* layer);

void MiddleRelativeLayerRelationship_init(MiddleRelativeLayerRelationship* this, AllBinaryLayer* layer);
#define MiddleRelativeLayerRelationship_new1 MiddleRelativeLayerRelationship_new
#define MiddleRelativeLayerRelationship_init1 MiddleRelativeLayerRelationship_init
#ifndef MiddleRelativeLayerRelationship_getX
#define MiddleRelativeLayerRelationship_getX RelativeLayerRelationship_getX
#endif
#ifndef MiddleRelativeLayerRelationship_getY
#define MiddleRelativeLayerRelationship_getY RelativeLayerRelationship_getY
#endif
#ifndef MiddleRelativeLayerRelationship_getZ
#define MiddleRelativeLayerRelationship_getZ RelativeLayerRelationship_getZ
#endif
#ifndef MiddleRelativeLayerRelationship_getX
#define MiddleRelativeLayerRelationship_getX RelativeRelationship_getX
#endif
#ifndef MiddleRelativeLayerRelationship_getY
#define MiddleRelativeLayerRelationship_getY RelativeRelationship_getY
#endif
#ifndef MiddleRelativeLayerRelationship_getZ
#define MiddleRelativeLayerRelationship_getZ RelativeRelationship_getZ
#endif
#ifndef MiddleRelativeLayerRelationship_getTypesAllowedList
#define MiddleRelativeLayerRelationship_getTypesAllowedList RelativeRelationship_getTypesAllowedList
#endif
#ifndef MiddleRelativeLayerRelationship_setTypesAllowedList
#define MiddleRelativeLayerRelationship_setTypesAllowedList RelativeRelationship_setTypesAllowedList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MiddleRelativeLayerRelationship_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MiddleRelativeLayerRelationship_register(void);


#endif // ORG_ALLBINARY_LAYER_RELATIONSHIP_MIDDLERELATIVELAYERRELATIONSHIP_H
