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
#include "org/allbinary/graphics/form/item/CustomCustomItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItemInterface.h"

typedef struct ABTextItem ABTextItem;
struct ABTextItem {
    CustomCustomItem base;
    ABCustomItemInterface ABCustomItemInterface_interface;
};


ABTextItem* ABTextItem_new(const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABTextItem_init(ABTextItem* this, const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void ABTextItem_keyPressed(ABTextItem* this, int32_t keyCode);
void ABTextItem_paintUnselected(ABTextItem* this, Graphics* graphics, int32_t x, int32_t y);
ABStringComponent* ABTextItem_getLabelStringComponent(ABTextItem* this);
int32_t ABTextItem_getMinimumWidth(ABTextItem* this);
int32_t ABTextItem_getMinimumHeight(ABTextItem* this);
const char* ABTextItem_getLabel(ABTextItem* this);
void ABTextItem_paintXY(ABTextItem* this, Graphics* graphics, int32_t x, int32_t y);


void ABTextItem_init(ABTextItem* this, const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        CustomCustomItem_init(&this->base, label, backgroundBasicColor, foregroundBasicColor);
}

ABTextItem* ABTextItem_new(const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABTextItem* this = calloc(1, sizeof(ABTextItem));
    ABTextItem_init(this, label, layout, altText, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void ABTextItem_keyPressed(ABTextItem* this, int32_t keyCode) {
}


void ABTextItem_paintUnselected(ABTextItem* this, Graphics* graphics, int32_t x, int32_t y) {
}


ABStringComponent* ABTextItem_getLabelStringComponent(ABTextItem* this) {
        return ABStringComponent_NULL_STRING_COMPONENT;
}


int32_t ABTextItem_getMinimumWidth(ABTextItem* this) {
        return CustomCustomItem_getMinimumWidth((&this->base));
}


int32_t ABTextItem_getMinimumHeight(ABTextItem* this) {
        return CustomCustomItem_getMinimumHeight((&this->base));
}


const char* ABTextItem_getLabel(ABTextItem* this) {
        return CustomCustomItem_getLabel((&this->base));
}


void ABTextItem_paintXY(ABTextItem* this, Graphics* graphics, int32_t x, int32_t y) {
        CustomCustomItem_paintXY((&this->base), graphics, x, y);
}

