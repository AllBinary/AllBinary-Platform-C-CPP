// Generated Code Do Not Modify
#include "org/allbinary/graphics/draw/CanvasDrawLineString.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/draw/DrawStringUtil.h"


CanvasDrawLineString* CanvasDrawLineString_NULL_CANVAS_DRAW_LINE_STRING;




void CanvasDrawLineString_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CanvasDrawLineString_NULL_CANVAS_DRAW_LINE_STRING = CanvasDrawLineString_new(0, 0);
}

void CanvasDrawLineString_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CanvasDrawLineString", nullptr);
    java_register_method("CanvasDrawLineString", "updateMeasurement", (void*) CanvasDrawLineString_updateMeasurement);
    java_register_method("CanvasDrawLineString", "paint", (void*) CanvasDrawLineString_paint);
}

static void CanvasDrawLineString_initFields(CanvasDrawLineString* this) {
    this->drawStringUtil = DrawStringUtil_getInstance();
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    
    
    this->fontHeight = 0;
}


void CanvasDrawLineString_init(CanvasDrawLineString* this, int32_t x, int32_t y) {
    CanvasDrawLineString_register();
    CanvasDrawLineString_initFields(this);
        this->x = x;
        this->y = y;
}

CanvasDrawLineString* CanvasDrawLineString_new(int32_t x, int32_t y) {
    CanvasDrawLineString* this = java_object_alloc(sizeof(CanvasDrawLineString), "CanvasDrawLineString");
    CanvasDrawLineString_init(this, x, y);
    return this;
}


void CanvasDrawLineString_updateMeasurement(CanvasDrawLineString* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void CanvasDrawLineString_paint(CanvasDrawLineString* this, Graphics* graphics, const char* string, int32_t line) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        DrawStringUtil_drawCenterString(this->drawStringUtil, graphics, string, 0, ((int32_t) strlen(string)), this->x, this->y + (line * this->fontHeight));
}

