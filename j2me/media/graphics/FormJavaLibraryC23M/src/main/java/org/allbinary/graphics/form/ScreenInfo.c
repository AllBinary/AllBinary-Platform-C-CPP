// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScreenInfo.h"


static ScreenInfo* ScreenInfo_instance;


void ScreenInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScreenInfo_instance = ScreenInfo_new();
}

void ScreenInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenInfo", nullptr);
}

static void ScreenInfo_initFields(ScreenInfo* this) {
    this->SMALL_WIDTH = 320;
    this->SMALL_HEIGHT = 240;
    this->MEDIUM_WIDTH = 800;
    this->MEDIUM_HEIGHT = 600;
}

void ScreenInfo_init(ScreenInfo* this) {
    ScreenInfo_register();
    ScreenInfo_initFields(this);
}

ScreenInfo* ScreenInfo_new(void) {
    ScreenInfo* this = java_object_alloc(sizeof(ScreenInfo), "ScreenInfo");
    ScreenInfo_init(this);
    return this;
}


ScreenInfo* ScreenInfo_getInstance(void) {
        return (ScreenInfo_staticInit(), ScreenInfo_instance);
}

