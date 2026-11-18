#ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPINTERFACECOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPINTERFACECOMPOSITEINTERFACE_H
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
typedef struct Group Group;

typedef struct GroupInterfaceCompositeInterface GroupInterfaceCompositeInterface;
struct GroupInterfaceCompositeInterface {
    Group** (*getGroupInterface)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GroupInterfaceCompositeInterface_staticInit(void);

static inline Group** GroupInterfaceCompositeInterface_getGroupInterface(void* this) {
    return ((__typeof__(((GroupInterfaceCompositeInterface*) nullptr)->getGroupInterface)) java_method_of(this, "getGroupInterface"))(this);
}


#endif // ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPINTERFACECOMPOSITEINTERFACE_H
