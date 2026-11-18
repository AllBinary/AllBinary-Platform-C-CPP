// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameCanvasNonBotPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"





void GameCanvasNonBotPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameCanvasNonBotPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameCanvasNonBotPaintable", "Paintable");
    java_register_method("GameCanvasNonBotPaintable", "paint", (void*) GameCanvasNonBotPaintable_paint);
}

static void GameCanvasNonBotPaintable_initFields(GameCanvasNonBotPaintable* this) {
    
}


void GameCanvasNonBotPaintable_init(GameCanvasNonBotPaintable* this, AllBinaryGameCanvas* gameCanvas) {
    GameCanvasNonBotPaintable_register();
    Paintable_init(&this->base);
    GameCanvasNonBotPaintable_initFields(this);
        this->gameCanvas = gameCanvas;
}

GameCanvasNonBotPaintable* GameCanvasNonBotPaintable_new(AllBinaryGameCanvas* gameCanvas) {
    GameCanvasNonBotPaintable* this = java_object_alloc(sizeof(GameCanvasNonBotPaintable), "GameCanvasNonBotPaintable");
    GameCanvasNonBotPaintable_init(this, gameCanvas);
    return this;
}


void GameCanvasNonBotPaintable_paint(GameCanvasNonBotPaintable* this, Graphics* graphics) {
        AllBinaryGameCanvas_nonBotPaint(this->gameCanvas, graphics);
}

