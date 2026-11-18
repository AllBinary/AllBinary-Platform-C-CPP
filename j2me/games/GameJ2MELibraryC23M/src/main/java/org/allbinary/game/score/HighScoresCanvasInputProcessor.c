// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/util/BasicArrayListD.h"











void HighScoresCanvasInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresCanvasInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresCanvasInputProcessor", "PlayerGameInput");
    java_register_method("HighScoresCanvasInputProcessor", "open", (void*) HighScoresCanvasInputProcessor_open);
    java_register_method("HighScoresCanvasInputProcessor", "close", (void*) HighScoresCanvasInputProcessor_close);
    java_register_method("HighScoresCanvasInputProcessor", "onPressGameKeyEvent", (void*) HighScoresCanvasInputProcessor_onPressGameKeyEvent);
    java_register_method("HighScoresCanvasInputProcessor", "onDownGameKeyEvent", (void*) HighScoresCanvasInputProcessor_onDownGameKeyEvent);
    java_register_method("HighScoresCanvasInputProcessor", "onUpGameKeyEvent", (void*) HighScoresCanvasInputProcessor_onUpGameKeyEvent);
    java_register_method("HighScoresCanvasInputProcessor", "paint", (void*) HighScoresCanvasInputProcessor_paint);
    java_register_method("HighScoresCanvasInputProcessor", "getHighScoresCanvas", (void*) HighScoresCanvasInputProcessor_getHighScoresCanvas);
}

static void HighScoresCanvasInputProcessor_initFields(HighScoresCanvasInputProcessor* this) {
    
}


void HighScoresCanvasInputProcessor_init(HighScoresCanvasInputProcessor* this, HighScoresCanvas* highScoresCanvas) {
    HighScoresCanvasInputProcessor_register();
        PlayerGameInput_init(&this->base, BasicArrayListD_new(), BasicArrayListD_new(), -1);
        HighScoresCanvasInputProcessor_initFields(this);
        this->highScoresCanvas = highScoresCanvas;
}

HighScoresCanvasInputProcessor* HighScoresCanvasInputProcessor_new(HighScoresCanvas* highScoresCanvas) {
    HighScoresCanvasInputProcessor* this = java_object_alloc(sizeof(HighScoresCanvasInputProcessor), "HighScoresCanvasInputProcessor");
    HighScoresCanvasInputProcessor_init(this, highScoresCanvas);
    return this;
}


void HighScoresCanvasInputProcessor_open(HighScoresCanvasInputProcessor* this) {
}


void HighScoresCanvasInputProcessor_close(HighScoresCanvasInputProcessor* this) {
}


// synchronized
void HighScoresCanvasInputProcessor_onPressGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_onPressGameKeyEvent((&this->base), gameKeyEvent);
        GameInput_update(this);
}


// synchronized
void HighScoresCanvasInputProcessor_onDownGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_onDownGameKeyEvent((&this->base), gameKeyEvent);
        GameInput_update(this);
}


// synchronized
void HighScoresCanvasInputProcessor_onUpGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_onUpGameKeyEvent((&this->base), gameKeyEvent);
        GameInput_update(this);
}


void HighScoresCanvasInputProcessor_paint(HighScoresCanvasInputProcessor* this, Graphics* graphics) {
}


HighScoresCanvas* HighScoresCanvasInputProcessor_getHighScoresCanvas(HighScoresCanvasInputProcessor* this) {
        return this->highScoresCanvas;
}

