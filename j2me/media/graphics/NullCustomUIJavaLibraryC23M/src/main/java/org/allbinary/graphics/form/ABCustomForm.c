// Generated Code Do Not Modify
// package org.allbinary.graphics.form

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
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/graphics/form/CustomScreen.h"

typedef struct ABCustomForm ABCustomForm;
struct ABCustomForm {
    CustomScreen base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


ABCustomForm* ABCustomForm_new(const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABCustomForm_init(ABCustomForm* this, const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
ABCustomItem** ABCustomForm_getAllitems(ABCustomForm* this);
int32_t ABCustomForm_size(ABCustomForm* this);
void ABCustomForm_setSelectedIndex(ABCustomForm* this, int32_t index);
int32_t ABCustomForm_getSelectedIndex(ABCustomForm* this);
void ABCustomForm_deleteAll(ABCustomForm* this);
void ABCustomForm_delete(ABCustomForm* this, int32_t itemNum);
int32_t ABCustomForm_append(ABCustomForm* this, ABCustomItem* item);
void ABCustomForm_insert(ABCustomForm* this, int32_t itemNum, ABCustomItem* item);
void ABCustomForm_set(ABCustomForm* this, int32_t itemNum, ABCustomItem* item);
ABCustomItem* ABCustomForm_get(ABCustomForm* this, int32_t itemNum);
int32_t ABCustomForm_getWidth(ABCustomForm* this);
void ABCustomForm_paint(ABCustomForm* this, Graphics* graphics);
const char* ABCustomForm_getTitle(ABCustomForm* this);

static void ABCustomForm_initFields(ABCustomForm* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void ABCustomForm_init(ABCustomForm* this, const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomScreen_init(&this->base);
    ABCustomForm_initFields(this);
}

ABCustomForm* ABCustomForm_new(const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomForm* this = calloc(1, sizeof(ABCustomForm));
    ABCustomForm_init(this, title, items, backgroundBasicColor, foregroundBasicColor);
    return this;
}


ABCustomItem** ABCustomForm_getAllitems(ABCustomForm* this) {
        return ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), 0));
}


int32_t ABCustomForm_size(ABCustomForm* this) {
        return 0;
}


void ABCustomForm_setSelectedIndex(ABCustomForm* this, int32_t index) {
}


int32_t ABCustomForm_getSelectedIndex(ABCustomForm* this) {
        return 0;
}


void ABCustomForm_deleteAll(ABCustomForm* this) {
}


void ABCustomForm_delete(ABCustomForm* this, int32_t itemNum) {
}


int32_t ABCustomForm_append(ABCustomForm* this, ABCustomItem* item) {
        return -1;
}


void ABCustomForm_insert(ABCustomForm* this, int32_t itemNum, ABCustomItem* item) {
}


void ABCustomForm_set(ABCustomForm* this, int32_t itemNum, ABCustomItem* item) {
}


ABCustomItem* ABCustomForm_get(ABCustomForm* this, int32_t itemNum) {
        return ABCustomItem_getNullInstance();
}


int32_t ABCustomForm_getWidth(ABCustomForm* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void ABCustomForm_paint(ABCustomForm* this, Graphics* graphics) {
}


const char* ABCustomForm_getTitle(ABCustomForm* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

