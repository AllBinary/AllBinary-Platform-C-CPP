// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnable.h"
#include "org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/game/displayable/canvas/TimeDelayHelper.h")
#include "org/allbinary/game/displayable/canvas/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/TimeDelayHelper.h")
#include "org/allbinary/graphics/displayable/TimeDelayHelper.h"
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






void GameCanvasRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameCanvasRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameCanvasRunnable", "GameRunnable");
    java_register_method("GameCanvasRunnable", "run", (void*) GameCanvasRunnable_run);
    java_register_method("GameCanvasRunnable", "processLoopSleep", (void*) GameCanvasRunnable_processLoopSleep);
}

static void GameCanvasRunnable_initFields(GameCanvasRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton_getInstance();
    
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void GameCanvasRunnable_init(GameCanvasRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasRunnable_register();
    GameRunnable_init(&this->base);
    GameCanvasRunnable_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}

GameCanvasRunnable* GameCanvasRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasRunnable* this = java_object_alloc(sizeof(GameCanvasRunnable), "GameCanvasRunnable");
    GameCanvasRunnable_init(this, allBinaryGameCanvas);
    return this;
}


void GameCanvasRunnable_run(GameCanvasRunnable* this) {
        JAVA_TRY {
            TimeDelayHelper_setStartTime(RunnableCanvas_getLoopTimeHelperP(this->allBinaryGameCanvas), GameTickTimeDelayHelper_setStartTime(this->gameTickTimeDelayHelper));
            GameTickDisplayInfoSingleton_update(this->gameTickDisplayInfoSingleton);
            AllBinaryGameCanvas_processGame(this->allBinaryGameCanvas);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}


// throws Exception
void GameCanvasRunnable_processLoopSleep(GameCanvasRunnable* this) {
        RunnableCanvas_processLoopSleep(this->allBinaryGameCanvas);
}

