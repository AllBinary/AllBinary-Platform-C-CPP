// Generated Code Do Not Modify
#include "org/allbinary/animation/text/CustomTextBox2.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Font.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#if __has_include("org/allbinary/animation/text/ABTextFieldItem.h")
#include "org/allbinary/animation/text/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif




void CustomTextBox2_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomTextBox2_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomTextBox2", "CustomTextBox");
}


void CustomTextBox2_init(CustomTextBox2* this, CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomTextBox2_register();
        CustomTextBox_init(&this->base, cmdListener, label, text, maxSize, constraints, font, backgroundBasicColor, foregroundBasicColor);
        ABTextFieldItem_setFocus(CustomTextBox_getTextFieldItem(this), true);
}

CustomTextBox2* CustomTextBox2_new(CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomTextBox2* this = java_object_alloc(sizeof(CustomTextBox2), "CustomTextBox2");
    CustomTextBox2_init(this, cmdListener, label, text, maxSize, constraints, font, backgroundBasicColor, foregroundBasicColor);
    return this;
}

