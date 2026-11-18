#ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPINTERFACE_H
#define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPINTERFACE_H
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
// package org.allbinary.game.identification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GroupInterface GroupInterface;
struct GroupInterface {
    const char* (*getGroupName)(void* this);
    int16_t (*getGroupId)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GroupInterface_staticInit(void);

static inline const char* GroupInterface_getGroupName(void* this) {
    return ((__typeof__(((GroupInterface*) nullptr)->getGroupName)) java_method_of(this, "getGroupName"))(this);
}

static inline int16_t GroupInterface_getGroupId(void* this) {
    return ((__typeof__(((GroupInterface*) nullptr)->getGroupId)) java_method_of(this, "getGroupId"))(this);
}


#endif // ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPINTERFACE_H
