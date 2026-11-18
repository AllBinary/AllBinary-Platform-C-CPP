#ifndef ORG_ALLBINARY_DEVICE_NULLGL10_H
#define ORG_ALLBINARY_DEVICE_NULLGL10_H
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
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GL10 GL10;
#include "javax/microedition/khronos/opengles/GL10.h"

typedef struct NullGL10 NullGL10;
struct NullGL10 {
    GL10 GL10_interface;
};

extern NullGL10* NullGL10_NULL_GL10;

NullGL10* NullGL10_new(void);
void NullGL10_init(NullGL10* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullGL10_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullGL10_register(void);


#endif // ORG_ALLBINARY_DEVICE_NULLGL10_H
