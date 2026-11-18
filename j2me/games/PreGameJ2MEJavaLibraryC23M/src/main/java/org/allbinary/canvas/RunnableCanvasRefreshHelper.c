// Generated Code Do Not Modify
#include "org/allbinary/canvas/RunnableCanvasRefreshHelper.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/canvas/Processor.h"





void RunnableCanvasRefreshHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RunnableCanvasRefreshHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RunnableCanvasRefreshHelper", "Processor");
    java_register_method("RunnableCanvasRefreshHelper", "process", (void*) RunnableCanvasRefreshHelper_process);
}

static void RunnableCanvasRefreshHelper_initFields(RunnableCanvasRefreshHelper* this) {
    
}


void RunnableCanvasRefreshHelper_init(RunnableCanvasRefreshHelper* this, MyCanvas* runnableCanvas) {
    RunnableCanvasRefreshHelper_register();
    Processor_init(&this->base);
    RunnableCanvasRefreshHelper_initFields(this);
        this->runnableCanvas = runnableCanvas;
}

RunnableCanvasRefreshHelper* RunnableCanvasRefreshHelper_new(MyCanvas* runnableCanvas) {
    RunnableCanvasRefreshHelper* this = java_object_alloc(sizeof(RunnableCanvasRefreshHelper), "RunnableCanvasRefreshHelper");
    RunnableCanvasRefreshHelper_init(this, runnableCanvas);
    return this;
}


void RunnableCanvasRefreshHelper_process(RunnableCanvasRefreshHelper* this) {
        Canvas_repaint(this->runnableCanvas);
}

