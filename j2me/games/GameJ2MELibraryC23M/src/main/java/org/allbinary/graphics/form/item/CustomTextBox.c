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
// package org.allbinary.graphics.form.item

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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/PlatformKeyFactory.h"
#include "org/allbinary/game/input/event/RawKeyEventListener.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/validation/TextItemVisitor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct CustomTextBox CustomTextBox;
struct CustomTextBox {
    GameCommandCanvas base;
    RawKeyEventListener RawKeyEventListener_interface;
    ABTextFieldItem* textFieldItem;
    InputFactory* inputFactory;
};


CustomTextBox* CustomTextBox_new(CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CustomTextBox_init(CustomTextBox* this, CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void CustomTextBox_submit(CustomTextBox* this);
void CustomTextBox_onEventRaw(CustomTextBox* this, int32_t keyCode, int32_t deviceId, bool repeated);
void CustomTextBox_keyPressed(CustomTextBox* this, int32_t keyCode);
void CustomTextBox_keyReleased(CustomTextBox* this, int32_t keyCode);
void CustomTextBox_keyRepeated(CustomTextBox* this, int32_t keyCode);
void CustomTextBox_keyPressedByDevice(CustomTextBox* this, int32_t keyCode, int32_t deviceId);
void CustomTextBox_keyReleasedByDevice(CustomTextBox* this, int32_t keyCode, int32_t deviceId);
void CustomTextBox_paint(CustomTextBox* this, Graphics* graphics);
void CustomTextBox_paintXY(CustomTextBox* this, Graphics* graphics, int32_t x, int32_t y);
ABTextFieldItem* CustomTextBox_getTextFieldItem(CustomTextBox* this);

static void CustomTextBox_initFields(CustomTextBox* this) {
    
    this->inputFactory = InputFactory_getInstance();
}


void CustomTextBox_init(CustomTextBox* this, CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        GameCommandCanvas_init(&this->base, cmdListener, label, backgroundBasicColor, foregroundBasicColor);
        CustomTextBox_initFields(this);
        StringUtil* stringUtil = StringUtil_getInstance();
        ABTextFieldItem* textFieldItem = ABTextFieldItem_new(this, TextItemVisitor_new(), stringUtil->EMPTY_STRING, stringUtil->EMPTY_STRING, maxSize, 0, stringUtil->EMPTY_STRING, font, backgroundBasicColor, foregroundBasicColor);
        ABTextFieldItem_setString(textFieldItem, text);
        this->textFieldItem = textFieldItem;
        CustomTextBox_setTitle(this, label);
}

CustomTextBox* CustomTextBox_new(CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomTextBox* this = calloc(1, sizeof(CustomTextBox));
    CustomTextBox_init(this, cmdListener, label, text, maxSize, constraints, font, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void CustomTextBox_submit(CustomTextBox* this) {
}


void CustomTextBox_onEventRaw(CustomTextBox* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->START), appendint, keyCode), toString), this, "onEvent");
        CustomTextBox_keyPressedByDevice(this, keyCode, deviceId);
}


void CustomTextBox_keyPressed(CustomTextBox* this, int32_t keyCode) {
        CustomTextBox_keyPressedByDevice(this, keyCode, 0);
}


void CustomTextBox_keyReleased(CustomTextBox* this, int32_t keyCode) {
        CustomTextBox_keyReleasedByDevice(this, keyCode, 0);
}


void CustomTextBox_keyRepeated(CustomTextBox* this, int32_t keyCode) {
        CustomTextBox_keyRepeatedByDevice(this, keyCode, 0);
}


void CustomTextBox_keyPressedByDevice(CustomTextBox* this, int32_t keyCode, int32_t deviceId) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), appendint, keyCode), toString), this, this->gameInputStrings->KEY_PRESSED);
            PlatformKeyFactory* platformKeyFactory = PlatformKeyFactory_getInstance();
            Input* input = InputFactory_getInstanceById(this->inputFactory, keyCode);
            if (PlatformKeyFactory_isSubmission(platformKeyFactory, input)) {
                CustomTextBox_submit(this);
            } else {
                ABTextFieldItem_keyPressed(this->textFieldItem, keyCode);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->gameInputStrings->KEY_PRESSED, e);
        } JAVA_END_TRY;
}


void CustomTextBox_keyReleasedByDevice(CustomTextBox* this, int32_t keyCode, int32_t deviceId) {
}


void CustomTextBox_paint(CustomTextBox* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->backgroundColor);
        Graphics_fillRect(graphics, 0, 0, JAVA_CALL(this->displayInfo, getLastWidth), JAVA_CALL(this->displayInfo, getLastHeight));
        Graphics_setColor(graphics, this->foregroundColor);
        if (!J2MEUtil_isJ2ME()) {
            Graphics_drawString(graphics, CustomTextBox_getTitle(this), 8, 1, 0);
        }
        CustomTextBox_paintXY(this, graphics, 8, JAVA_CALL(Graphics_getFont(graphics), getHeight) + 2);
        GameCommandCanvas_paint((&this->base), graphics);
}


void CustomTextBox_paintXY(CustomTextBox* this, Graphics* graphics, int32_t x, int32_t y) {
        ABTextFieldItem_paintXY(this->textFieldItem, graphics, x, y);
}


ABTextFieldItem* CustomTextBox_getTextFieldItem(CustomTextBox* this) {
        return this->textFieldItem;
}

