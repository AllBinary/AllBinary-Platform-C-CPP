#ifndef ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H
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
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct Graphics Graphics;
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#if __has_include("org/allbinary/graphics/font/UpdateMyFontInterface.h")
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#endif

typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
struct UpdateMyFontProcessor {
    MyFontProcessor base;
    UpdateMyFontInterface* updateMeasurementProcessor;
};


UpdateMyFontProcessor* UpdateMyFontProcessor_new(UpdateMyFontInterface* keyValueDrawCharArray);

void UpdateMyFontProcessor_init(UpdateMyFontProcessor* this, UpdateMyFontInterface* keyValueDrawCharArray);

void UpdateMyFontProcessor_process(UpdateMyFontProcessor* this, Graphics* graphics);
#define UpdateMyFontProcessor_new1 UpdateMyFontProcessor_new
#define UpdateMyFontProcessor_init1 UpdateMyFontProcessor_init
#ifndef UpdateMyFontProcessor_defaultCharWidth
#define UpdateMyFontProcessor_defaultCharWidth MyFontProcessor_defaultCharWidth
#endif
#ifndef UpdateMyFontProcessor_defaultStringWidth
#define UpdateMyFontProcessor_defaultStringWidth MyFontProcessor_defaultStringWidth
#endif
#ifndef UpdateMyFontProcessor_getInstance
#define UpdateMyFontProcessor_getInstance MyFontProcessor_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpdateMyFontProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpdateMyFontProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H
