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

typedef struct J2MEUtil J2MEUtil;
struct J2MEUtil {
    char unused;
};


J2MEUtil* J2MEUtil_new(void);

void J2MEUtil_init(J2MEUtil* this);
bool J2MEUtil_isJ2ME(void);
bool J2MEUtil_isJ2SE(void);
bool J2MEUtil_isHTML(void);


void J2MEUtil_init(J2MEUtil* this) {
}

J2MEUtil* J2MEUtil_new(void) {
    J2MEUtil* this = calloc(1, sizeof(J2MEUtil));
    J2MEUtil_init(this);
    return this;
}


bool J2MEUtil_isJ2ME(void) {
        return false;
}


bool J2MEUtil_isJ2SE(void) {
        return true;
}


bool J2MEUtil_isHTML(void) {
        return false;
}

