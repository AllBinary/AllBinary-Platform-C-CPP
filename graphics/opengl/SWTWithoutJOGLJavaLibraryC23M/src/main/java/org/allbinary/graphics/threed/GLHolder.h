#ifndef ORG_ALLBINARY_GRAPHICS_THREED_GLHOLDER_H
#define ORG_ALLBINARY_GRAPHICS_THREED_GLHOLDER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.graphics.threed

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GLHolder GLHolder;
struct GLHolder {
    bool isCreated;
};


GLHolder* GLHolder_new(void);

void GLHolder_init(GLHolder* this);

void GLHolder_runOnSurfaceCreated(GLHolder* this, void* renderer);

void GLHolder_runOnSurfaceChanged(GLHolder* this, void* renderer, int32_t width, int32_t height);

void GLHolder_run(GLHolder* this, void* renderer);
#define GLHolder_new0 GLHolder_new
#define GLHolder_init0 GLHolder_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GLHolder_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GLHolder_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_THREED_GLHOLDER_H
