// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/SimpleTextPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif







static BasicColor* SimpleTextPaintable_getBasicColorP(SimpleTextPaintable* this);



void SimpleTextPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimpleTextPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimpleTextPaintable", "Paintable");
    java_register_method("SimpleTextPaintable", "updateMeasurement", (void*) SimpleTextPaintable_updateMeasurement);
    java_register_method("SimpleTextPaintable", "paint", (void*) SimpleTextPaintable_paint);
    java_register_method("SimpleTextPaintable", "setBasicColorP", (void*) SimpleTextPaintable_setBasicColorP);
    java_register_method("SimpleTextPaintable", "getBasicColorP", (void*) SimpleTextPaintable_getBasicColorP);
    java_register_method("SimpleTextPaintable", "setText", (void*) SimpleTextPaintable_setText);
    java_register_method("SimpleTextPaintable", "getText", (void*) SimpleTextPaintable_getText);
}

static void SimpleTextPaintable_initFields(SimpleTextPaintable* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    
    
    this->topScoresWidth = 0;
    this->fontHeight = 0;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void SimpleTextPaintable_init(SimpleTextPaintable* this, const char* text, BasicColor* basicColor) {
    SimpleTextPaintable_register();
    Paintable_init(&this->base);
    SimpleTextPaintable_initFields(this);
        this->text = text;
        this->basicColor = basicColor;
}

SimpleTextPaintable* SimpleTextPaintable_new(const char* text, BasicColor* basicColor) {
    SimpleTextPaintable* this = java_object_alloc(sizeof(SimpleTextPaintable), "SimpleTextPaintable");
    SimpleTextPaintable_init(this, text, basicColor);
    return this;
}


void SimpleTextPaintable_updateMeasurement(SimpleTextPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->topScoresWidth = (Font_stringWidth(font, this->text) >> 1);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void SimpleTextPaintable_paint(SimpleTextPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t width = DisplayInfoSingleton_getLast(this->displayInfoSingleton)[this->displayInfoSingleton->WIDTH];
        Graphics_setColor(graphics, BasicColor_intValue(SimpleTextPaintable_getBasicColorP(this)));
        Graphics_drawString(graphics, this->text, (width >> 1) - this->topScoresWidth, this->fontHeight, this->anchor);
}


void SimpleTextPaintable_setBasicColorP(SimpleTextPaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


static BasicColor* SimpleTextPaintable_getBasicColorP(SimpleTextPaintable* this) {
        return this->basicColor;
}


void SimpleTextPaintable_setText(SimpleTextPaintable* this, const char* text) {
        this->text = text;
        this->myFontProcessor = this->updateMyFontProcessor;
}


const char* SimpleTextPaintable_getText(SimpleTextPaintable* this) {
        return this->text;
}

