// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/CreateGameRunnable.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
#include "org/allbinary/game/midlet/DemoGameMidletEventHandler.h"
#if __has_include("org/allbinary/graphics/displayable/command/MyCommandsFactory.h")
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/midlet/GameCanvasRunnableInterface.h")
#include "org/allbinary/game/midlet/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/GameCanvasRunnableInterface.h")
#include "org/allbinary/graphics/canvas/transition/progress/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/GameCanvasRunnableInterface.h")
#include "org/allbinary/graphics/canvas/transition/progress/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/GameCanvasRunnableInterface.h")
#include "org/allbinary/graphics/displayable/command/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/GameCanvasRunnableInterface.h")
#include "org/allbinary/logic/communication/log/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/string/GameCanvasRunnableInterface.h")
#include "org/allbinary/string/GameCanvasRunnableInterface.h"
#endif
#if __has_include("org/allbinary/util/GameCanvasRunnableInterface.h")
#include "org/allbinary/util/GameCanvasRunnableInterface.h"
#endif





void CreateGameRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CreateGameRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CreateGameRunnable", nullptr);
    java_register_method("CreateGameRunnable", "run", (void*) CreateGameRunnable_run);
}

static void CreateGameRunnable_initFields(CreateGameRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void CreateGameRunnable_init(CreateGameRunnable* this, DemoGameMidlet* demoGameMidlet, ABHashtable* hashtable) {
    CreateGameRunnable_register();
    CreateGameRunnable_initFields(this);
        this->demoGameMidlet = demoGameMidlet;
        this->hashtable = hashtable;
        this->startGameMidletEvent = DemoGameMidletEvent_new(this, DemoGameMidletStateFactory_getInstance()->START_GAME);
}

CreateGameRunnable* CreateGameRunnable_new(DemoGameMidlet* demoGameMidlet, ABHashtable* hashtable) {
    CreateGameRunnable* this = java_object_alloc(sizeof(CreateGameRunnable), "CreateGameRunnable");
    CreateGameRunnable_init(this, demoGameMidlet, hashtable);
    return this;
}


void CreateGameRunnable_run(CreateGameRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            GameMidlet_commandAction(this->demoGameMidlet, MyCommandsFactory_getInstance()->SET_DISPLAYABLE, progressCanvas);
            GameMidlet_stopGameCanvasRunnableInterface(this->demoGameMidlet);
            GameMidlet_setGameCanvasRunnableInterface(this->demoGameMidlet, DemoGameMidlet_createGameCanvasRunnableInterface(this->demoGameMidlet));
            GameCanvasRunnableInterface_setLoadStateHashtable(GameMidlet_getGameCanvasRunnableInterface(this->demoGameMidlet), this->hashtable);
            GameMidlet_startGameCanvasRunnableInterface(this->demoGameMidlet);
            BasicEventHandler_fireEvent(DemoGameMidletEventHandler_getInstance(), this->startGameMidletEvent);
            LogUtil_putF(this->logUtil, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

