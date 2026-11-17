#ifndef ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_H
#define ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_H
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
// package org.allbinary.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CommonStateStrings CommonStateStrings;
struct CommonStateStrings {
    const char* CONTEXT;
    const char* FINISH;
    const char* CREATE;
    const char* START;
    const char* RESTART;
    const char* RESUME;
    const char* PAUSE;
    const char* STOP;
    const char* DESTROY;
    const char* BIND;
    const char* ON_SAVE_INSTANCE_STATE;
    const char* ON_START_COMMAND;
};


CommonStateStrings* CommonStateStrings_new(void);
void CommonStateStrings_init(CommonStateStrings* this);

CommonStateStrings* CommonStateStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommonStateStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommonStateStrings_register(void);


#endif // ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_H
