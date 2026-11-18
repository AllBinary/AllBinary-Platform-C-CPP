// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameProcessor.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"





void GameProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameProcessor", "Processor");
    java_register_method("GameProcessor", "process", (void*) GameProcessor_process);
}

static void GameProcessor_initFields(GameProcessor* this) {
    
}


void GameProcessor_init(GameProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    GameProcessor_register();
    Processor_init(&this->base);
    GameProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

GameProcessor* GameProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    GameProcessor* this = java_object_alloc(sizeof(GameProcessor), "GameProcessor");
    GameProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void GameProcessor_process(GameProcessor* this) {
        AllBinaryGameCanvas_processPlayingGame(this->gameCanvas);
}

