#ifndef ORG_ALLBINARY_LOGIC_IO_ABDATAINPUTSTREAM_H
#define ORG_ALLBINARY_LOGIC_IO_ABDATAINPUTSTREAM_H
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
#include "java/io/DataInputStream.h"
#include "java/io/InputStream.h"

typedef struct AbDataInputStream AbDataInputStream;
struct AbDataInputStream {
    DataInputStream base;
};


AbDataInputStream* AbDataInputStream_new(InputStream* out);

void AbDataInputStream_init(AbDataInputStream* this, InputStream* out);
#define AbDataInputStream_new1 AbDataInputStream_new
#define AbDataInputStream_init1 AbDataInputStream_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbDataInputStream_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbDataInputStream_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_ABDATAINPUTSTREAM_H
