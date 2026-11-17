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
// #include "java/io/FileOutputStream.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"

typedef struct AbFileOutputStream AbFileOutputStream;
struct AbFileOutputStream {
    FileOutputStream base;
};


AbFileOutputStream* AbFileOutputStream_new(const char* name, bool append);
AbFileOutputStream* AbFileOutputStream_createFromAbFile(AbFile* file);
AbFileOutputStream* AbFileOutputStream_createFromAbFileAppend(AbFile* file, bool append);
AbFileOutputStream* AbFileOutputStream_createFromFilePath(const char* name);
AbFileOutputStream* AbFileOutputStream_createFromFilePathAppend(const char* name, bool append);

void AbFileOutputStream_init(AbFileOutputStream* this, const char* name, bool append);


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromAbFile(AbFile* file) {
        return AbFileOutputStream_new(AbFile_getPath(file), false);
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromAbFileAppend(AbFile* file, bool append) {
        return AbFileOutputStream_new(AbFile_getPath(file), append);
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromFilePath(const char* name) {
        return AbFileOutputStream_new(name, false);
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromFilePathAppend(const char* name, bool append) {
        return AbFileOutputStream_new(name, append);
}


void AbFileOutputStream_init(AbFileOutputStream* this, const char* name, bool append) {
        FileOutputStream_init(&this->base, name, append);
}

AbFileOutputStream* AbFileOutputStream_new(const char* name, bool append) {
    AbFileOutputStream* this = calloc(1, sizeof(AbFileOutputStream));
    AbFileOutputStream_init(this, name, append);
    return this;
}

