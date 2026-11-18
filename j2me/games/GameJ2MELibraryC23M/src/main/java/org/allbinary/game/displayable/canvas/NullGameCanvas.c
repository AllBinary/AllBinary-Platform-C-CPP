// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/NullGameCanvas.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/score/NoHighScoresFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* NullGameCanvas_instance;
const char* NullGameCanvas_NO_GAME = "No Background Game";


static NullGameCanvas* NullGameCanvas_createNull(void);














void NullGameCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullGameCanvas_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void NullGameCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullGameCanvas", "AllBinaryGameCanvas");
    java_register_method("NullGameCanvas", "isGameOver", (void*) NullGameCanvas_isGameOver);
    java_register_method("NullGameCanvas", "setRunning", (void*) NullGameCanvas_setRunning);
    java_register_method("NullGameCanvas", "isRunning", (void*) NullGameCanvas_isRunning);
    java_register_method("NullGameCanvas", "pause", (void*) NullGameCanvas_pause);
    java_register_method("NullGameCanvas", "unPause", (void*) NullGameCanvas_unPause);
    java_register_method("NullGameCanvas", "initCommands", (void*) NullGameCanvas_initCommands);
    java_register_method("NullGameCanvas", "buildGameInit", (void*) NullGameCanvas_buildGameInit);
    java_register_method("NullGameCanvas", "draw", (void*) NullGameCanvas_draw);
    java_register_method("NullGameCanvas", "run", (void*) NullGameCanvas_run);
    java_register_method("NullGameCanvas", "getType", (void*) NullGameCanvas_getType);
}

static void NullGameCanvas_initFields(NullGameCanvas* this) {
    this->runningNull = true;
}


static NullGameCanvas* NullGameCanvas_createNull(void) {
        JAVA_TRY {
            return NullGameCanvas_new(AllBinaryGameLayerManager_getNullInstance());
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(LogUtil_getInstance(), CommonStrings_getInstance()->EXCEPTION, "NullGameCanvas", CommonStrings_getInstance()->GET_INSTANCE, e);
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}


NullGameCanvas* NullGameCanvas_getInstance(void) {
        if ((NullGameCanvas_staticInit(), NullGameCanvas_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            NullGameCanvas_instance = NullGameCanvas_createNull();
        }
        return ((NullGameCanvas*) (NullGameCanvas_staticInit(), NullGameCanvas_instance));
}


// throws Exception
NullGameCanvas* NullGameCanvas_createCanvas(AllBinaryGameLayerManager* gameLayerManager) {
        NullGameCanvas* nullGameCanvas = NullGameCanvas_new(gameLayerManager);
        AllBinaryGameCanvas_setInitialized(nullGameCanvas, true);
        Displayable_setTitle(nullGameCanvas, NullGameCanvas_NO_GAME);
        return nullGameCanvas;
}


void NullGameCanvas_init(NullGameCanvas* this, AllBinaryGameLayerManager* gameLayerManager) {
    NullGameCanvas_register();
        AllBinaryGameCanvas_init(&this->base, (NullCommandListener_staticInit(), NullCommandListener_NULL_COMMAND_LISTENER), gameLayerManager, NoHighScoresFactory_getInstance(), (BasicBuildGameInitializerFactory_staticInit(), BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY), false);
        NullGameCanvas_initFields(this);
        RunnableCanvas_setWait((&this->base), 1200);
}

NullGameCanvas* NullGameCanvas_new(AllBinaryGameLayerManager* gameLayerManager) {
    NullGameCanvas* this = java_object_alloc(sizeof(NullGameCanvas), "NullGameCanvas");
    NullGameCanvas_init(this, gameLayerManager);
    return this;
}


// synchronized
bool NullGameCanvas_isGameOver(NullGameCanvas* this) {
        return false;
}


void NullGameCanvas_setRunning(NullGameCanvas* this, bool running) {
        this->runningNull = running;
}


// synchronized
bool NullGameCanvas_isRunning(NullGameCanvas* this) {
        return this->runningNull;
}


// synchronized
void NullGameCanvas_pause(NullGameCanvas* this) {
        MyCanvas_setPaused(this, true);
}


// synchronized
void NullGameCanvas_unPause(NullGameCanvas* this) {
        MyCanvas_setPaused(this, false);
}


void NullGameCanvas_initCommands(NullGameCanvas* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        MyCanvas_setCommandListener(this, cmdListener);
}


// throws Exception
void NullGameCanvas_buildGameInit(NullGameCanvas* this, bool isProgress) {
}


void NullGameCanvas_draw(NullGameCanvas* this, Graphics* graphics) {
}


void NullGameCanvas_run(NullGameCanvas* this) {
        JAVA_TRY {
            LogUtil_putF(this->base.base.base.logUtil, this->base.base.base.commonStrings->START_RUNNABLE, this, this->base.base.base.commonStrings->RUN);
            LogUtil_putF(this->base.base.base.logUtil, this->base.base.base.commonStrings->END_RUNNABLE, this, this->base.base.base.commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.base.logUtil, this->base.base.base.commonStrings->EXCEPTION, this, this->base.base.base.commonStrings->RUN, e);
        } JAVA_END_TRY;
}


int32_t NullGameCanvas_getType(NullGameCanvas* this) {
        return NullGameCanvas_TYPE;
}

