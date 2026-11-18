#ifndef ORG_ALLBINARY_LOGIC_IO_NULLWRITER_H
#define ORG_ALLBINARY_LOGIC_IO_NULLWRITER_H
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
#include "java/io/Writer.h"

typedef struct NullWriter NullWriter;
struct NullWriter {
    Writer base;
};

extern NullWriter* NullWriter_NULL_WRITER;

NullWriter* NullWriter_new(void);
void NullWriter_init(NullWriter* this);

void NullWriter_write2_1(NullWriter* this, int32_t c);

void NullWriter_write4_1(NullWriter* this, uint16_t* cbuf, int32_t off, int32_t len);

void NullWriter_write2_2(NullWriter* this, const char* str);

void NullWriter_write4_2(NullWriter* this, const char* str, int32_t off, int32_t len);

void NullWriter_flush(NullWriter* this);

void NullWriter_close(NullWriter* this);
#define NullWriter_write(...) JAVA_OVERLOADED(NullWriter_write, __VA_ARGS__)
#define NullWriter_write2(a1, a2) _Generic((a2), int32_t: NullWriter_write2_1, default: NullWriter_write2_2)(a1, a2)
#define NullWriter_write4(a1, a2, a3, a4) _Generic((a2), uint16_t*: NullWriter_write4_1, default: NullWriter_write4_2)(a1, a2, a3, a4)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullWriter_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullWriter_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_NULLWRITER_H
