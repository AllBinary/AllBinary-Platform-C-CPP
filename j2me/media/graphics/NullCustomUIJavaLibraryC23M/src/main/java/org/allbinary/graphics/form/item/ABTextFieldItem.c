// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Font.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/graphics/form/item/ABTextItem.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif












void ABTextFieldItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABTextFieldItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABTextFieldItem", "ABTextItem");
    java_register_method("ABTextFieldItem", "getLabel", (void*) ABTextFieldItem_getLabel);
    java_register_method("ABTextFieldItem", "setLabel", (void*) ABTextFieldItem_setLabel);
    java_register_method("ABTextFieldItem", "getString", (void*) ABTextFieldItem_getString);
    java_register_method("ABTextFieldItem", "setString", (void*) ABTextFieldItem_setString);
    java_register_method("ABTextFieldItem", "setFocus", (void*) ABTextFieldItem_setFocus);
    java_register_method("ABTextFieldItem", "getFontHeight", (void*) ABTextFieldItem_getFontHeight);
    java_register_method("ABTextFieldItem", "setBackgroundBasicColorP", (void*) ABTextFieldItem_setBackgroundBasicColorP);
    java_register_method("ABTextFieldItem", "setForegroundBasicColorP", (void*) ABTextFieldItem_setForegroundBasicColorP);
}

static void ABTextFieldItem_initFields(ABTextFieldItem* this) {
    
}


void ABTextFieldItem_init(ABTextFieldItem* this, Canvas* canvas, Visitor* visitor, const char* label, const char* value, int32_t maxSize, int32_t layout, const char* altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABTextFieldItem_register();
        ABTextItem_init(&this->base, label, layout, altText, backgroundBasicColor, foregroundBasicColor);
        ABTextFieldItem_initFields(this);
        this->font = font;
}

ABTextFieldItem* ABTextFieldItem_new(Canvas* canvas, Visitor* visitor, const char* label, const char* value, int32_t maxSize, int32_t layout, const char* altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABTextFieldItem* this = java_object_alloc(sizeof(ABTextFieldItem), "ABTextFieldItem");
    ABTextFieldItem_init(this, canvas, visitor, label, value, maxSize, layout, altText, font, backgroundBasicColor, foregroundBasicColor);
    return this;
}


const char* ABTextFieldItem_getLabel(ABTextFieldItem* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


void ABTextFieldItem_setLabel(ABTextFieldItem* this, const char* label) {
}


const char* ABTextFieldItem_getString(ABTextFieldItem* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


void ABTextFieldItem_setString(ABTextFieldItem* this, const char* string) {
}


void ABTextFieldItem_setFocus(ABTextFieldItem* this, bool state) {
}


int32_t ABTextFieldItem_getFontHeight(ABTextFieldItem* this) {
        return Font_getHeight(this->font);
}


void ABTextFieldItem_setBackgroundBasicColorP(ABTextFieldItem* this, BasicColor* basicColor) {
}


void ABTextFieldItem_setForegroundBasicColorP(ABTextFieldItem* this, BasicColor* basicColor) {
}

