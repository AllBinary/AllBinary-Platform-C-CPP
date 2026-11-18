#ifndef ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_H
#define ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_H
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
// package org.allbinary.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AbPathData AbPathData;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;

typedef struct PATH_GLOBALS PATH_GLOBALS;
struct PATH_GLOBALS {
    const char* DATA_PATH;
    const char* INIT_PATH;
    const char* VIEWS_PATH;
    const char* LOG_PATH;
    const char* BACKUP_PATH;
};


PATH_GLOBALS* PATH_GLOBALS_new(void);

PATH_GLOBALS* PATH_GLOBALS_getInstance(void);

void PATH_GLOBALS_init(PATH_GLOBALS* this);
#define PATH_GLOBALS_new0 PATH_GLOBALS_new
#define PATH_GLOBALS_init0 PATH_GLOBALS_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PATH_GLOBALS_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PATH_GLOBALS_register(void);


#endif // ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_H
