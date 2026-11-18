#ifndef ORG_ALLBINARY_GAME_PART_PARTFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_PART_PARTFACTORYINTERFACE_H
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
// package org.allbinary.game.part

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PartInterface PartInterface;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct AllBinaryLayer AllBinaryLayer;

typedef struct PartFactoryInterface PartFactoryInterface;
struct PartFactoryInterface {
    PartInterface* (*getInstance)(void* this, AllBinaryLayer* sourceLayerInterface, RelativeRelationship* relativeRelationship);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PartFactoryInterface_staticInit(void);

static inline PartInterface* PartFactoryInterface_getInstance(void* this, AllBinaryLayer* sourceLayerInterface, RelativeRelationship* relativeRelationship) {
    return ((__typeof__(((PartFactoryInterface*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this, sourceLayerInterface, relativeRelationship);
}


#endif // ORG_ALLBINARY_GAME_PART_PARTFACTORYINTERFACE_H
