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
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Font.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/graphics/form/item/ABTextItem.h"

typedef struct ABTextFieldItem ABTextFieldItem;
struct ABTextFieldItem {
    ABTextItem base;
    Font* font;
};


ABTextFieldItem* ABTextFieldItem_new(Canvas* canvas, Visitor* visitor, const char* label, const char* value, int32_t maxSize, int32_t layout, const char* altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABTextFieldItem_init(ABTextFieldItem* this, Canvas* canvas, Visitor* visitor, const char* label, const char* value, int32_t maxSize, int32_t layout, const char* altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
const char* ABTextFieldItem_getLabel(ABTextFieldItem* this);
void ABTextFieldItem_setLabel(ABTextFieldItem* this, const char* label);
const char* ABTextFieldItem_getString(ABTextFieldItem* this);
void ABTextFieldItem_setString(ABTextFieldItem* this, const char* string);
void ABTextFieldItem_setFocus(ABTextFieldItem* this, bool state);
int32_t ABTextFieldItem_getFontHeight(ABTextFieldItem* this);
void ABTextFieldItem_setBackgroundBasicColorP(ABTextFieldItem* this, BasicColor* basicColor);
void ABTextFieldItem_setForegroundBasicColorP(ABTextFieldItem* this, BasicColor* basicColor);

static void ABTextFieldItem_initFields(ABTextFieldItem* this) {
    
}


void ABTextFieldItem_init(ABTextFieldItem* this, Canvas* canvas, Visitor* visitor, const char* label, const char* value, int32_t maxSize, int32_t layout, const char* altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ABTextItem_init(&this->base, label, layout, altText, backgroundBasicColor, foregroundBasicColor);
        ABTextFieldItem_initFields(this);
        this->font = font;
}

ABTextFieldItem* ABTextFieldItem_new(Canvas* canvas, Visitor* visitor, const char* label, const char* value, int32_t maxSize, int32_t layout, const char* altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABTextFieldItem* this = calloc(1, sizeof(ABTextFieldItem));
    ABTextFieldItem_init(this, canvas, visitor, label, value, maxSize, layout, altText, font, backgroundBasicColor, foregroundBasicColor);
    return this;
}


const char* ABTextFieldItem_getLabel(ABTextFieldItem* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


void ABTextFieldItem_setLabel(ABTextFieldItem* this, const char* label) {
}


const char* ABTextFieldItem_getString(ABTextFieldItem* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


void ABTextFieldItem_setString(ABTextFieldItem* this, const char* string) {
}


void ABTextFieldItem_setFocus(ABTextFieldItem* this, bool state) {
}


int32_t ABTextFieldItem_getFontHeight(ABTextFieldItem* this) {
        return Font_getHeight(this->font);
}


void ABTextFieldItem_setBackgroundBasicColorP(ABTextFieldItem* this, BasicColor* basicColor) {
}


void ABTextFieldItem_setForegroundBasicColorP(ABTextFieldItem* this, BasicColor* basicColor) {
}

