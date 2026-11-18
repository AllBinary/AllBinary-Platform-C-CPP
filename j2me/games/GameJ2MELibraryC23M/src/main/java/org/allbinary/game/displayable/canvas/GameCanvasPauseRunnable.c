// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameCanvasPauseRunnable.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif






void GameCanvasPauseRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameCanvasPauseRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameCanvasPauseRunnable", "GameRunnable");
    java_register_method("GameCanvasPauseRunnable", "run", (void*) GameCanvasPauseRunnable_run);
    java_register_method("GameCanvasPauseRunnable", "processLoopSleep", (void*) GameCanvasPauseRunnable_processLoopSleep);
}

static void GameCanvasPauseRunnable_initFields(GameCanvasPauseRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GameCanvasPauseRunnable_init(GameCanvasPauseRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasPauseRunnable_register();
    GameRunnable_init(&this->base);
    GameCanvasPauseRunnable_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}

GameCanvasPauseRunnable* GameCanvasPauseRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasPauseRunnable* this = java_object_alloc(sizeof(GameCanvasPauseRunnable), "GameCanvasPauseRunnable");
    GameCanvasPauseRunnable_init(this, allBinaryGameCanvas);
    return this;
}


void GameCanvasPauseRunnable_run(GameCanvasPauseRunnable* this) {
}


// throws Exception
void GameCanvasPauseRunnable_processLoopSleep(GameCanvasPauseRunnable* this) {
        JAVA_TRY {
            Features* features = Features_getInstance();
            bool isOpenGL = Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL);
            if (isOpenGL) {
                AllBinaryGameCanvas_processSleep(this->allBinaryGameCanvas);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

