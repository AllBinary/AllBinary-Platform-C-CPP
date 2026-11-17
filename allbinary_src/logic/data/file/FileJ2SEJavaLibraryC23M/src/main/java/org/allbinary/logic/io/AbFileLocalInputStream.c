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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/FileNotFoundException.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"

typedef struct AbFileLocalInputStream AbFileLocalInputStream;
struct AbFileLocalInputStream {
    AbFileInputStream base;
};


AbFileLocalInputStream* AbFileLocalInputStream_new(AbFile* file);

void AbFileLocalInputStream_init(AbFileLocalInputStream* this, AbFile* file);


void AbFileLocalInputStream_init(AbFileLocalInputStream* this, AbFile* file) {
        AbFileInputStream_init(&this->base, JAVA_CALL(AbFileNativeUtil_get(file), getPath));
}

AbFileLocalInputStream* AbFileLocalInputStream_new(AbFile* file) {
    AbFileLocalInputStream* this = calloc(1, sizeof(AbFileLocalInputStream));
    AbFileLocalInputStream_init(this, file);
    return this;
}

