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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"

typedef struct FontDebugFactory FontDebugFactory;
struct FontDebugFactory {
    char unused;
};

static FontDebugFactory* FontDebugFactory_instance;

FontDebugFactory* FontDebugFactory_new(void);
FontDebugFactory* FontDebugFactory_getInstance(void);
void FontDebugFactory_setFont(FontDebugFactory* this, Font* font, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void FontDebugFactory_staticInit(void) {
    FontDebugFactory_instance = FontDebugFactory_new();
}

void FontDebugFactory_init(FontDebugFactory* this) {
}

FontDebugFactory* FontDebugFactory_new(void) {
    FontDebugFactory* this = calloc(1, sizeof(FontDebugFactory));
    FontDebugFactory_init(this);
    return this;
}


FontDebugFactory* FontDebugFactory_getInstance(void) {
        return FontDebugFactory_instance;
}


void FontDebugFactory_setFont(FontDebugFactory* this, Font* font, Graphics* graphics) {
        Graphics_setFont(graphics, font);
}

