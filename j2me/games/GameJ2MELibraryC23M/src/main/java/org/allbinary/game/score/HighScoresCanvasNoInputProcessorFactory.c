// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoresCanvasNoInputProcessorFactory.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"




void HighScoresCanvasNoInputProcessorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoresCanvasNoInputProcessorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoresCanvasNoInputProcessorFactory", nullptr);
    java_register_method("HighScoresCanvasNoInputProcessorFactory", "getInstance", (void*) HighScoresCanvasNoInputProcessorFactory_getInstance);
}

void HighScoresCanvasNoInputProcessorFactory_init(HighScoresCanvasNoInputProcessorFactory* this) {
    HighScoresCanvasNoInputProcessorFactory_register();
}

HighScoresCanvasNoInputProcessorFactory* HighScoresCanvasNoInputProcessorFactory_new(void) {
    HighScoresCanvasNoInputProcessorFactory* this = java_object_alloc(sizeof(HighScoresCanvasNoInputProcessorFactory), "HighScoresCanvasNoInputProcessorFactory");
    HighScoresCanvasNoInputProcessorFactory_init(this);
    return this;
}


HighScoresCanvasInputProcessor* HighScoresCanvasNoInputProcessorFactory_getInstance(HighScoresCanvasNoInputProcessorFactory* this, HighScoresCanvas* highScoresCanvas) {
        return HighScoresCanvasInputProcessor_new(highScoresCanvas);
}

