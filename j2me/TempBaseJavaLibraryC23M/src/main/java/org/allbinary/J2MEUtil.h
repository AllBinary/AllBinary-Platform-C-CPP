#ifndef ORG_ALLBINARY_J2MEUTIL_H
#define ORG_ALLBINARY_J2MEUTIL_H
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
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void J2MEUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void J2MEUtil_register(void);


#endif // ORG_ALLBINARY_J2MEUTIL_H
