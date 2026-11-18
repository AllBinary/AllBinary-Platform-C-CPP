// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/EndGamePaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"





void EndGamePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void EndGamePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("EndGamePaintable", "Paintable");
    java_register_method("EndGamePaintable", "paint", (void*) EndGamePaintable_paint);
}

static void EndGamePaintable_initFields(EndGamePaintable* this) {
    
}


void EndGamePaintable_init(EndGamePaintable* this, AllBinaryGameCanvas* gameCanvas) {
    EndGamePaintable_register();
    Paintable_init(&this->base);
    EndGamePaintable_initFields(this);
        this->gameCanvas = gameCanvas;
}

EndGamePaintable* EndGamePaintable_new(AllBinaryGameCanvas* gameCanvas) {
    EndGamePaintable* this = java_object_alloc(sizeof(EndGamePaintable), "EndGamePaintable");
    EndGamePaintable_init(this, gameCanvas);
    return this;
}


void EndGamePaintable_paint(EndGamePaintable* this, Graphics* graphics) {
        AllBinaryGameCanvas_paintGameOver(this->gameCanvas, graphics);
}

