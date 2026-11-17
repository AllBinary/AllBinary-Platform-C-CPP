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
// package org.allbinary.animation.text

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Font.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/CustomTextBox.h"

typedef struct CustomTextBox2 CustomTextBox2;
struct CustomTextBox2 {
    CustomTextBox base;
};


CustomTextBox2* CustomTextBox2_new(CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CustomTextBox2_init(CustomTextBox2* this, CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);


void CustomTextBox2_init(CustomTextBox2* this, CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        CustomTextBox_init(&this->base, cmdListener, label, text, maxSize, constraints, font, backgroundBasicColor, foregroundBasicColor);
        JAVA_CALL(CustomTextBox2_getTextFieldItem(this), setFocus, true);
}

CustomTextBox2* CustomTextBox2_new(CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomTextBox2* this = calloc(1, sizeof(CustomTextBox2));
    CustomTextBox2_init(this, cmdListener, label, text, maxSize, constraints, font, backgroundBasicColor, foregroundBasicColor);
    return this;
}

