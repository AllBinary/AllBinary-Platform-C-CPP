// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/TitleResource.h"


const char* TitleResource_RESOURCE_TITLE = "/title_sprite_100_by_100.png";

void TitleResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TitleResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TitleResource", nullptr);
}

void TitleResource_init(TitleResource* this) {
    TitleResource_register();
}

TitleResource* TitleResource_new(void) {
    TitleResource* this = java_object_alloc(sizeof(TitleResource), "TitleResource");
    TitleResource_init(this);
    return this;
}

