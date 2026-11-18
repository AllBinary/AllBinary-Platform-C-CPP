#ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H
#define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H
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
// package org.allbinary.logic.io.path

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommonSeps CommonSeps;
// #include "org/allbinary/logic/io/file/FilePathData.h"
// #include "org/allbinary/logic/string/StringUtil.h"

typedef struct AbPathData AbPathData;
struct AbPathData {
    const char* EXTENSION_SEP;
    uint16_t SEPARATORCHAR;
    const char* SEPARATOR;
};


AbPathData* AbPathData_new(void);

AbPathData* AbPathData_getInstance(void);

void AbPathData_init(AbPathData* this);
#define AbPathData_new0 AbPathData_new
#define AbPathData_init0 AbPathData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbPathData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbPathData_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_H
