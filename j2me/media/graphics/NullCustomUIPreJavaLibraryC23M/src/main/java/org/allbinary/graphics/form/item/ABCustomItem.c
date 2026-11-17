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
// #include "javax/microedition/lcdui/Screen.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct ABCustomItem ABCustomItem;
struct ABCustomItem {
    char unused;
};

Any* ABCustomItem_NULL_CUSTOM_ITEM;

ABCustomItem* ABCustomItem_new(const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
ABCustomItem* ABCustomItem_getNullInstance(void);

void ABCustomItem_init(ABCustomItem* this, const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void ABCustomItem_setOwner(ABCustomItem* this, Screen* owner);
void ABCustomItem_paintXY(ABCustomItem* this, Graphics* graphics, int32_t x, int32_t y);
void ABCustomItem_paintUnselected(ABCustomItem* this, Graphics* graphics, int32_t x, int32_t y);
bool ABCustomItem_isFocusable(ABCustomItem* this);
const char* ABCustomItem_getLabel(ABCustomItem* this);
void ABCustomItem_setLabel(ABCustomItem* this, const char* label);
int32_t ABCustomItem_getHeight(ABCustomItem* this);
void ABCustomItem_setHeight(ABCustomItem* this, int32_t height);
float ABCustomItem_getValue(ABCustomItem* this);
void ABCustomItem_setValue(ABCustomItem* this, float value);
int32_t ABCustomItem_getMinimumWidth(ABCustomItem* this);
int32_t ABCustomItem_getMinimumHeight(ABCustomItem* this);
void ABCustomItem_preMeasurement(ABCustomItem* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void ABCustomItem_staticInit(void) {
    ABCustomItem_NULL_CUSTOM_ITEM = NullUtil_getInstance()->NULL_OBJECT;
}


ABCustomItem* ABCustomItem_getNullInstance(void) {
        if (ABCustomItem_NULL_CUSTOM_ITEM == NullUtil_getInstance()->NULL_OBJECT) {
            ABCustomItem_NULL_CUSTOM_ITEM = ABCustomItem_new(StringUtil_getInstance()->EMPTY_STRING, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((ABCustomItem*) ABCustomItem_NULL_CUSTOM_ITEM);
}


void ABCustomItem_init(ABCustomItem* this, const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
}

ABCustomItem* ABCustomItem_new(const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomItem* this = calloc(1, sizeof(ABCustomItem));
    ABCustomItem_init(this, label, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void ABCustomItem_setOwner(ABCustomItem* this, Screen* owner) {
}


void ABCustomItem_paintXY(ABCustomItem* this, Graphics* graphics, int32_t x, int32_t y) {
}


void ABCustomItem_paintUnselected(ABCustomItem* this, Graphics* graphics, int32_t x, int32_t y) {
}


bool ABCustomItem_isFocusable(ABCustomItem* this) {
        return false;
}


const char* ABCustomItem_getLabel(ABCustomItem* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


void ABCustomItem_setLabel(ABCustomItem* this, const char* label) {
}


int32_t ABCustomItem_getHeight(ABCustomItem* this) {
        return 0;
}


void ABCustomItem_setHeight(ABCustomItem* this, int32_t height) {
}


float ABCustomItem_getValue(ABCustomItem* this) {
        return 0.0f;
}


void ABCustomItem_setValue(ABCustomItem* this, float value) {
}


int32_t ABCustomItem_getMinimumWidth(ABCustomItem* this) {
        return 0;
}


int32_t ABCustomItem_getMinimumHeight(ABCustomItem* this) {
        return 0;
}


void ABCustomItem_preMeasurement(ABCustomItem* this, Graphics* graphics) {
}

