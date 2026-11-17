#ifndef ORG_ALLBINARY_GRAPHICS_RESIZABLELISTENERINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_RESIZABLELISTENERINTERFACE_H
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

typedef struct ResizableListenerInterface ResizableListenerInterface;
struct ResizableListenerInterface {
    void (*onResizable)(void* this, bool isResizable);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ResizableListenerInterface_staticInit(void);

static inline void ResizableListenerInterface_onResizable(void* this, bool isResizable) {
    ((__typeof__(((ResizableListenerInterface*) nullptr)->onResizable)) java_method_of(this, "onResizable"))(this, isResizable);
}


#endif // ORG_ALLBINARY_GRAPHICS_RESIZABLELISTENERINTERFACE_H
