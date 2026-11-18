#ifndef ORG_ALLBINARY_MIDLET_MIDLETSTRINGS_H
#define ORG_ALLBINARY_MIDLET_MIDLETSTRINGS_H
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

typedef struct MidletStrings MidletStrings;
struct MidletStrings {
    const char* COMMAND_ACTION;
};


MidletStrings* MidletStrings_new(void);
void MidletStrings_init(MidletStrings* this);

MidletStrings* MidletStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MidletStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MidletStrings_register(void);


#endif // ORG_ALLBINARY_MIDLET_MIDLETSTRINGS_H
