// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/thread/PrimaryThreadPool.h"
#include "org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/midlet/GameMidlet.h"
#include "org/allbinary/game/midlet/DemoRunnable.h"
#include "org/allbinary/game/midlet/CreateGameRunnable.h"
#if __has_include("org/allbinary/game/midlet/ThreadPool.h")
#include "org/allbinary/game/midlet/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ThreadPool.h")
#include "org/allbinary/game/displayable/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/layer/ThreadPool.h")
#include "org/allbinary/game/layer/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ThreadPool.h")
#include "org/allbinary/graphics/canvas/transition/progress/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ThreadPool.h")
#include "org/allbinary/graphics/canvas/transition/progress/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/ThreadPool.h")
#include "org/allbinary/logic/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ThreadPool.h")
#include "org/allbinary/logic/system/security/licensing/ThreadPool.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ThreadPool.h")
#include "org/allbinary/game/displayable/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/util/ThreadPool.h")
#include "org/allbinary/util/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/game/midlet/ThreadPool.h")
#include "org/allbinary/game/midlet/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ThreadPool.h")
#include "org/allbinary/game/displayable/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/layer/ThreadPool.h")
#include "org/allbinary/game/layer/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ThreadPool.h")
#include "org/allbinary/graphics/canvas/transition/progress/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ThreadPool.h")
#include "org/allbinary/graphics/canvas/transition/progress/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/ThreadPool.h")
#include "org/allbinary/logic/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ThreadPool.h")
#include "org/allbinary/logic/system/security/licensing/ThreadPool.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ThreadPool.h")
#include "org/allbinary/game/displayable/canvas/ThreadPool.h"
#endif
#if __has_include("org/allbinary/util/ThreadPool.h")
#include "org/allbinary/util/ThreadPool.h"
#endif














void DemoGameMidlet_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoGameMidlet_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoGameMidlet", "GameMidlet");
    java_register_method("DemoGameMidlet", "isContinue", (void*) DemoGameMidlet_isContinue);
    java_register_method("DemoGameMidlet", "getHighestLevel", (void*) DemoGameMidlet_getHighestLevel);
    java_register_method("DemoGameMidlet", "createDemoGameCanvasRunnableInterface", (void*) DemoGameMidlet_createDemoGameCanvasRunnableInterface);
    java_register_method("DemoGameMidlet", "createGameCanvasRunnable", (void*) DemoGameMidlet_createGameCanvasRunnable);
    java_register_method("DemoGameMidlet", "createGameCanvasRunnableInterface", (void*) DemoGameMidlet_createGameCanvasRunnableInterface);
    java_register_method("DemoGameMidlet", "demoSetup", (void*) DemoGameMidlet_demoSetup);
    java_register_method("DemoGameMidlet", "postDemoSetup", (void*) DemoGameMidlet_postDemoSetup);
    java_register_method("DemoGameMidlet", "setDemo", (void*) DemoGameMidlet_setDemo);
    java_register_method("DemoGameMidlet", "createGame", (void*) DemoGameMidlet_createGame);
    java_register_method("DemoGameMidlet", "isReady", (void*) DemoGameMidlet_isReady);
}


void DemoGameMidlet_init(DemoGameMidlet* this, ClientInformationFactory* clientInformationFactory) {
    DemoGameMidlet_register();
        GameMidlet_init(&this->base, clientInformationFactory);
}

DemoGameMidlet* DemoGameMidlet_new(ClientInformationFactory* clientInformationFactory) {
    DemoGameMidlet* this = java_object_alloc(sizeof(DemoGameMidlet), "DemoGameMidlet");
    DemoGameMidlet_init(this, clientInformationFactory);
    return this;
}


// throws Exception
bool DemoGameMidlet_isContinue(DemoGameMidlet* this) {
        ABHashtable* hashtable = AllBinaryMidlet_getStartStateHashtable(this);
        if (hashtable != nullptr && Hashtable_size(hashtable) > 0) {
            return true;
        } else {
            return false;
        }
}


int32_t DemoGameMidlet_getHighestLevel(DemoGameMidlet* this) {
        return 1;
}


// throws Exception
GameCanvasRunnableInterface* DemoGameMidlet_createDemoGameCanvasRunnableInterface(DemoGameMidlet* this) {
        LogUtil_putF(this->base.base.base.logUtil, this->base.base.base.commonStrings->NOT_IMPLEMENTED, this, this->base.base.base.commonStrings->CREATE);
        return (NullGameCanvasRunnable_staticInit(), NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE);
}


// throws Exception
GameCanvasRunnableInterface* DemoGameMidlet_createGameCanvasRunnable(DemoGameMidlet* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        java_throw(java_exception_new("Exception", this->base.base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
GameCanvasRunnableInterface* DemoGameMidlet_createGameCanvasRunnableInterface(DemoGameMidlet* this) {
        return DemoGameMidlet_createGameCanvasRunnable(this, GameMidlet_createGameLayerManager(this));
}


void DemoGameMidlet_demoSetup(DemoGameMidlet* this) {
}


void DemoGameMidlet_postDemoSetup(DemoGameMidlet* this) {
}


// throws Exception
// synchronized
void DemoGameMidlet_setDemo(DemoGameMidlet* this) {
        LogUtil_putF(this->base.base.base.logUtil, this->base.base.base.commonStrings->START, this, "setDemo");
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_start(progressCanvas);
        ThreadPool_runTask(PrimaryThreadPool_getInstance(), DemoRunnable_new(this));
}


// throws Exception
// synchronized
void DemoGameMidlet_createGame(DemoGameMidlet* this) {
        const char* CREATE_GAME = "createGame";
        LogUtil_putF(this->base.base.base.logUtil, this->base.base.base.commonStrings->START, this, CREATE_GAME);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_start(progressCanvas);
        ABHashtable* hashtable = AllBinaryMidlet_getStartStateHashtable(this);
        AllBinaryMidlet_setStartStateHashtable(this, StdUtil_getInstance()->NULL_TABLE);
        ThreadPool_runTask(PrimaryThreadPool_getInstance(), CreateGameRunnable_new(this, hashtable));
        LogUtil_putF(this->base.base.base.logUtil, this->base.base.base.commonStrings->END, this, CREATE_GAME);
}


bool DemoGameMidlet_isReady(DemoGameMidlet* this) {
        return true;
}

