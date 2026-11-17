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
// package org.allbinary.logic.communication.http.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/path/AbPathData.h"

typedef struct HttpRequestUtil HttpRequestUtil;
struct HttpRequestUtil {
    char unused;
};

static HttpRequestUtil* HttpRequestUtil_instance;

HttpRequestUtil* HttpRequestUtil_new(void);
HttpRequestUtil* HttpRequestUtil_getInstance(void);

void HttpRequestUtil_init(HttpRequestUtil* this);
int32_t HttpRequestUtil_getLastSeparatorIndex(HttpRequestUtil* this, const char* requestPath);
const char* HttpRequestUtil_generateFileName(HttpRequestUtil* this, const char* requestPath);

// Static fields with runtime initializers: call this once at startup
void HttpRequestUtil_staticInit(void) {
    HttpRequestUtil_instance = HttpRequestUtil_new();
}


HttpRequestUtil* HttpRequestUtil_getInstance(void) {
        return HttpRequestUtil_instance;
}


void HttpRequestUtil_init(HttpRequestUtil* this) {
}

HttpRequestUtil* HttpRequestUtil_new(void) {
    HttpRequestUtil* this = calloc(1, sizeof(HttpRequestUtil));
    HttpRequestUtil_init(this);
    return this;
}


int32_t HttpRequestUtil_getLastSeparatorIndex(HttpRequestUtil* this, const char* requestPath) {
        int32_t beginIndex = java_string_lastIndexOf(requestPath, AbPathData_getInstance()->SEPARATOR);
        if (beginIndex < 0) {
            beginIndex = java_string_lastIndexOf(requestPath, "\\");
        }
        return beginIndex;
}


// throws Exception
const char* HttpRequestUtil_generateFileName(HttpRequestUtil* this, const char* requestPath) {
        int32_t beginIndex = HttpRequestUtil_getLastSeparatorIndex(this, requestPath);
        if (beginIndex < 0) {
            return requestPath;
        } else {
            return java_substring(requestPath, beginIndex + 1, (int32_t) strlen(requestPath));
        }
}

