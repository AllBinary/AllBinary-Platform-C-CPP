#ifndef ORG_ALLBINARY_LOGIC_IO_ABFILELOCALINPUTSTREAM_H
#define ORG_ALLBINARY_LOGIC_IO_ABFILELOCALINPUTSTREAM_H
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
typedef struct AbFileInputStream AbFileInputStream;
typedef struct AbFile AbFile;
typedef struct AbFileNativeUtil AbFileNativeUtil;
#include "java/io/FileNotFoundException.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"

typedef struct AbFileLocalInputStream AbFileLocalInputStream;
struct AbFileLocalInputStream {
    AbFileInputStream base;
};


AbFileLocalInputStream* AbFileLocalInputStream_new(AbFile* file);

void AbFileLocalInputStream_init(AbFileLocalInputStream* this, AbFile* file);
#define AbFileLocalInputStream_new1 AbFileLocalInputStream_new
#define AbFileLocalInputStream_init1 AbFileLocalInputStream_init
#ifndef AbFileLocalInputStream_createFromAbFile
#define AbFileLocalInputStream_createFromAbFile AbFileInputStream_createFromAbFile
#endif
#ifndef AbFileLocalInputStream_createFromFile
#define AbFileLocalInputStream_createFromFile AbFileInputStream_createFromFile
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbFileLocalInputStream_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbFileLocalInputStream_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_ABFILELOCALINPUTSTREAM_H
