// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/CanvasUtil.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/string/CommonPhoneStrings.h"





void CanvasUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CanvasUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CanvasUtil", nullptr);
}


void CanvasUtil_init(CanvasUtil* this) {
    CanvasUtil_register();
}

CanvasUtil* CanvasUtil_new(void) {
    CanvasUtil* this = java_object_alloc(sizeof(CanvasUtil), "CanvasUtil");
    CanvasUtil_init(this);
    return this;
}


const char* CanvasUtil_getKeyName(int32_t key) {
        CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
        if (key == (Canvas_staticInit(), Canvas_UP)) {
            return commonPhoneStrings->UP;
        } else if (key == (Canvas_staticInit(), Canvas_DOWN)) {
            return commonPhoneStrings->DOWN;
        } else if (key == (Canvas_staticInit(), Canvas_RIGHT)) {
            return commonPhoneStrings->RIGHT;
        } else if (key == (Canvas_staticInit(), Canvas_LEFT)) {
            return commonPhoneStrings->LEFT;
        } else if (key == (Canvas_staticInit(), Canvas_FIRE)) {
            return commonPhoneStrings->FIRE;
        }
        return "UNKNOWN KEY";
}

