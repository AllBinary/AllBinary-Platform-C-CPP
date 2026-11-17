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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/game/input/event/RawKeyEventListener.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/animation/text/TextInterface.h"

typedef struct CustomTextBoxIndexedAnimation CustomTextBoxIndexedAnimation;
struct CustomTextBoxIndexedAnimation {
    IndexedAnimation base;
    RawKeyEventListener RawKeyEventListener_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    TextInterface TextInterface_interface;
    CustomTextBox* customTextBox;
    const char* lastText;
    bool hasChanged;
    TextChangeListener* textChangeListener;
};


CustomTextBoxIndexedAnimation* CustomTextBoxIndexedAnimation_new(CustomTextBox* customTextBox);

void CustomTextBoxIndexedAnimation_init(CustomTextBoxIndexedAnimation* this, CustomTextBox* customTextBox);
void CustomTextBoxIndexedAnimation_setBasicColorP(CustomTextBoxIndexedAnimation* this, BasicColor* basicColor);
void CustomTextBoxIndexedAnimation_setBackgroundBasicColorP(CustomTextBoxIndexedAnimation* this, BasicColor* basicColor);
void CustomTextBoxIndexedAnimation_setTextWithOnMeasure(CustomTextBoxIndexedAnimation* this, const char* text, TextChangeListener* textChangeListener);
void CustomTextBoxIndexedAnimation_updateMeasurement(CustomTextBoxIndexedAnimation* this, Graphics* graphics);
void CustomTextBoxIndexedAnimation_setText(CustomTextBoxIndexedAnimation* this, const char* text);
const char* CustomTextBoxIndexedAnimation_getText(CustomTextBoxIndexedAnimation* this);
void CustomTextBoxIndexedAnimation_onEventRaw(CustomTextBoxIndexedAnimation* this, int32_t keyCode, int32_t deviceId, bool repeated);
int32_t CustomTextBoxIndexedAnimation_getFontHeight(CustomTextBoxIndexedAnimation* this);
void CustomTextBoxIndexedAnimation_paintXY(CustomTextBoxIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void CustomTextBoxIndexedAnimation_paintThreedXYZ(CustomTextBoxIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
int32_t CustomTextBoxIndexedAnimation_getWidth(CustomTextBoxIndexedAnimation* this);

static void CustomTextBoxIndexedAnimation_initFields(CustomTextBoxIndexedAnimation* this) {
    
    this->lastText = StringUtil_getInstance()->INIT_STRING;
    this->hasChanged = true;
    this->textChangeListener = TextChangeListener_getInstance();
}


void CustomTextBoxIndexedAnimation_init(CustomTextBoxIndexedAnimation* this, CustomTextBox* customTextBox) {
        IndexedAnimation_init(&this->base, AnimationBehavior_getInstance());
        CustomTextBoxIndexedAnimation_initFields(this);
        this->customTextBox = customTextBox;
}

CustomTextBoxIndexedAnimation* CustomTextBoxIndexedAnimation_new(CustomTextBox* customTextBox) {
    CustomTextBoxIndexedAnimation* this = calloc(1, sizeof(CustomTextBoxIndexedAnimation));
    CustomTextBoxIndexedAnimation_init(this, customTextBox);
    return this;
}


void CustomTextBoxIndexedAnimation_setBasicColorP(CustomTextBoxIndexedAnimation* this, BasicColor* basicColor) {
        JAVA_CALL(CustomTextBox_getTextFieldItem(this->customTextBox), setForegroundBasicColorP, basicColor);
}


void CustomTextBoxIndexedAnimation_setBackgroundBasicColorP(CustomTextBoxIndexedAnimation* this, BasicColor* basicColor) {
        JAVA_CALL(CustomTextBox_getTextFieldItem(this->customTextBox), setBackgroundBasicColorP, basicColor);
}


void CustomTextBoxIndexedAnimation_setTextWithOnMeasure(CustomTextBoxIndexedAnimation* this, const char* text, TextChangeListener* textChangeListener) {
        CustomTextBoxIndexedAnimation_setText(this, text);
        this->textChangeListener = textChangeListener;
}


void CustomTextBoxIndexedAnimation_updateMeasurement(CustomTextBoxIndexedAnimation* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        TextChangeListener_onMeasure(this->textChangeListener);
        this->textChangeListener = TextChangeListener_getInstance();
}


void CustomTextBoxIndexedAnimation_setText(CustomTextBoxIndexedAnimation* this, const char* text) {
        if (this->lastText != text) {
            this->hasChanged = true;
            this->lastText = text;
            JAVA_CALL(CustomTextBox_getTextFieldItem(this->customTextBox), setString, text);
        }
}


const char* CustomTextBoxIndexedAnimation_getText(CustomTextBoxIndexedAnimation* this) {
        return JAVA_CALL(CustomTextBox_getTextFieldItem(this->customTextBox), getString);
}


void CustomTextBoxIndexedAnimation_onEventRaw(CustomTextBoxIndexedAnimation* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        CustomTextBox_onEventRaw(this->customTextBox, keyCode, deviceId, repeated);
}


int32_t CustomTextBoxIndexedAnimation_getFontHeight(CustomTextBoxIndexedAnimation* this) {
        return JAVA_CALL(CustomTextBox_getTextFieldItem(this->customTextBox), getFontHeight);
}


void CustomTextBoxIndexedAnimation_paintXY(CustomTextBoxIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        CustomTextBox_paintXY(this->customTextBox, graphics, x, y);
}


void CustomTextBoxIndexedAnimation_paintThreedXYZ(CustomTextBoxIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
}


int32_t CustomTextBoxIndexedAnimation_getWidth(CustomTextBoxIndexedAnimation* this) {
        return IndexedAnimation_getWidth((&this->base));
}

