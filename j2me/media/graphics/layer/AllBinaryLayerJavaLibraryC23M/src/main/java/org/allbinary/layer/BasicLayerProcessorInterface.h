#ifndef ORG_ALLBINARY_LAYER_BASICLAYERPROCESSORINTERFACE_H
#define ORG_ALLBINARY_LAYER_BASICLAYERPROCESSORINTERFACE_H
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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryLayerManager AllBinaryLayerManager;

typedef struct BasicLayerProcessorInterface BasicLayerProcessorInterface;
struct BasicLayerProcessorInterface {
    void (*process)(void* this, AllBinaryLayerManager* allBinaryLayerManager);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicLayerProcessorInterface_staticInit(void);

static inline void BasicLayerProcessorInterface_process(void* this, AllBinaryLayerManager* allBinaryLayerManager) {
    ((__typeof__(((BasicLayerProcessorInterface*) nullptr)->process)) java_method_of(this, "process"))(this, allBinaryLayerManager);
}


#endif // ORG_ALLBINARY_LAYER_BASICLAYERPROCESSORINTERFACE_H
