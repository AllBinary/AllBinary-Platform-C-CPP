// Generated Code Do Not Modify
#include "org/allbinary/graphics/font/FontDebugFactory.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"


static FontDebugFactory* FontDebugFactory_instance;



void FontDebugFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FontDebugFactory_instance = FontDebugFactory_new();
}

void FontDebugFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FontDebugFactory", nullptr);
    java_register_method("FontDebugFactory", "setFont", (void*) FontDebugFactory_setFont);
}

void FontDebugFactory_init(FontDebugFactory* this) {
    FontDebugFactory_register();
}

FontDebugFactory* FontDebugFactory_new(void) {
    FontDebugFactory* this = java_object_alloc(sizeof(FontDebugFactory), "FontDebugFactory");
    FontDebugFactory_init(this);
    return this;
}


FontDebugFactory* FontDebugFactory_getInstance(void) {
        return (FontDebugFactory_staticInit(), FontDebugFactory_instance);
}


void FontDebugFactory_setFont(FontDebugFactory* this, Font* font, Graphics* graphics) {
        Graphics_setFont(graphics, font);
}

