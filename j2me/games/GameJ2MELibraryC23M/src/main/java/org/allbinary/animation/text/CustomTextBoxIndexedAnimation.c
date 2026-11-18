// Generated Code Do Not Modify
#include "org/allbinary/animation/text/CustomTextBoxIndexedAnimation.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/animation/text/TextInterface.h"
#include "org/allbinary/animation/text/TextChangeListener.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/animation/text/ABTextFieldItem.h")
#include "org/allbinary/animation/text/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/input/event/ABTextFieldItem.h")
#include "org/allbinary/game/input/event/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/font/ABTextFieldItem.h")
#include "org/allbinary/graphics/font/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/string/ABTextFieldItem.h")
#include "org/allbinary/logic/string/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/text/ABTextFieldItem.h")
#include "org/allbinary/animation/text/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/input/event/ABTextFieldItem.h")
#include "org/allbinary/game/input/event/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/font/ABTextFieldItem.h")
#include "org/allbinary/graphics/font/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/string/ABTextFieldItem.h")
#include "org/allbinary/logic/string/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/text/ABTextFieldItem.h")
#include "org/allbinary/animation/text/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/input/event/ABTextFieldItem.h")
#include "org/allbinary/game/input/event/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/font/ABTextFieldItem.h")
#include "org/allbinary/graphics/font/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/string/ABTextFieldItem.h")
#include "org/allbinary/logic/string/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/text/ABTextFieldItem.h")
#include "org/allbinary/animation/text/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/input/event/ABTextFieldItem.h")
#include "org/allbinary/game/input/event/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/font/ABTextFieldItem.h")
#include "org/allbinary/graphics/font/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/string/ABTextFieldItem.h")
#include "org/allbinary/logic/string/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/text/ABTextFieldItem.h")
#include "org/allbinary/animation/text/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/animation/ABTextFieldItem.h")
#include "org/allbinary/animation/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/input/event/ABTextFieldItem.h")
#include "org/allbinary/game/input/event/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/font/ABTextFieldItem.h")
#include "org/allbinary/graphics/font/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/string/ABTextFieldItem.h")
#include "org/allbinary/logic/string/ABTextFieldItem.h"
#endif















void CustomTextBoxIndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomTextBoxIndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomTextBoxIndexedAnimation", "IndexedAnimation");
    java_register_method("CustomTextBoxIndexedAnimation", "setBasicColorP", (void*) CustomTextBoxIndexedAnimation_setBasicColorP);
    java_register_method("CustomTextBoxIndexedAnimation", "setBackgroundBasicColorP", (void*) CustomTextBoxIndexedAnimation_setBackgroundBasicColorP);
    java_register_method("CustomTextBoxIndexedAnimation", "setTextWithOnMeasure", (void*) CustomTextBoxIndexedAnimation_setTextWithOnMeasure);
    java_register_method("CustomTextBoxIndexedAnimation", "updateMeasurement", (void*) CustomTextBoxIndexedAnimation_updateMeasurement);
    java_register_method("CustomTextBoxIndexedAnimation", "setText", (void*) CustomTextBoxIndexedAnimation_setText);
    java_register_method("CustomTextBoxIndexedAnimation", "getText", (void*) CustomTextBoxIndexedAnimation_getText);
    java_register_method("CustomTextBoxIndexedAnimation", "onEventRaw", (void*) CustomTextBoxIndexedAnimation_onEventRaw);
    java_register_method("CustomTextBoxIndexedAnimation", "getFontHeight", (void*) CustomTextBoxIndexedAnimation_getFontHeight);
    java_register_method("CustomTextBoxIndexedAnimation", "paintXY", (void*) CustomTextBoxIndexedAnimation_paintXY);
    java_register_method("CustomTextBoxIndexedAnimation", "paintThreedXYZ", (void*) CustomTextBoxIndexedAnimation_paintThreedXYZ);
    java_register_method("CustomTextBoxIndexedAnimation", "getWidth", (void*) CustomTextBoxIndexedAnimation_getWidth);
}

static void CustomTextBoxIndexedAnimation_initFields(CustomTextBoxIndexedAnimation* this) {
    
    this->lastText = StringUtil_getInstance()->INIT_STRING;
    this->hasChanged = true;
    this->textChangeListener = TextChangeListener_getInstance();
}


void CustomTextBoxIndexedAnimation_init(CustomTextBoxIndexedAnimation* this, CustomTextBox* customTextBox) {
    CustomTextBoxIndexedAnimation_register();
        IndexedAnimation_init(&this->base, AnimationBehavior_getInstance());
        CustomTextBoxIndexedAnimation_initFields(this);
        this->customTextBox = customTextBox;
}

CustomTextBoxIndexedAnimation* CustomTextBoxIndexedAnimation_new(CustomTextBox* customTextBox) {
    CustomTextBoxIndexedAnimation* this = java_object_alloc(sizeof(CustomTextBoxIndexedAnimation), "CustomTextBoxIndexedAnimation");
    CustomTextBoxIndexedAnimation_init(this, customTextBox);
    return this;
}


void CustomTextBoxIndexedAnimation_setBasicColorP(CustomTextBoxIndexedAnimation* this, BasicColor* basicColor) {
        ABTextFieldItem_setForegroundBasicColorP(CustomTextBox_getTextFieldItem(this->customTextBox), basicColor);
}


void CustomTextBoxIndexedAnimation_setBackgroundBasicColorP(CustomTextBoxIndexedAnimation* this, BasicColor* basicColor) {
        ABTextFieldItem_setBackgroundBasicColorP(CustomTextBox_getTextFieldItem(this->customTextBox), basicColor);
}


void CustomTextBoxIndexedAnimation_setTextWithOnMeasure(CustomTextBoxIndexedAnimation* this, const char* text, TextChangeListener* textChangeListener) {
        CustomTextBoxIndexedAnimation_setText(this, text);
        this->textChangeListener = textChangeListener;
}


void CustomTextBoxIndexedAnimation_updateMeasurement(CustomTextBoxIndexedAnimation* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        TextChangeListener_onMeasure(this->textChangeListener);
        this->textChangeListener = TextChangeListener_getInstance();
}


void CustomTextBoxIndexedAnimation_setText(CustomTextBoxIndexedAnimation* this, const char* text) {
        if (this->lastText != text) {
            this->hasChanged = true;
            this->lastText = text;
            ABTextFieldItem_setString(CustomTextBox_getTextFieldItem(this->customTextBox), text);
        }
}


const char* CustomTextBoxIndexedAnimation_getText(CustomTextBoxIndexedAnimation* this) {
        return ABTextFieldItem_getString(CustomTextBox_getTextFieldItem(this->customTextBox));
}


void CustomTextBoxIndexedAnimation_onEventRaw(CustomTextBoxIndexedAnimation* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        CustomTextBox_onEventRaw(this->customTextBox, keyCode, deviceId, repeated);
}


int32_t CustomTextBoxIndexedAnimation_getFontHeight(CustomTextBoxIndexedAnimation* this) {
        return ABTextFieldItem_getFontHeight(CustomTextBox_getTextFieldItem(this->customTextBox));
}


void CustomTextBoxIndexedAnimation_paintXY(CustomTextBoxIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        CustomTextBox_paintXY(this->customTextBox, graphics, x, y);
}


void CustomTextBoxIndexedAnimation_paintThreedXYZ(CustomTextBoxIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
}


int32_t CustomTextBoxIndexedAnimation_getWidth(CustomTextBoxIndexedAnimation* this) {
        return IndexedAnimation_getWidth((&this->base));
}

