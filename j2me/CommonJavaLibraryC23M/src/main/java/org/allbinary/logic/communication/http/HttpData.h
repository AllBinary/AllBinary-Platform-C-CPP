#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_HTTPDATA_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_HTTPDATA_H
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
// package org.allbinary.logic.communication.http

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommonSeps CommonSeps;

typedef struct HttpData HttpData;
struct HttpData {
    const char* EQUALS;
    const char* PARAM_SEP;
    const char* URL_PARAM_SEP;
    const char* URL_LABEL;
};


HttpData* HttpData_new(void);

HttpData* HttpData_getInstance(void);

void HttpData_init(HttpData* this);
#define HttpData_new0 HttpData_new
#define HttpData_init0 HttpData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HttpData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HttpData_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_HTTPDATA_H
