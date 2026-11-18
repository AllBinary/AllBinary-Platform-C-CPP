#ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H
#define ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H
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
typedef struct AbFile AbFile;
typedef struct AbFileNativeUtil AbFileNativeUtil;
#include "java/io/BufferedReader.h"
#include "java/io/FileReader.h"

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
#define BufferedLineReader_new1 BufferedLineReader_new
#define BufferedLineReader_init1 BufferedLineReader_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BufferedLineReader_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BufferedLineReader_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_BUFFEREDLINEREADER_H
