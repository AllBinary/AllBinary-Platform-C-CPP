#ifndef ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H
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
// package org.allbinary.graphics.font

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Font Font;
typedef struct Graphics Graphics;

typedef struct MyFontProcessor MyFontProcessor;
struct MyFontProcessor {
    char unused;
};


MyFontProcessor* MyFontProcessor_new(void);
void MyFontProcessor_init(MyFontProcessor* this);

int32_t MyFontProcessor_defaultCharWidth(Font* font);

int32_t MyFontProcessor_defaultStringWidth(Font* font, int32_t size);

MyFontProcessor* MyFontProcessor_getInstance(void);

void MyFontProcessor_process(MyFontProcessor* this, Graphics* graphics);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MyFontProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MyFontProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H
