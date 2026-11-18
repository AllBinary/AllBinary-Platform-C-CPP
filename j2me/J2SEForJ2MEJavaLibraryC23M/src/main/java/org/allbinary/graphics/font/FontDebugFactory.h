#ifndef ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_H
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

typedef struct FontDebugFactory FontDebugFactory;
struct FontDebugFactory {
    char unused;
};


FontDebugFactory* FontDebugFactory_new(void);
void FontDebugFactory_init(FontDebugFactory* this);

FontDebugFactory* FontDebugFactory_getInstance(void);

void FontDebugFactory_setFont(FontDebugFactory* this, Font* font, Graphics* graphics);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FontDebugFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FontDebugFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_H
