#ifndef ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_H
#define ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_H
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
#include "java/io/File.h"
#include "java/io/FileInputStream.h"
#include "java/io/FileNotFoundException.h"

typedef struct AbFileInputStream AbFileInputStream;
struct AbFileInputStream {
    FileInputStream base;
};


AbFileInputStream* AbFileInputStream_new(const char* name);

void AbFileInputStream_init(AbFileInputStream* this, const char* name);

AbFileInputStream* AbFileInputStream_createFromAbFile(AbFile* file);

AbFileInputStream* AbFileInputStream_createFromFile(File* file);
#define AbFileInputStream_new1 AbFileInputStream_new
#define AbFileInputStream_init1 AbFileInputStream_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbFileInputStream_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbFileInputStream_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_ABFILEINPUTSTREAM_H
