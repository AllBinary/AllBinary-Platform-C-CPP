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
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct KeyValueDrawString KeyValueDrawString;
struct KeyValueDrawString {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* myFontProcessor;
    const char* LABEL;
    int32_t labelX;
    int32_t valueX;
    const char* value;
};


KeyValueDrawString* KeyValueDrawString_new(const char* label, int32_t x);

void KeyValueDrawString_init(KeyValueDrawString* this, const char* label, int32_t x);
void KeyValueDrawString_updateMeasurement(KeyValueDrawString* this, Graphics* graphics);
void KeyValueDrawString_paint(KeyValueDrawString* this, Graphics* graphics, int32_t y);
void KeyValueDrawString_update(KeyValueDrawString* this, const char* value);

static void KeyValueDrawString_initFields(KeyValueDrawString* this) {
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    
    
    this->valueX = 0;
    this->value = StringUtil_getInstance()->EMPTY_STRING;
}


void KeyValueDrawString_init(KeyValueDrawString* this, const char* label, int32_t x) {
    KeyValueDrawString_initFields(this);
        this->LABEL = label;
        this->labelX = x;
}

KeyValueDrawString* KeyValueDrawString_new(const char* label, int32_t x) {
    KeyValueDrawString* this = calloc(1, sizeof(KeyValueDrawString));
    KeyValueDrawString_init(this, label, x);
    return this;
}


void KeyValueDrawString_updateMeasurement(KeyValueDrawString* this, Graphics* graphics) {
        int32_t labelWidth = JAVA_CALL(Graphics_getFont(graphics), stringWidth, this->LABEL) - ((int32_t) strlen(this->LABEL));
        this->valueX = labelWidth + this->labelX;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void KeyValueDrawString_paint(KeyValueDrawString* this, Graphics* graphics, int32_t y) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_drawString(graphics, this->LABEL, this->labelX, y, 0);
        Graphics_drawString(graphics, this->value, this->valueX, y, 0);
}


void KeyValueDrawString_update(KeyValueDrawString* this, const char* value) {
        this->value = value;
}

