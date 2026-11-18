#ifndef ORG_ALLBINARY_BUSINESS_ERROR_ERRORDATA_H
#define ORG_ALLBINARY_BUSINESS_ERROR_ERRORDATA_H
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
// package org.allbinary.business.error

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ErrorData ErrorData;
struct ErrorData {
    const char* NAME;
    const char* TEXT;
};


ErrorData* ErrorData_new(void);

ErrorData* ErrorData_getInstance(void);

void ErrorData_init(ErrorData* this);
#define ErrorData_new0 ErrorData_new
#define ErrorData_init0 ErrorData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ErrorData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ErrorData_register(void);


#endif // ORG_ALLBINARY_BUSINESS_ERROR_ERRORDATA_H
