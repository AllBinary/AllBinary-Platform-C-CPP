// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/SelectableTextItem.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABTextItem.h"
#include "org/allbinary/graphics/form/item/ABStringComponent.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif






void SelectableTextItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SelectableTextItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SelectableTextItem", "ABTextItem");
    java_register_method("SelectableTextItem", "isFocusable", (void*) SelectableTextItem_isFocusable);
    java_register_method("SelectableTextItem", "paintXY", (void*) SelectableTextItem_paintXY);
}


void SelectableTextItem_init(SelectableTextItem* this, const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    SelectableTextItem_register();
        ABTextItem_init(&this->base, label, layout, altText, backgroundBasicColor, foregroundBasicColor);
}

SelectableTextItem* SelectableTextItem_new(const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    SelectableTextItem* this = java_object_alloc(sizeof(SelectableTextItem), "SelectableTextItem");
    SelectableTextItem_init(this, label, layout, altText, backgroundBasicColor, foregroundBasicColor);
    return this;
}


bool SelectableTextItem_isFocusable(SelectableTextItem* this) {
        return true;
}


void SelectableTextItem_paintXY(SelectableTextItem* this, Graphics* graphics, int32_t x, int32_t y) {
        MyFontProcessor_process(this->base.base.myFontProcessor, graphics);
        ABStringComponent* stringComponent = ABTextItem_getLabelStringComponent(this);
        if (stringComponent != nullptr) {
            Graphics_setColor(graphics, BasicColor_intValue(ABStringComponent_getForegroundBasicColor(stringComponent)));
        }
        Graphics_drawString(graphics, ABTextItem_getLabel(this), x + 2, y, 0);
}

