// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/InitGameProcessor.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/game/displayable/canvas/ProgressCanvas.h")
#include "org/allbinary/game/displayable/canvas/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/canvas/ProgressCanvas.h")
#include "org/allbinary/canvas/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/ProgressCanvas.h")
#include "org/allbinary/logic/communication/log/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/string/ProgressCanvas.h")
#include "org/allbinary/string/ProgressCanvas.h"
#endif





void InitGameProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void InitGameProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InitGameProcessor", "Processor");
    java_register_method("InitGameProcessor", "process", (void*) InitGameProcessor_process);
}

static void InitGameProcessor_initFields(InitGameProcessor* this) {
    
}


void InitGameProcessor_init(InitGameProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    InitGameProcessor_register();
    Processor_init(&this->base);
    InitGameProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

InitGameProcessor* InitGameProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    InitGameProcessor* this = java_object_alloc(sizeof(InitGameProcessor), "InitGameProcessor");
    InitGameProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void InitGameProcessor_process(InitGameProcessor* this) {
        if (ProgressCanvas_isInGame(ProgressCanvasFactory_getInstance())) {
            AllBinaryGameCanvas_setProcessGameProcessorInit(this->gameCanvas);
        }
}

