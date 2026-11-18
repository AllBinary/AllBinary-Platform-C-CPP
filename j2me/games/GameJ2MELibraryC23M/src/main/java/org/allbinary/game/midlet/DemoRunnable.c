// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/DemoRunnable.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
#include "org/allbinary/game/midlet/DemoGameMidletEventHandler.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/MyCommandsFactory.h")
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#endif





void DemoRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoRunnable", nullptr);
    java_register_method("DemoRunnable", "run", (void*) DemoRunnable_run);
}

static void DemoRunnable_initFields(DemoRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void DemoRunnable_init(DemoRunnable* this, DemoGameMidlet* demoGameMidlet) {
    DemoRunnable_register();
    DemoRunnable_initFields(this);
        this->demoGameMidlet = demoGameMidlet;
        this->startDemoGameMidletEvent = DemoGameMidletEvent_new(this->demoGameMidlet, DemoGameMidletStateFactory_getInstance()->START_DEMO);
}

DemoRunnable* DemoRunnable_new(DemoGameMidlet* demoGameMidlet) {
    DemoRunnable* this = java_object_alloc(sizeof(DemoRunnable), "DemoRunnable");
    DemoRunnable_init(this, demoGameMidlet);
    return this;
}


void DemoRunnable_run(DemoRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), "GameCanvasRunnableInterface")), this, this->commonStrings->RUN);
            GameMidlet_commandAction(this->demoGameMidlet, MyCommandsFactory_getInstance()->SET_DISPLAYABLE, ProgressCanvasFactory_getInstance());
            GameMidlet_setGameCanvasRunnableInterface(this->demoGameMidlet, DemoGameMidlet_createDemoGameCanvasRunnableInterface(this->demoGameMidlet));
            DemoGameMidlet_demoSetup(this->demoGameMidlet);
            BasicEventHandler_fireEvent(DemoGameMidletEventHandler_getInstance(), this->startDemoGameMidletEvent);
            GameMidlet_startGameCanvasRunnableInterface(this->demoGameMidlet);
            DemoGameMidlet_postDemoSetup(this->demoGameMidlet);
            LogUtil_putF(this->logUtil, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

