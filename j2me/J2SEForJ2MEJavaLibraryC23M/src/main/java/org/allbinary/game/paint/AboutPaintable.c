// Generated Code Do Not Modify
#include "org/allbinary/game/paint/AboutPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif








void AboutPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AboutPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AboutPaintable", "Paintable");
    java_register_method("AboutPaintable", "updateMeasurement", (void*) AboutPaintable_updateMeasurement);
    java_register_method("AboutPaintable", "getPaintableArrayInstance", (void*) AboutPaintable_getPaintableArrayInstance);
    java_register_method("AboutPaintable", "paint", (void*) AboutPaintable_paint);
}

static void AboutPaintable_initFields(AboutPaintable* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->ABOUT = CanvasStrings_getInstance()->ABOUT;
    
    
    this->paintableArray = ((Paintable**) java_array_from(sizeof(Paintable*), sizeof((Paintable*[]){ this }) / sizeof(Paintable*), (Paintable*[]){ this }));
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->charHeight = 0;
    this->aboutBeginWidth = 0;
    
    
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


AboutPaintable* AboutPaintable_getInstance(const char** info, const char** developers) {
        return AboutPaintable_new(info, developers);
}


void AboutPaintable_init(AboutPaintable* this, const char** info, const char** developers) {
    AboutPaintable_register();
    Paintable_init(&this->base);
    AboutPaintable_initFields(this);
        this->info = info;
        this->infoBeginWidth = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->info)));
        this->developers = developers;
        this->developersBeginWidth = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->developers)));
}

AboutPaintable* AboutPaintable_new(const char** info, const char** developers) {
    AboutPaintable* this = java_object_alloc(sizeof(AboutPaintable), "AboutPaintable");
    AboutPaintable_init(this, info, developers);
    return this;
}


void AboutPaintable_updateMeasurement(AboutPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->charHeight = Font_getHeight(font);
        this->aboutBeginWidth = (Font_stringWidth(font, this->ABOUT) >> 1);
        int32_t infoSize = java_array_length(this->info);
        for (int32_t index = 0; index < infoSize; index++) {
            this->infoBeginWidth[index] = (Font_stringWidth(font, this->info[index]) >> 1);
        }
        int32_t size = java_array_length(this->developers);
        for (int32_t index = 0; index < size; index++) {
            this->developersBeginWidth[index] = (Font_stringWidth(font, this->developers[index]) >> 1);
        }
        this->myFontProcessor = MyFontProcessor_getInstance();
}


Paintable** AboutPaintable_getPaintableArrayInstance(AboutPaintable* this) {
        return this->paintableArray;
}


void AboutPaintable_paint(AboutPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t halfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton);
        Graphics_drawString(graphics, this->ABOUT, halfWidth - this->aboutBeginWidth, 2 * this->charHeight, this->anchor);
        int32_t infoSize = java_array_length(this->info);
        for (int32_t index = 0; index < infoSize; index++) {
            Graphics_drawString(graphics, this->info[index], halfWidth - this->infoBeginWidth[index], (4 + index) * this->charHeight, this->anchor);
        }
        int32_t size = java_array_length(this->developers);
        for (int32_t index = 0; index < size; index++) {
            Graphics_drawString(graphics, this->developers[index], halfWidth - this->developersBeginWidth[index], (5 + infoSize + index) * this->charHeight, this->anchor);
        }
}

