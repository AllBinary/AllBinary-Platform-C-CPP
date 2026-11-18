// Generated Code Do Not Modify
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif







void HelpPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HelpPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HelpPaintable", "Paintable");
    java_register_method("HelpPaintable", "updateMeasurement", (void*) HelpPaintable_updateMeasurement);
    java_register_method("HelpPaintable", "setInputInfoP", (void*) HelpPaintable_setInputInfoP);
    java_register_method("HelpPaintable", "paint", (void*) HelpPaintable_paint);
}

static void HelpPaintable_initFields(HelpPaintable* this) {
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    
    this->inputInfo = StringUtil_getArrayInstance(StringUtil_getInstance());
    
    this->titleBeginWidth = 0;
    this->beginWidthArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->charHeight = 0;
}


void HelpPaintable_init(HelpPaintable* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* basicColor) {
    HelpPaintable_register();
    Paintable_init(&this->base);
    HelpPaintable_initFields(this);
        this->title = title;
        this->basicColor = basicColor;
}

HelpPaintable* HelpPaintable_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* basicColor) {
    HelpPaintable* this = java_object_alloc(sizeof(HelpPaintable), "HelpPaintable");
    HelpPaintable_init(this, title, backgroundBasicColor, basicColor);
    return this;
}


void HelpPaintable_updateMeasurement(HelpPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->titleBeginWidth = (Font_stringWidth(font, this->title) >> 1);
        this->charHeight = Font_getHeight(font);
        int32_t size = java_array_length(this->inputInfo);
        for (int32_t index = 0; index < size; index++) {
            this->beginWidthArray[index] = (Font_stringWidth(font, this->inputInfo[index]) >> 1);
        }
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void HelpPaintable_setInputInfoP(HelpPaintable* this, const char** inputInfo) {
        this->inputInfo = inputInfo;
        this->beginWidthArray = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->inputInfo)));
        this->myFontProcessor = this->updateMyFontProcessor;
}


void HelpPaintable_paint(HelpPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t halfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfo);
        Graphics_setColor(graphics, BasicColor_intValue(this->basicColor));
        Graphics_drawString(graphics, this->title, halfWidth - this->titleBeginWidth, this->charHeight, this->anchor);
        int32_t size = java_array_length(this->inputInfo);
        for (int32_t index = 0; index < size; index++) {
            Graphics_drawString(graphics, this->inputInfo[index], halfWidth - this->beginWidthArray[index], (index + 3) * this->charHeight, this->anchor);
        }
}

