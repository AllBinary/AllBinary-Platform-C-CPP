// Generated Code Do Not Modify
#include "org/allbinary/graphics/draw/KeyValueDrawCharArray.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/logic/java/character/CharArrayFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#if __has_include("org/allbinary/logic/java/character/CharArrayFactory.h")
#include "org/allbinary/logic/java/character/CharArrayFactory.h"
#endif
#if __has_include("org/allbinary/graphics/draw/Font.h")
#include "org/allbinary/graphics/draw/Font.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("org/allbinary/logic/java/character/Font.h")
#include "org/allbinary/logic/java/character/Font.h"
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







void KeyValueDrawCharArray_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void KeyValueDrawCharArray_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeyValueDrawCharArray", nullptr);
    java_register_method("KeyValueDrawCharArray", "updateMeasurement", (void*) KeyValueDrawCharArray_updateMeasurement);
    java_register_method("KeyValueDrawCharArray", "paint", (void*) KeyValueDrawCharArray_paint);
    java_register_method("KeyValueDrawCharArray", "update", (void*) KeyValueDrawCharArray_update);
}

static void KeyValueDrawCharArray_initFields(KeyValueDrawCharArray* this) {
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    
    
    this->valueX = 0;
    this->value = CharArrayFactory_getZeroCharArray(CharArrayFactory_getInstance());
    this->len = 0;
}


void KeyValueDrawCharArray_init(KeyValueDrawCharArray* this, const char* label, int32_t x) {
    KeyValueDrawCharArray_register();
    KeyValueDrawCharArray_initFields(this);
        this->LABEL = label;
        this->labelX = x;
}

KeyValueDrawCharArray* KeyValueDrawCharArray_new(const char* label, int32_t x) {
    KeyValueDrawCharArray* this = java_object_alloc(sizeof(KeyValueDrawCharArray), "KeyValueDrawCharArray");
    KeyValueDrawCharArray_init(this, label, x);
    return this;
}


void KeyValueDrawCharArray_updateMeasurement(KeyValueDrawCharArray* this, Graphics* graphics) {
        int32_t labelWidth = Font_stringWidth(Graphics_getFont(graphics), this->LABEL) - ((int32_t) strlen(this->LABEL));
        this->valueX = labelWidth + this->labelX;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void KeyValueDrawCharArray_paint(KeyValueDrawCharArray* this, Graphics* graphics, int32_t y) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_drawString(graphics, this->LABEL, this->labelX, y, 0);
        Graphics_drawChars(graphics, this->value, 0, this->len, this->valueX, y, 0);
}


void KeyValueDrawCharArray_update(KeyValueDrawCharArray* this, uint16_t* value, int32_t len) {
        this->value = value;
        this->len = len;
}

