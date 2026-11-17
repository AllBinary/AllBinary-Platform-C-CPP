// Generated Code Do Not Modify
// package javax.microedition.lcdui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Stack.h"
#include "javax/microedition/lcdui/Canvas.h"

typedef struct NullCanvas NullCanvas;
struct NullCanvas {
    Canvas base;
};

NullCanvas* NullCanvas_NULL_CANVAS;

NullCanvas* NullCanvas_new(void);

void NullCanvas_init(NullCanvas* this);
void NullCanvas_setFullScreenMode(NullCanvas* this, bool mode);
void NullCanvas_sizeChanged(NullCanvas* this, int32_t w, int32_t h);
Stack* NullCanvas_getCommandStack(NullCanvas* this);
bool NullCanvas_isCommand(NullCanvas* this, Command* command);
void NullCanvas_addCommand(NullCanvas* this, Command* command);
void NullCanvas_removeCommand(NullCanvas* this, Command* command);
void NullCanvas_removeAllCommands(NullCanvas* this);
void NullCanvas_setCommandListener(NullCanvas* this, CommandListener* l);
CommandListener* NullCanvas_getCustomCommandListener(NullCanvas* this);
bool NullCanvas_isPaused(NullCanvas* this);
void NullCanvas_removePauseCommand(NullCanvas* this);
void NullCanvas_pause(NullCanvas* this);
void NullCanvas_unPause(NullCanvas* this);
void NullCanvas_process(NullCanvas* this);
void NullCanvas_paint(NullCanvas* this, Graphics* graphics);
void NullCanvas_destroy(NullCanvas* this);
void NullCanvas_setPaused(NullCanvas* this, bool isPaused);
void NullCanvas_pointerDragged(NullCanvas* this, int32_t x, int32_t y);
void NullCanvas_pointerPressed(NullCanvas* this, int32_t x, int32_t y);
void NullCanvas_pointerReleased(NullCanvas* this, int32_t x, int32_t y);

// Static fields with runtime initializers: call this once at startup
void NullCanvas_staticInit(void) {
    NullCanvas_NULL_CANVAS = NullCanvas_new();
}


void NullCanvas_init(NullCanvas* this) {
    Canvas_init(&this->base);
}

NullCanvas* NullCanvas_new(void) {
    NullCanvas* this = calloc(1, sizeof(NullCanvas));
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

