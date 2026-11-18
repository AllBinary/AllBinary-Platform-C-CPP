#ifndef ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_H
#define ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_H
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
// package org.allbinary.android.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/lang/Runnable.h"

typedef struct AllBinaryRenderer AllBinaryRenderer;
struct AllBinaryRenderer {
    char unused;
};


AllBinaryRenderer* AllBinaryRenderer_new(void);
void AllBinaryRenderer_init(AllBinaryRenderer* this);

AllBinaryRenderer* AllBinaryRenderer_getInstance(void);

void AllBinaryRenderer_setRunnable(AllBinaryRenderer* this, Runnable* runnable);

void AllBinaryRenderer_clearRunnable(AllBinaryRenderer* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryRenderer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryRenderer_register(void);


#endif // ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_H
