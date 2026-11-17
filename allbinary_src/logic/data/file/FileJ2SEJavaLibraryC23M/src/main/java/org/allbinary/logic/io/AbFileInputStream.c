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
// #include "java/io/File.h"
// #include "java/io/FileInputStream.h"
// #include "java/io/FileNotFoundException.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"

typedef struct AbFileInputStream AbFileInputStream;
struct AbFileInputStream {
    FileInputStream base;
};


AbFileInputStream* AbFileInputStream_new(const char* name);

void AbFileInputStream_init(AbFileInputStream* this, const char* name);
AbFileInputStream* AbFileInputStream_createFromAbFile(AbFile* file);
AbFileInputStream* AbFileInputStream_createFromFile(File* file);


void AbFileInputStream_init(AbFileInputStream* this, const char* name) {
        FileInputStream_init(&this->base, name);
}

AbFileInputStream* AbFileInputStream_new(const char* name) {
    AbFileInputStream* this = calloc(1, sizeof(AbFileInputStream));
    AbFileInputStream_init(this, name);
    return this;
}


// throws FileNotFoundException
AbFileInputStream* AbFileInputStream_createFromAbFile(AbFile* file) {
        return AbFileInputStream_new(JAVA_CALL(AbFileNativeUtil_get(file), getPath));
}


// throws FileNotFoundException
AbFileInputStream* AbFileInputStream_createFromFile(File* file) {
        return AbFileInputStream_new(AbFile_getPath(file));
}

