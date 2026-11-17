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
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"

typedef struct CustomCustomItem CustomCustomItem;
struct CustomCustomItem {
    ABCustomItem base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
};


CustomCustomItem* CustomCustomItem_new(const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CustomCustomItem_init(CustomCustomItem* this, const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void CustomCustomItem_updateMeasurement(CustomCustomItem* this, Graphics* graphics);

static void CustomCustomItem_initFields(CustomCustomItem* this) {
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
}


void CustomCustomItem_init(CustomCustomItem* this, const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ABCustomItem_init(&this->base, label, backgroundBasicColor, foregroundBasicColor);
        CustomCustomItem_initFields(this);
}

CustomCustomItem* CustomCustomItem_new(const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomCustomItem* this = calloc(1, sizeof(CustomCustomItem));
    CustomCustomItem_init(this, label, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void CustomCustomItem_updateMeasurement(CustomCustomItem* this, Graphics* graphics) {
}

