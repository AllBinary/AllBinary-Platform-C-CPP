// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameCanvasPaintHelper.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"






void GameCanvasPaintHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameCanvasPaintHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameCanvasPaintHelper", "ProcessPaintable");
    java_register_method("GameCanvasPaintHelper", "process", (void*) GameCanvasPaintHelper_process);
    java_register_method("GameCanvasPaintHelper", "paint", (void*) GameCanvasPaintHelper_paint);
}

static void GameCanvasPaintHelper_initFields(GameCanvasPaintHelper* this) {
    
}


void GameCanvasPaintHelper_init(GameCanvasPaintHelper* this, AllBinaryGameCanvas* gameCanvas) {
    GameCanvasPaintHelper_register();
    ProcessPaintable_init(&this->base);
    GameCanvasPaintHelper_initFields(this);
        this->gameCanvas = gameCanvas;
}

GameCanvasPaintHelper* GameCanvasPaintHelper_new(AllBinaryGameCanvas* gameCanvas) {
    GameCanvasPaintHelper* this = java_object_alloc(sizeof(GameCanvasPaintHelper), "GameCanvasPaintHelper");
    GameCanvasPaintHelper_init(this, gameCanvas);
    return this;
}


void GameCanvasPaintHelper_process(GameCanvasPaintHelper* this) {
}


void GameCanvasPaintHelper_paint(GameCanvasPaintHelper* this, Graphics* graphics) {
        AllBinaryGameCanvas_draw(this->gameCanvas, graphics);
}

