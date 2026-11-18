// Generated Code Do Not Modify
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"


static MyFontProcessor* MyFontProcessor_instance;





void MyFontProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MyFontProcessor_instance = MyFontProcessor_new();
}

void MyFontProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MyFontProcessor", nullptr);
    java_register_method("MyFontProcessor", "process", (void*) MyFontProcessor_process);
}

void MyFontProcessor_init(MyFontProcessor* this) {
    MyFontProcessor_register();
}

MyFontProcessor* MyFontProcessor_new(void) {
    MyFontProcessor* this = java_object_alloc(sizeof(MyFontProcessor), "MyFontProcessor");
    MyFontProcessor_init(this);
    return this;
}


int32_t MyFontProcessor_defaultCharWidth(Font* font) {
        return Font_charWidth(font, u'C');
}


int32_t MyFontProcessor_defaultStringWidth(Font* font, int32_t size) {
        return MyFontProcessor_defaultCharWidth(font) * size;
}


MyFontProcessor* MyFontProcessor_getInstance(void) {
        return (MyFontProcessor_staticInit(), MyFontProcessor_instance);
}


void MyFontProcessor_process(MyFontProcessor* this, Graphics* graphics) {
}

