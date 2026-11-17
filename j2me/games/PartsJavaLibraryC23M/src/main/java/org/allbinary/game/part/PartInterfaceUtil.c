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

typedef struct PartInterfaceUtil PartInterfaceUtil;
struct PartInterfaceUtil {
    char unused;
};

static PartInterface** PartInterfaceUtil_SINGLETON;

PartInterfaceUtil* PartInterfaceUtil_new(void);
PartInterface** PartInterfaceUtil_getZeroArray(void);

// Static fields with runtime initializers: call this once at startup
void PartInterfaceUtil_staticInit(void) {
    PartInterfaceUtil_SINGLETON = ((PartInterface**) java_array_new(sizeof(PartInterface*), 0));
}

void PartInterfaceUtil_init(PartInterfaceUtil* this) {
}

PartInterfaceUtil* PartInterfaceUtil_new(void) {
    PartInterfaceUtil* this = calloc(1, sizeof(PartInterfaceUtil));
    PartInterfaceUtil_init(this);
    return this;
}


PartInterface** PartInterfaceUtil_getZeroArray(void) {
        return PartInterfaceUtil_SINGLETON;
}

