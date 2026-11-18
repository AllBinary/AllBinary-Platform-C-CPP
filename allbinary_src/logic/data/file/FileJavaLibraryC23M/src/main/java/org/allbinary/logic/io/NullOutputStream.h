#ifndef ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_H
#define ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_H
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
#include "java/io/OutputStream.h"

typedef struct NullOutputStream NullOutputStream;
struct NullOutputStream {
    OutputStream base;
};

extern NullOutputStream* NullOutputStream_NULL_OUTPUT_STREAM;

NullOutputStream* NullOutputStream_new(void);
void NullOutputStream_init(NullOutputStream* this);

void NullOutputStream_write2(NullOutputStream* this, int32_t b);

void NullOutputStream_write4(NullOutputStream* this, int8_t* b, int32_t off, int32_t len);

void NullOutputStream_close(NullOutputStream* this);
#define NullOutputStream_write(...) JAVA_OVERLOADED(NullOutputStream_write, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullOutputStream_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullOutputStream_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_NULLOUTPUTSTREAM_H
