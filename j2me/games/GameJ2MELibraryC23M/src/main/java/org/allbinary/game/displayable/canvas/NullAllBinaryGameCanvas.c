// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/NullAllBinaryGameCanvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"


NullAllBinaryGameCanvas* NullAllBinaryGameCanvas_NULL_ALLBINARY_GAME_CANVAS;







void NullAllBinaryGameCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullAllBinaryGameCanvas_NULL_ALLBINARY_GAME_CANVAS = NullAllBinaryGameCanvas_new();
}

void NullAllBinaryGameCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullAllBinaryGameCanvas", nullptr);
    java_register_method("NullAllBinaryGameCanvas", "getLayerManager", (void*) NullAllBinaryGameCanvas_getLayerManager);
    java_register_method("NullAllBinaryGameCanvas", "addCommand", (void*) NullAllBinaryGameCanvas_addCommand);
    java_register_method("NullAllBinaryGameCanvas", "getHeight", (void*) NullAllBinaryGameCanvas_getHeight);
    java_register_method("NullAllBinaryGameCanvas", "getWidth", (void*) NullAllBinaryGameCanvas_getWidth);
    java_register_method("NullAllBinaryGameCanvas", "removeCommand", (void*) NullAllBinaryGameCanvas_removeCommand);
    java_register_method("NullAllBinaryGameCanvas", "setCommandListener", (void*) NullAllBinaryGameCanvas_setCommandListener);
}

void NullAllBinaryGameCanvas_init(NullAllBinaryGameCanvas* this) {
    NullAllBinaryGameCanvas_register();
}

NullAllBinaryGameCanvas* NullAllBinaryGameCanvas_new(void) {
    NullAllBinaryGameCanvas* this = java_object_alloc(sizeof(NullAllBinaryGameCanvas), "NullAllBinaryGameCanvas");
    NullAllBinaryGameCanvas_init(this);
    return this;
}


AllBinaryGameLayerManager* NullAllBinaryGameCanvas_getLayerManager(NullAllBinaryGameCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullAllBinaryGameCanvas_addCommand(NullAllBinaryGameCanvas* this, Command* cmd) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullAllBinaryGameCanvas_getHeight(NullAllBinaryGameCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullAllBinaryGameCanvas_getWidth(NullAllBinaryGameCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullAllBinaryGameCanvas_removeCommand(NullAllBinaryGameCanvas* this, Command* cmd) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullAllBinaryGameCanvas_setCommandListener(NullAllBinaryGameCanvas* this, CommandListener* l) {
        java_throw(java_exception_new("RuntimeException", ""));
}

