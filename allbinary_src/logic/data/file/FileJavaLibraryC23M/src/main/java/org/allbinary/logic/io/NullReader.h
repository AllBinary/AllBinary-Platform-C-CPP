#ifndef ORG_ALLBINARY_LOGIC_IO_NULLREADER_H
#define ORG_ALLBINARY_LOGIC_IO_NULLREADER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
#include "java/io/IOException.h"
#include "java/io/Reader.h"

typedef struct NullReader NullReader;
struct NullReader {
    Reader base;
};

extern NullReader* NullReader_NULL_READER;

NullReader* NullReader_new(void);
void NullReader_init(NullReader* this);

int32_t NullReader_read1(NullReader* this);

int32_t NullReader_read4(NullReader* this, uint16_t* cbuf, int32_t off, int32_t len);

bool NullReader_ready(NullReader* this);

int64_t NullReader_skip(NullReader* this, int64_t n);

void NullReader_close(NullReader* this);
#define NullReader_read(...) JAVA_OVERLOADED(NullReader_read, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullReader_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullReader_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_NULLREADER_H
