#ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_H
#define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.logic.io.path

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AbPath AbPath;
#if __has_include("org/allbinary/logic/io/path/AbPath.h")
#include "org/allbinary/logic/io/path/AbPath.h"
#endif

typedef struct AbPathUtil AbPathUtil;
struct AbPathUtil {
    AbPath* NO_ABPATH;
};


AbPathUtil* AbPathUtil_new(void);
void AbPathUtil_init(AbPathUtil* this);

AbPathUtil* AbPathUtil_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbPathUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbPathUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_H
