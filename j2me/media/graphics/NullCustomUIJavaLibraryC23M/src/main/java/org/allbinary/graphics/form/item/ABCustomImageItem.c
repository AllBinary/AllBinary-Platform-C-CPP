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
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"

typedef struct ABCustomImageItem ABCustomImageItem;
struct ABCustomImageItem {
    ABCustomItem base;
    int32_t yOffset;
};


ABCustomImageItem* ABCustomImageItem_new(const char* label, Image* image, int32_t layout, const char* altText, BasicColor* basicColor, int32_t yOffset);

void ABCustomImageItem_init(ABCustomImageItem* this, const char* label, Image* image, int32_t layout, const char* altText, BasicColor* basicColor, int32_t yOffset);
Image* ABCustomImageItem_getImage(ABCustomImageItem* this);

static void ABCustomImageItem_initFields(ABCustomImageItem* this) {
    this->yOffset = 0;
}


void ABCustomImageItem_init(ABCustomImageItem* this, const char* label, Image* image, int32_t layout, const char* altText, BasicColor* basicColor, int32_t yOffset) {
        ABCustomItem_init(&this->base, label, basicColor, basicColor);
        ABCustomImageItem_initFields(this);
}

ABCustomImageItem* ABCustomImageItem_new(const char* label, Image* image, int32_t layout, const char* altText, BasicColor* basicColor, int32_t yOffset) {
    ABCustomImageItem* this = calloc(1, sizeof(ABCustomImageItem));
    ABCustomImageItem_init(this, label, image, layout, altText, basicColor, yOffset);
    return this;
}


Image* ABCustomImageItem_getImage(ABCustomImageItem* this) {
        return NullImage_NULL_IMAGE;
}

