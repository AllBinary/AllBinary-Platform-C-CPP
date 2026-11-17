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
// package org.allbinary.graphics.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicColorUtilFactory BasicColorUtilFactory;
struct BasicColorUtilFactory {
    char unused;
};


BasicColorUtilFactory* BasicColorUtilFactory_new(void);
BasicColorUtil* BasicColorUtilFactory_getInstance(void);

void BasicColorUtilFactory_init(BasicColorUtilFactory* this) {
}

BasicColorUtilFactory* BasicColorUtilFactory_new(void) {
    BasicColorUtilFactory* this = calloc(1, sizeof(BasicColorUtilFactory));
    BasicColorUtilFactory_init(this);
    return this;
}


BasicColorUtil* BasicColorUtilFactory_getInstance(void) {
        return BasicColorUtil_getInstance();
}

