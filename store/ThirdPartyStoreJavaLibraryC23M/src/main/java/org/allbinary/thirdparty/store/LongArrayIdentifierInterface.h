#ifndef ORG_ALLBINARY_THIRDPARTY_STORE_LONGARRAYIDENTIFIERINTERFACE_H
#define ORG_ALLBINARY_THIRDPARTY_STORE_LONGARRAYIDENTIFIERINTERFACE_H
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
// package org.allbinary.thirdparty.store

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LongArrayIdentifierInterface LongArrayIdentifierInterface;
struct LongArrayIdentifierInterface {
    int64_t* (*getLongArrayIdentifier)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LongArrayIdentifierInterface_staticInit(void);

static inline int64_t* LongArrayIdentifierInterface_getLongArrayIdentifier(void* this) {
    return ((__typeof__(((LongArrayIdentifierInterface*) nullptr)->getLongArrayIdentifier)) java_method_of(this, "getLongArrayIdentifier"))(this);
}


#endif // ORG_ALLBINARY_THIRDPARTY_STORE_LONGARRAYIDENTIFIERINTERFACE_H
