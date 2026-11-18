// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/DemoGameStartupRunnable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"







void DemoGameStartupRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoGameStartupRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoGameStartupRunnable", "ABRunnable");
    java_register_method("DemoGameStartupRunnable", "run", (void*) DemoGameStartupRunnable_run);
    java_register_method("DemoGameStartupRunnable", "getType", (void*) DemoGameStartupRunnable_getType);
}

static void DemoGameStartupRunnable_initFields(DemoGameStartupRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void DemoGameStartupRunnable_init(DemoGameStartupRunnable* this, DemoCanvas* demoCanvas) {
    DemoGameStartupRunnable_register();
    ABRunnable_init(&this->base);
    DemoGameStartupRunnable_initFields(this);
        this->demoCanvas = demoCanvas;
}

DemoGameStartupRunnable* DemoGameStartupRunnable_new(DemoCanvas* demoCanvas) {
    DemoGameStartupRunnable* this = java_object_alloc(sizeof(DemoGameStartupRunnable), "DemoGameStartupRunnable");
    DemoGameStartupRunnable_init(this, demoCanvas);
    return this;
}


void DemoGameStartupRunnable_run(DemoGameStartupRunnable* this) {
        JAVA_TRY {
            ABRunnable_setRunning(this, true);
            DemoCanvas_stopGameDemo(this->demoCanvas);
            DemoCanvas_create(this->demoCanvas);
            DemoCanvas_start(this->demoCanvas);
            ABRunnable_setRunning(this, false);
        } JAVA_CATCH(Exception, e) {
            ABRunnable_setRunning(this, false);
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}


int32_t DemoGameStartupRunnable_getType(DemoGameStartupRunnable* this) {
        return DemoGameStartupRunnable_TYPE;
}

