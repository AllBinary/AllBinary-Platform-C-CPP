// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/DemoGameRunnable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#if __has_include("org/allbinary/game/displayable/canvas/TimeDelayHelper.h")
#include "org/allbinary/game/displayable/canvas/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/TimeDelayHelper.h")
#include "org/allbinary/logic/communication/log/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/string/TimeDelayHelper.h")
#include "org/allbinary/string/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif






void DemoGameRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoGameRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoGameRunnable", "GameRunnable");
    java_register_method("DemoGameRunnable", "run", (void*) DemoGameRunnable_run);
    java_register_method("DemoGameRunnable", "processLoopSleep", (void*) DemoGameRunnable_processLoopSleep);
}

static void DemoGameRunnable_initFields(DemoGameRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void DemoGameRunnable_init(DemoGameRunnable* this, DemoCanvas* demoCanvas) {
    DemoGameRunnable_register();
    GameRunnable_init(&this->base);
    DemoGameRunnable_initFields(this);
        this->demoCanvas = demoCanvas;
}

DemoGameRunnable* DemoGameRunnable_new(DemoCanvas* demoCanvas) {
    DemoGameRunnable* this = java_object_alloc(sizeof(DemoGameRunnable), "DemoGameRunnable");
    DemoGameRunnable_init(this, demoCanvas);
    return this;
}


void DemoGameRunnable_run(DemoGameRunnable* this) {
        JAVA_TRY {
            TimeDelayHelper_setStartTime(RunnableCanvas_getLoopTimeHelperP(this->demoCanvas), GameTickTimeDelayHelper_setStartTime(this->gameTickTimeDelayHelper));
            DemoCanvas_processGame(this->demoCanvas);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}


// throws Exception
void DemoGameRunnable_processLoopSleep(DemoGameRunnable* this) {
        RunnableCanvas_processLoopSleep(this->demoCanvas);
}

