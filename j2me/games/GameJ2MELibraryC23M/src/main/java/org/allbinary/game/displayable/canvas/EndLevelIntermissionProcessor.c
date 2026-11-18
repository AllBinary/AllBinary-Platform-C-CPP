// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/EndLevelIntermissionProcessor.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"





void EndLevelIntermissionProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void EndLevelIntermissionProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("EndLevelIntermissionProcessor", "Processor");
    java_register_method("EndLevelIntermissionProcessor", "process", (void*) EndLevelIntermissionProcessor_process);
}

static void EndLevelIntermissionProcessor_initFields(EndLevelIntermissionProcessor* this) {
    
}


void EndLevelIntermissionProcessor_init(EndLevelIntermissionProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    EndLevelIntermissionProcessor_register();
    Processor_init(&this->base);
    EndLevelIntermissionProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

EndLevelIntermissionProcessor* EndLevelIntermissionProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    EndLevelIntermissionProcessor* this = java_object_alloc(sizeof(EndLevelIntermissionProcessor), "EndLevelIntermissionProcessor");
    EndLevelIntermissionProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void EndLevelIntermissionProcessor_process(EndLevelIntermissionProcessor* this) {
        AllBinaryGameCanvas_processEndLevelIntermissionGameState(this->gameCanvas);
}

