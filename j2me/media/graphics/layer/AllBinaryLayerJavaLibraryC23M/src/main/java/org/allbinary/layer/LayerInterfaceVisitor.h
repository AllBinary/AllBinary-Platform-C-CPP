#ifndef ORG_ALLBINARY_LAYER_LAYERINTERFACEVISITOR_H
#define ORG_ALLBINARY_LAYER_LAYERINTERFACEVISITOR_H
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
typedef struct AllBinaryLayer AllBinaryLayer;

typedef struct LayerInterfaceVisitor LayerInterfaceVisitor;
struct LayerInterfaceVisitor {
    void (*visit)(void* this, AllBinaryLayer* layerInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerInterfaceVisitor_staticInit(void);

static inline void LayerInterfaceVisitor_visit(void* this, AllBinaryLayer* layerInterface) {
    ((__typeof__(((LayerInterfaceVisitor*) nullptr)->visit)) java_method_of(this, "visit"))(this, layerInterface);
}


#endif // ORG_ALLBINARY_LAYER_LAYERINTERFACEVISITOR_H
