// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresCanvasChangeLevelInputProcessorFactory.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresCanvasLevelChangeInputProcessor.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"




void HighScoresCanvasChangeLevelInputProcessorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresCanvasChangeLevelInputProcessorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresCanvasChangeLevelInputProcessorFactory", nullptr);
    java_register_method("HighScoresCanvasChangeLevelInputProcessorFactory", "getInstance", (void*) HighScoresCanvasChangeLevelInputProcessorFactory_getInstance);
}

void HighScoresCanvasChangeLevelInputProcessorFactory_init(HighScoresCanvasChangeLevelInputProcessorFactory* this) {
    HighScoresCanvasChangeLevelInputProcessorFactory_register();
}

HighScoresCanvasChangeLevelInputProcessorFactory* HighScoresCanvasChangeLevelInputProcessorFactory_new(void) {
    HighScoresCanvasChangeLevelInputProcessorFactory* this = java_object_alloc(sizeof(HighScoresCanvasChangeLevelInputProcessorFactory), "HighScoresCanvasChangeLevelInputProcessorFactory");
    HighScoresCanvasChangeLevelInputProcessorFactory_init(this);
    return this;
}


HighScoresCanvasInputProcessor* HighScoresCanvasChangeLevelInputProcessorFactory_getInstance(HighScoresCanvasChangeLevelInputProcessorFactory* this, HighScoresCanvas* highScoresCanvas) {
        return HighScoresCanvasLevelChangeInputProcessor_new(highScoresCanvas);
}

