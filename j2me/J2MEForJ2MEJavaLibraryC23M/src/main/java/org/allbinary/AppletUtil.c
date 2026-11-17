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

typedef struct AppletUtil AppletUtil;
struct AppletUtil {
    char unused;
};


AppletUtil* AppletUtil_new(void);

void AppletUtil_init(AppletUtil* this);
bool AppletUtil_isAppletLoader(Any* anyType);


void AppletUtil_init(AppletUtil* this) {
}

AppletUtil* AppletUtil_new(void) {
    AppletUtil* this = calloc(1, sizeof(AppletUtil));
    AppletUtil_init(this);
    return this;
}


bool AppletUtil_isAppletLoader(Any* anyType) {
        return false;
}

