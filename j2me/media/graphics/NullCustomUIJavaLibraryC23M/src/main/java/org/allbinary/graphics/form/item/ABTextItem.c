// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ABTextItem.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/CustomCustomItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItemInterface.h"
#include "org/allbinary/graphics/form/item/ABStringComponent.h"











void ABTextItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABTextItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABTextItem", "CustomCustomItem");
    java_register_method("ABTextItem", "keyPressed", (void*) ABTextItem_keyPressed);
    java_register_method("ABTextItem", "paintUnselected", (void*) ABTextItem_paintUnselected);
    java_register_method("ABTextItem", "getLabelStringComponent", (void*) ABTextItem_getLabelStringComponent);
    java_register_method("ABTextItem", "getMinimumWidth", (void*) ABTextItem_getMinimumWidth);
    java_register_method("ABTextItem", "getMinimumHeight", (void*) ABTextItem_getMinimumHeight);
    java_register_method("ABTextItem", "getLabel", (void*) ABTextItem_getLabel);
    java_register_method("ABTextItem", "paintXY", (void*) ABTextItem_paintXY);
}


void ABTextItem_init(ABTextItem* this, const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABTextItem_register();
        CustomCustomItem_init(&this->base, label, backgroundBasicColor, foregroundBasicColor);
}

ABTextItem* ABTextItem_new(const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABTextItem* this = java_object_alloc(sizeof(ABTextItem), "ABTextItem");
    ABTextItem_init(this, label, layout, altText, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void ABTextItem_keyPressed(ABTextItem* this, int32_t keyCode) {
}


void ABTextItem_paintUnselected(ABTextItem* this, Graphics* graphics, int32_t x, int32_t y) {
}


ABStringComponent* ABTextItem_getLabelStringComponent(ABTextItem* this) {
        return (ABStringComponent_staticInit(), ABStringComponent_NULL_STRING_COMPONENT);
}


int32_t ABTextItem_getMinimumWidth(ABTextItem* this) {
        return ABCustomItem_getMinimumWidth((&this->base));
}


int32_t ABTextItem_getMinimumHeight(ABTextItem* this) {
        return ABCustomItem_getMinimumHeight((&this->base));
}


const char* ABTextItem_getLabel(ABTextItem* this) {
        return ABCustomItem_getLabel((&this->base));
}


void ABTextItem_paintXY(ABTextItem* this, Graphics* graphics, int32_t x, int32_t y) {
        ABCustomItem_paintXY((&this->base), graphics, x, y);
}

