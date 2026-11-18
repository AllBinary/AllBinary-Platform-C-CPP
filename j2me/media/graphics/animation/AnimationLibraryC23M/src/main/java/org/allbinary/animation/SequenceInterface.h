#ifndef ORG_ALLBINARY_ANIMATION_SEQUENCEINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_SEQUENCEINTERFACE_H
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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SequenceInterface SequenceInterface;
struct SequenceInterface {
    void (*setSequence)(void* this, int32_t* sequence);
    int32_t* (*getSequence)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SequenceInterface_staticInit(void);

static inline void SequenceInterface_setSequence(void* this, int32_t* sequence) {
    ((__typeof__(((SequenceInterface*) nullptr)->setSequence)) java_method_of(this, "setSequence"))(this, sequence);
}

static inline int32_t* SequenceInterface_getSequence(void* this) {
    return ((__typeof__(((SequenceInterface*) nullptr)->getSequence)) java_method_of(this, "getSequence"))(this);
}


#endif // ORG_ALLBINARY_ANIMATION_SEQUENCEINTERFACE_H
