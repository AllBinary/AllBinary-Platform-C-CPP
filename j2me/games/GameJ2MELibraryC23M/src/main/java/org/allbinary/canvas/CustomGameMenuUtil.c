// Generated Code Do Not Modify
#include "org/allbinary/canvas/CustomGameMenuUtil.h"
#include "org/allbinary/AppletUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"




void CustomGameMenuUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomGameMenuUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomGameMenuUtil", nullptr);
}

void CustomGameMenuUtil_init(CustomGameMenuUtil* this) {
    CustomGameMenuUtil_register();
}

CustomGameMenuUtil* CustomGameMenuUtil_new(void) {
    CustomGameMenuUtil* this = java_object_alloc(sizeof(CustomGameMenuUtil), "CustomGameMenuUtil");
    CustomGameMenuUtil_init(this);
    return this;
}


void CustomGameMenuUtil_add(MyCanvas* canvas) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        if (AppletUtil_isAppletLoader(canvas)) {
        } else if (J2MEUtil_isHTML()) {
        } else {
            MyCanvas_addCommand(canvas, gameCommandsFactory->EXIT_COMMAND);
        }
}

