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
// #include "java/io/BufferedReader.h"
// #include "java/io/FileReader.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"

typedef struct BufferedLineReader BufferedLineReader;
struct BufferedLineReader {
    BufferedReader* tmpIn;
};


BufferedLineReader* BufferedLineReader_new(AbFile* file);

void BufferedLineReader_init(BufferedLineReader* this, AbFile* file);
void BufferedLineReader_readUpToLines(BufferedLineReader* this, int64_t readAheadIndex);
const char* BufferedLineReader_readLine(BufferedLineReader* this);
bool BufferedLineReader_ready(BufferedLineReader* this);
int64_t BufferedLineReader_getSize(BufferedLineReader* this);
int32_t BufferedLineReader_getCurrent(BufferedLineReader* this);

static void BufferedLineReader_initFields(BufferedLineReader* this) {
    
}


void BufferedLineReader_init(BufferedLineReader* this, AbFile* file) {
    BufferedLineReader_initFields(this);
        this->tmpIn = BufferedReader_new(FileReader_new(AbFileNativeUtil_get(file)));
}

BufferedLineReader* BufferedLineReader_new(AbFile* file) {
    BufferedLineReader* this = calloc(1, sizeof(BufferedLineReader));
    BufferedLineReader_init(this, file);
    return this;
}


void BufferedLineReader_readUpToLines(BufferedLineReader* this, int64_t readAheadIndex) {
}


// throws Exception
const char* BufferedLineReader_readLine(BufferedLineReader* this) {
        return BufferedReader_readLine(this->tmpIn);
}


// throws Exception
bool BufferedLineReader_ready(BufferedLineReader* this) {
        return BufferedReader_ready(this->tmpIn);
}


int64_t BufferedLineReader_getSize(BufferedLineReader* this) {
        return 0LL;
}


int32_t BufferedLineReader_getCurrent(BufferedLineReader* this) {
        return 0;
}

