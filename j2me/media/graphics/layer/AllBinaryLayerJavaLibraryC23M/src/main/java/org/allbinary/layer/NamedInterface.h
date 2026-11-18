#ifndef ORG_ALLBINARY_LAYER_NAMEDINTERFACE_H
#define ORG_ALLBINARY_LAYER_NAMEDINTERFACE_H
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

typedef struct NamedInterface NamedInterface;
struct NamedInterface {
    const char* (*getName)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NamedInterface_staticInit(void);

static inline const char* NamedInterface_getName(void* this) {
    return ((__typeof__(((NamedInterface*) nullptr)->getName)) java_method_of(this, "getName"))(this);
}


#endif // ORG_ALLBINARY_LAYER_NAMEDINTERFACE_H
