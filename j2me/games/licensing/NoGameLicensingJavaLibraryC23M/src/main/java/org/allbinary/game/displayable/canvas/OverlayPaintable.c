// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/OverlayPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"






void OverlayPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OverlayPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OverlayPaintable", "InitUpdatePaintable");
    java_register_method("OverlayPaintable", "update", (void*) OverlayPaintable_update);
    java_register_method("OverlayPaintable", "paint", (void*) OverlayPaintable_paint);
}

static void OverlayPaintable_initFields(OverlayPaintable* this) {
    this->logUtil = LogUtil_getInstance();
}


void OverlayPaintable_init(OverlayPaintable* this) {
    OverlayPaintable_register();
    InitUpdatePaintable_init(&this->base);
    OverlayPaintable_initFields(this);
}

OverlayPaintable* OverlayPaintable_new(void) {
    OverlayPaintable* this = java_object_alloc(sizeof(OverlayPaintable), "OverlayPaintable");
    OverlayPaintable_init(this);
    return this;
}


void OverlayPaintable_update(OverlayPaintable* this) {
        JAVA_TRY {
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


void OverlayPaintable_paint(OverlayPaintable* this, Graphics* graphics) {
}

