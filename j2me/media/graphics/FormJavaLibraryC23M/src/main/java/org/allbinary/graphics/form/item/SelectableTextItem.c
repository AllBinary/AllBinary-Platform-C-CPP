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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABTextItem.h"

typedef struct SelectableTextItem SelectableTextItem;
struct SelectableTextItem {
    ABTextItem base;
};


SelectableTextItem* SelectableTextItem_new(const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void SelectableTextItem_init(SelectableTextItem* this, const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
bool SelectableTextItem_isFocusable(SelectableTextItem* this);
void SelectableTextItem_paintXY(SelectableTextItem* this, Graphics* graphics, int32_t x, int32_t y);


void SelectableTextItem_init(SelectableTextItem* this, const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ABTextItem_init(&this->base, label, layout, altText, backgroundBasicColor, foregroundBasicColor);
}

SelectableTextItem* SelectableTextItem_new(const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    SelectableTextItem* this = calloc(1, sizeof(SelectableTextItem));
    SelectableTextItem_init(this, label, layout, altText, backgroundBasicColor, foregroundBasicColor);
    return this;
}


bool SelectableTextItem_isFocusable(SelectableTextItem* this) {
        return true;
}


void SelectableTextItem_paintXY(SelectableTextItem* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
        ABStringComponent* stringComponent = SelectableTextItem_getLabelStringComponent(this);
        if (stringComponent != nullptr) {
            Graphics_setColor(graphics, JAVA_CALL(ABStringComponent_getForegroundBasicColor(stringComponent), intValue));
        }
        Graphics_drawString(graphics, SelectableTextItem_getLabel(this), x + 2, y, 0);
}

