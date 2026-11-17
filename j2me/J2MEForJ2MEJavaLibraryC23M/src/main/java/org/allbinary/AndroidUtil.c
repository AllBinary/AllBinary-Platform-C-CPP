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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AndroidUtil AndroidUtil;
struct AndroidUtil {
    char unused;
};


AndroidUtil* AndroidUtil_new(void);

void AndroidUtil_init(AndroidUtil* this);
bool AndroidUtil_isMemoryRestrictive(void);
bool AndroidUtil_isAndroid(void);


void AndroidUtil_init(AndroidUtil* this) {
}

AndroidUtil* AndroidUtil_new(void) {
    AndroidUtil* this = calloc(1, sizeof(AndroidUtil));
    AndroidUtil_init(this);
    return this;
}


bool AndroidUtil_isMemoryRestrictive(void) {
        return true;
}


bool AndroidUtil_isAndroid(void) {
        return false;
}

