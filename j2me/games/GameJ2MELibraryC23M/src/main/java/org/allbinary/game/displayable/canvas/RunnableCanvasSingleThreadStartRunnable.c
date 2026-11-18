// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/RunnableCanvasSingleThreadStartRunnable.h"
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"






void RunnableCanvasSingleThreadStartRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RunnableCanvasSingleThreadStartRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RunnableCanvasSingleThreadStartRunnable", "GameRunnable");
    java_register_method("RunnableCanvasSingleThreadStartRunnable", "run", (void*) RunnableCanvasSingleThreadStartRunnable_run);
    java_register_method("RunnableCanvasSingleThreadStartRunnable", "processLoopSleep", (void*) RunnableCanvasSingleThreadStartRunnable_processLoopSleep);
}

static void RunnableCanvasSingleThreadStartRunnable_initFields(RunnableCanvasSingleThreadStartRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void RunnableCanvasSingleThreadStartRunnable_init(RunnableCanvasSingleThreadStartRunnable* this, RunnableCanvas* demoCanvas) {
    RunnableCanvasSingleThreadStartRunnable_register();
    GameRunnable_init(&this->base);
    RunnableCanvasSingleThreadStartRunnable_initFields(this);
        this->runnableCanvas = demoCanvas;
}

RunnableCanvasSingleThreadStartRunnable* RunnableCanvasSingleThreadStartRunnable_new(RunnableCanvas* demoCanvas) {
    RunnableCanvasSingleThreadStartRunnable* this = java_object_alloc(sizeof(RunnableCanvasSingleThreadStartRunnable), "RunnableCanvasSingleThreadStartRunnable");
    RunnableCanvasSingleThreadStartRunnable_init(this, demoCanvas);
    return this;
}


void RunnableCanvasSingleThreadStartRunnable_run(RunnableCanvasSingleThreadStartRunnable* this) {
        JAVA_TRY {
            RunnableCanvas_run(this->runnableCanvas);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}


// throws Exception
void RunnableCanvasSingleThreadStartRunnable_processLoopSleep(RunnableCanvasSingleThreadStartRunnable* this) {
        RunnableCanvas_processLoopSleep(this->runnableCanvas);
}

