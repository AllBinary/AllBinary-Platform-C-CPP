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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"

typedef struct ABCustomGaugeItem ABCustomGaugeItem;
struct ABCustomGaugeItem {
    ABCustomItem base;
};

ABCustomGaugeItem* ABCustomGaugeItem_NULL_GAUGE_ITEM;

ABCustomGaugeItem* ABCustomGaugeItem_new(const char* label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABCustomGaugeItem_init(ABCustomGaugeItem* this, const char* label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

// Static fields with runtime initializers: call this once at startup
void ABCustomGaugeItem_staticInit(void) {
    ABCustomGaugeItem_NULL_GAUGE_ITEM = ABCustomGaugeItem_new(StringUtil_getInstance()->EMPTY_STRING, 1, 0, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
}


void ABCustomGaugeItem_init(ABCustomGaugeItem* this, const char* label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ABCustomItem_init(&this->base, label, backgroundBasicColor, foregroundBasicColor);
}

ABCustomGaugeItem* ABCustomGaugeItem_new(const char* label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABCustomGaugeItem* this = calloc(1, sizeof(ABCustomGaugeItem));
    ABCustomGaugeItem_init(this, label, maxValue, initialValue, backgroundBasicColor, foregroundBasicColor);
    return this;
}

