// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintUtil.h"
#include "javax/microedition/lcdui/Displayable.h"




void ScreenRepaintUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScreenRepaintUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenRepaintUtil", nullptr);
}

void ScreenRepaintUtil_init(ScreenRepaintUtil* this) {
    ScreenRepaintUtil_register();
}

ScreenRepaintUtil* ScreenRepaintUtil_new(void) {
    ScreenRepaintUtil* this = java_object_alloc(sizeof(ScreenRepaintUtil), "ScreenRepaintUtil");
    ScreenRepaintUtil_init(this);
    return this;
}


void ScreenRepaintUtil_repaint(Displayable* displayable) {
}

