// Generated Code Do Not Modify
#include "org/allbinary/graphics/draw/KeyValueDrawString.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/draw/Font.h")
#include "org/allbinary/graphics/draw/Font.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("org/allbinary/graphics/font/Font.h")
#include "org/allbinary/graphics/font/Font.h"
#endif
#if __has_include("org/allbinary/graphics/font/Font.h")
#include "org/allbinary/graphics/font/Font.h"
#endif
#if __has_include("org/allbinary/graphics/font/Font.h")
#include "org/allbinary/graphics/font/Font.h"
#endif
#if __has_include("org/allbinary/logic/string/Font.h")
#include "org/allbinary/logic/string/Font.h"
#endif







void KeyValueDrawString_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void KeyValueDrawString_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeyValueDrawString", nullptr);
    java_register_method("KeyValueDrawString", "updateMeasurement", (void*) KeyValueDrawString_updateMeasurement);
    java_register_method("KeyValueDrawString", "paint", (void*) KeyValueDrawString_paint);
    java_register_method("KeyValueDrawString", "update", (void*) KeyValueDrawString_update);
}

static void KeyValueDrawString_initFields(KeyValueDrawString* this) {
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    
    
    this->valueX = 0;
    this->value = StringUtil_getInstance()->EMPTY_STRING;
}


void KeyValueDrawString_init(KeyValueDrawString* this, const char* label, int32_t x) {
    KeyValueDrawString_register();
    KeyValueDrawString_initFields(this);
        this->LABEL = label;
        this->labelX = x;
}

KeyValueDrawString* KeyValueDrawString_new(const char* label, int32_t x) {
    KeyValueDrawString* this = java_object_alloc(sizeof(KeyValueDrawString), "KeyValueDrawString");
    KeyValueDrawString_init(this, label, x);
    return this;
}


void KeyValueDrawString_updateMeasurement(KeyValueDrawString* this, Graphics* graphics) {
        int32_t labelWidth = Font_stringWidth(Graphics_getFont(graphics), this->LABEL) - ((int32_t) strlen(this->LABEL));
        this->valueX = labelWidth + this->labelX;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void KeyValueDrawString_paint(KeyValueDrawString* this, Graphics* graphics, int32_t y) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_drawString(graphics, this->LABEL, this->labelX, y, 0);
        Graphics_drawString(graphics, this->value, this->valueX, y, 0);
}


void KeyValueDrawString_update(KeyValueDrawString* this, const char* value) {
        this->value = value;
}

