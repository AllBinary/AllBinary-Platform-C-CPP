// Generated Code Do Not Modify
#include "org/allbinary/animation/caption/CaptionResources.h"


const char* CaptionResources_RESOURCE = "/character_message_bubbled_box.png";

void CaptionResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CaptionResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CaptionResources", nullptr);
}

void CaptionResources_init(CaptionResources* this) {
    CaptionResources_register();
}

CaptionResources* CaptionResources_new(void) {
    CaptionResources* this = java_object_alloc(sizeof(CaptionResources), "CaptionResources");
    CaptionResources_init(this);
    return this;
}

