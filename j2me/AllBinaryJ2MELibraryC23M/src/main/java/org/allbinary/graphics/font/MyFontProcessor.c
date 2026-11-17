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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"

typedef struct MyFontProcessor MyFontProcessor;
struct MyFontProcessor {
    char unused;
};

static MyFontProcessor* MyFontProcessor_instance;

MyFontProcessor* MyFontProcessor_new(void);
int32_t MyFontProcessor_defaultCharWidth(Font* font);
int32_t MyFontProcessor_defaultStringWidth(Font* font, int32_t size);
MyFontProcessor* MyFontProcessor_getInstance(void);
void MyFontProcessor_process(MyFontProcessor* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void MyFontProcessor_staticInit(void) {
    MyFontProcessor_instance = MyFontProcessor_new();
}

void MyFontProcessor_init(MyFontProcessor* this) {
}

MyFontProcessor* MyFontProcessor_new(void) {
    MyFontProcessor* this = calloc(1, sizeof(MyFontProcessor));
    MyFontProcessor_init(this);
    return this;
}


int32_t MyFontProcessor_defaultCharWidth(Font* font) {
        return Font_charWidth(font, u'C');
}


int32_t MyFontProcessor_defaultStringWidth(Font* font, int32_t size) {
        return MyFontProcessor_defaultCharWidth(font) * size;
}


MyFontProcessor* MyFontProcessor_getInstance(void) {
        return MyFontProcessor_instance;
}


void MyFontProcessor_process(MyFontProcessor* this, Graphics* graphics) {
}

