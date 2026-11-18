// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameFrameRunnable.h"
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





void GameFrameRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameFrameRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFrameRunnable", "GameRunnable");
    java_register_method("GameFrameRunnable", "run", (void*) GameFrameRunnable_run);
}

static void GameFrameRunnable_initFields(GameFrameRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton_getInstance();
    
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void GameFrameRunnable_init(GameFrameRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameFrameRunnable_register();
    GameRunnable_init(&this->base);
    GameFrameRunnable_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}

GameFrameRunnable* GameFrameRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameFrameRunnable* this = java_object_alloc(sizeof(GameFrameRunnable), "GameFrameRunnable");
    GameFrameRunnable_init(this, allBinaryGameCanvas);
    return this;
}


void GameFrameRunnable_run(GameFrameRunnable* this) {
        JAVA_TRY {
            AllBinaryGameCanvas* allBinaryGameCanvas = this->allBinaryGameCanvas;
            TimeDelayHelper_setStartTime(RunnableCanvas_getLoopTimeHelperP(allBinaryGameCanvas), GameTickTimeDelayHelper_setStartTime(this->gameTickTimeDelayHelper));
            GameTickDisplayInfoSingleton_update(this->gameTickDisplayInfoSingleton);
            AllBinaryGameCanvas_processGame(allBinaryGameCanvas);
            if (!RunnableCanvas_isRunning(allBinaryGameCanvas) || AllBinaryGameCanvas_isPaused(allBinaryGameCanvas)) {
                AllBinaryGameCanvas_notifyDonePainting(allBinaryGameCanvas);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

