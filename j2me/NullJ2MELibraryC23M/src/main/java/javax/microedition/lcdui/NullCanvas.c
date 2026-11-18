// Generated Code Do Not Modify
#include "javax/microedition/lcdui/NullCanvas.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"


NullCanvas* NullCanvas_NULL_CANVAS;






















void NullCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullCanvas_NULL_CANVAS = NullCanvas_new();
}

void NullCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullCanvas", "Canvas");
    java_register_method("NullCanvas", "setFullScreenMode", (void*) NullCanvas_setFullScreenMode);
    java_register_method("NullCanvas", "sizeChanged", (void*) NullCanvas_sizeChanged);
    java_register_method("NullCanvas", "getCommandStack", (void*) NullCanvas_getCommandStack);
    java_register_method("NullCanvas", "isCommand", (void*) NullCanvas_isCommand);
    java_register_method("NullCanvas", "addCommand", (void*) NullCanvas_addCommand);
    java_register_method("NullCanvas", "removeCommand", (void*) NullCanvas_removeCommand);
    java_register_method("NullCanvas", "removeAllCommands", (void*) NullCanvas_removeAllCommands);
    java_register_method("NullCanvas", "setCommandListener", (void*) NullCanvas_setCommandListener);
    java_register_method("NullCanvas", "getCustomCommandListener", (void*) NullCanvas_getCustomCommandListener);
    java_register_method("NullCanvas", "isPaused", (void*) NullCanvas_isPaused);
    java_register_method("NullCanvas", "removePauseCommand", (void*) NullCanvas_removePauseCommand);
    java_register_method("NullCanvas", "pause", (void*) NullCanvas_pause);
    java_register_method("NullCanvas", "unPause", (void*) NullCanvas_unPause);
    java_register_method("NullCanvas", "process", (void*) NullCanvas_process);
    java_register_method("NullCanvas", "paint", (void*) NullCanvas_paint);
    java_register_method("NullCanvas", "destroy", (void*) NullCanvas_destroy);
    java_register_method("NullCanvas", "setPaused", (void*) NullCanvas_setPaused);
    java_register_method("NullCanvas", "pointerDragged", (void*) NullCanvas_pointerDragged);
    java_register_method("NullCanvas", "pointerPressed", (void*) NullCanvas_pointerPressed);
    java_register_method("NullCanvas", "pointerReleased", (void*) NullCanvas_pointerReleased);
}


void NullCanvas_init(NullCanvas* this) {
    NullCanvas_register();
    Canvas_init(&this->base);
}

NullCanvas* NullCanvas_new(void) {
    NullCanvas* this = java_object_alloc(sizeof(NullCanvas), "NullCanvas");
    NullCanvas_init(this);
    return this;
}


void NullCanvas_setFullScreenMode(NullCanvas* this, bool mode) {
}


void NullCanvas_sizeChanged(NullCanvas* this, int32_t w, int32_t h) {
}


Stack* NullCanvas_getCommandStack(NullCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullCanvas_isCommand(NullCanvas* this, Command* command) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullCanvas_addCommand(NullCanvas* this, Command* command) {
}


void NullCanvas_removeCommand(NullCanvas* this, Command* command) {
}


void NullCanvas_removeAllCommands(NullCanvas* this) {
}


void NullCanvas_setCommandListener(NullCanvas* this, CommandListener* l) {
}


CommandListener* NullCanvas_getCustomCommandListener(NullCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullCanvas_isPaused(NullCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullCanvas_removePauseCommand(NullCanvas* this) {
}


void NullCanvas_pause(NullCanvas* this) {
}


void NullCanvas_unPause(NullCanvas* this) {
}


// throws Exception
void NullCanvas_process(NullCanvas* this) {
}


void NullCanvas_paint(NullCanvas* this, Graphics* graphics) {
}


void NullCanvas_destroy(NullCanvas* this) {
}


void NullCanvas_setPaused(NullCanvas* this, bool isPaused) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullCanvas_pointerDragged(NullCanvas* this, int32_t x, int32_t y) {
}


void NullCanvas_pointerPressed(NullCanvas* this, int32_t x, int32_t y) {
}


void NullCanvas_pointerReleased(NullCanvas* this, int32_t x, int32_t y) {
}

