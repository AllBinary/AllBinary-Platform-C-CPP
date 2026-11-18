// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/CustomCustomItem.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"





void CustomCustomItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomCustomItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomCustomItem", "ABCustomItem");
    java_register_method("CustomCustomItem", "updateMeasurement", (void*) CustomCustomItem_updateMeasurement);
}

static void CustomCustomItem_initFields(CustomCustomItem* this) {
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
}


void CustomCustomItem_init(CustomCustomItem* this, const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomCustomItem_register();
        ABCustomItem_init(&this->base, label, backgroundBasicColor, foregroundBasicColor);
        CustomCustomItem_initFields(this);
}

CustomCustomItem* CustomCustomItem_new(const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomCustomItem* this = java_object_alloc(sizeof(CustomCustomItem), "CustomCustomItem");
    CustomCustomItem_init(this, label, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void CustomCustomItem_updateMeasurement(CustomCustomItem* this, Graphics* graphics) {
}

