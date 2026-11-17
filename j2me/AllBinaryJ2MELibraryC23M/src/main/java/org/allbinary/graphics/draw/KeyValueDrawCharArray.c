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
// package org.allbinary.graphics.draw

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/logic/java/character/CharArrayFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"

typedef struct KeyValueDrawCharArray KeyValueDrawCharArray;
struct KeyValueDrawCharArray {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* myFontProcessor;
    const char* LABEL;
    int32_t labelX;
    int32_t valueX;
    uint16_t* value;
    int32_t len;
};


KeyValueDrawCharArray* KeyValueDrawCharArray_new(const char* label, int32_t x);

void KeyValueDrawCharArray_init(KeyValueDrawCharArray* this, const char* label, int32_t x);
void KeyValueDrawCharArray_updateMeasurement(KeyValueDrawCharArray* this, Graphics* graphics);
void KeyValueDrawCharArray_paint(KeyValueDrawCharArray* this, Graphics* graphics, int32_t y);
void KeyValueDrawCharArray_update(KeyValueDrawCharArray* this, uint16_t* value, int32_t len);

static void KeyValueDrawCharArray_initFields(KeyValueDrawCharArray* this) {
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    
    
    this->valueX = 0;
    this->value = CharArrayFactory_getZeroCharArray(CharArrayFactory_getInstance());
    this->len = 0;
}


void KeyValueDrawCharArray_init(KeyValueDrawCharArray* this, const char* label, int32_t x) {
    KeyValueDrawCharArray_initFields(this);
        this->LABEL = label;
        this->labelX = x;
}

KeyValueDrawCharArray* KeyValueDrawCharArray_new(const char* label, int32_t x) {
    KeyValueDrawCharArray* this = calloc(1, sizeof(KeyValueDrawCharArray));
    KeyValueDrawCharArray_init(this, label, x);
    return this;
}


void KeyValueDrawCharArray_updateMeasurement(KeyValueDrawCharArray* this, Graphics* graphics) {
        int32_t labelWidth = JAVA_CALL(Graphics_getFont(graphics), stringWidth, this->LABEL) - ((int32_t) strlen(this->LABEL));
        this->valueX = labelWidth + this->labelX;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void KeyValueDrawCharArray_paint(KeyValueDrawCharArray* this, Graphics* graphics, int32_t y) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_drawString(graphics, this->LABEL, this->labelX, y, 0);
        Graphics_drawChars(graphics, this->value, 0, this->len, this->valueX, y, 0);
}


void KeyValueDrawCharArray_update(KeyValueDrawCharArray* this, uint16_t* value, int32_t len) {
        this->value = value;
        this->len = len;
}

