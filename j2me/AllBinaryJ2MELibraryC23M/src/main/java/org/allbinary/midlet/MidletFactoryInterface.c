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
// package org.allbinary.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/midlet/MIDlet.h"

typedef struct MidletFactoryInterface MidletFactoryInterface;
struct MidletFactoryInterface {
    char unused;
};


MidletFactoryInterface* MidletFactoryInterface_new(void);
MIDlet* MidletFactoryInterface_getInstance(MidletFactoryInterface* this);

void MidletFactoryInterface_init(MidletFactoryInterface* this) {
}

MidletFactoryInterface* MidletFactoryInterface_new(void) {
    MidletFactoryInterface* this = calloc(1, sizeof(MidletFactoryInterface));
    MidletFactoryInterface_init(this);
    return this;
}


MIDlet* MidletFactoryInterface_getInstance(MidletFactoryInterface* this) {
        return AllBinaryMidlet_getNullInstance();
}

