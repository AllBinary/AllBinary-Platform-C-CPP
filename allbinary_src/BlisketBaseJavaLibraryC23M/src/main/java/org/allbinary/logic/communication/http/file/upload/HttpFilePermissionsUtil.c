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
// package org.allbinary.logic.communication.http.file.upload

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct HttpFilePermissionsUtil HttpFilePermissionsUtil;
struct HttpFilePermissionsUtil {
    char unused;
};

static HttpFilePermissionsUtil* HttpFilePermissionsUtil_instance;

HttpFilePermissionsUtil* HttpFilePermissionsUtil_new(void);
HttpFilePermissionsUtil* HttpFilePermissionsUtil_getInstance(void);
void HttpFilePermissionsUtil_create(HttpFilePermissionsUtil* this, AbPath* path);

// Static fields with runtime initializers: call this once at startup
void HttpFilePermissionsUtil_staticInit(void) {
    HttpFilePermissionsUtil_instance = HttpFilePermissionsUtil_new();
}

void HttpFilePermissionsUtil_init(HttpFilePermissionsUtil* this) {
}

HttpFilePermissionsUtil* HttpFilePermissionsUtil_new(void) {
    HttpFilePermissionsUtil* this = calloc(1, sizeof(HttpFilePermissionsUtil));
    HttpFilePermissionsUtil_init(this);
    return this;
}


HttpFilePermissionsUtil* HttpFilePermissionsUtil_getInstance(void) {
        return HttpFilePermissionsUtil_instance;
}


// throws Exception
void HttpFilePermissionsUtil_create(HttpFilePermissionsUtil* this, AbPath* path) {
        AbFile* file = AbFile_createAbFileFromAbPath(path);
        if (!AbFile_isFile(file)) {
            AbFile_createNewFile(file);
        }
}

