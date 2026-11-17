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
// package org.allbinary.logic.io.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"

typedef struct AbFileNativeUtil AbFileNativeUtil;
struct AbFileNativeUtil {
    char unused;
};


AbFileNativeUtil* AbFileNativeUtil_new(void);
File* AbFileNativeUtil_get(AbFile* file);

void AbFileNativeUtil_init(AbFileNativeUtil* this) {
}

AbFileNativeUtil* AbFileNativeUtil_new(void) {
    AbFileNativeUtil* this = calloc(1, sizeof(AbFileNativeUtil));
    AbFileNativeUtil_init(this);
    return this;
}


File* AbFileNativeUtil_get(AbFile* file) {
        return AbFile_getFile(file);
}

