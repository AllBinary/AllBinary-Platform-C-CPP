#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H
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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct CanvasStrings CanvasStrings;
struct CanvasStrings {
    const char* CONSTRUCTOR;
    const char* PAUSE;
    const char* UN_PAUSE;
    const char* SET_FULL_SCREEN_MODE;
    const char* SIZE_CHANGED;
    const char* SCALED_IMAGES;
    const char* PAINT;
    const char* ON_DISPLAY_CHANGE_EVENT;
    const char* UPDATE_MEASUREMENT;
    const char* FD_WIDTH;
    const char* FD_HEIGHT;
    BasicArrayList* EMPTY_CHILD_NAME_LIST;
    const char* ABOUT;
    const char* OPTIONS;
    const char* FONT_ATLAS;
    const char* OBJ_MODEL;
    const char* MD2_MODEL;
    const char* _PNG_;
};


CanvasStrings* CanvasStrings_new(void);
void CanvasStrings_init(CanvasStrings* this);

CanvasStrings* CanvasStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CanvasStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CanvasStrings_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H
