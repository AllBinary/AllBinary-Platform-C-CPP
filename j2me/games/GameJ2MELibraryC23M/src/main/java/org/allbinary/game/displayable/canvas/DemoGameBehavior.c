// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/game/GameTypeFactory.h")
#include "org/allbinary/game/GameTypeFactory.h"
#endif


static DemoGameBehavior* DemoGameBehavior_instance;













void DemoGameBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DemoGameBehavior_instance = DemoGameBehavior_new();
}

void DemoGameBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoGameBehavior", nullptr);
    java_register_method("DemoGameBehavior", "init", (void*) DemoGameBehavior_initMethod);
    java_register_method("DemoGameBehavior", "pause", (void*) DemoGameBehavior_pause);
    java_register_method("DemoGameBehavior", "unPause", (void*) DemoGameBehavior_unPause);
    java_register_method("DemoGameBehavior", "updateTouch", (void*) DemoGameBehavior_updateTouch);
    java_register_method("DemoGameBehavior", "updateScreenButtonPaintable", (void*) DemoGameBehavior_updateScreenButtonPaintable);
    java_register_method("DemoGameBehavior", "setGameState", (void*) DemoGameBehavior_setGameState);
    java_register_method("DemoGameBehavior", "removeAllGameKeyInputListeners", (void*) DemoGameBehavior_removeAllGameKeyInputListeners);
    java_register_method("DemoGameBehavior", "updateEndGameProcessor", (void*) DemoGameBehavior_updateEndGameProcessor);
    java_register_method("DemoGameBehavior", "buildGame", (void*) DemoGameBehavior_buildGame);
    java_register_method("DemoGameBehavior", "run", (void*) DemoGameBehavior_run);
    java_register_method("DemoGameBehavior", "setHighScore", (void*) DemoGameBehavior_setHighScore);
}

static void DemoGameBehavior_initFields(DemoGameBehavior* this) {
    this->logUtil = LogUtil_getInstance();
}

void DemoGameBehavior_init(DemoGameBehavior* this) {
    DemoGameBehavior_register();
    DemoGameBehavior_initFields(this);
}

DemoGameBehavior* DemoGameBehavior_new(void) {
    DemoGameBehavior* this = java_object_alloc(sizeof(DemoGameBehavior), "DemoGameBehavior");
    DemoGameBehavior_init(this);
    return this;
}


DemoGameBehavior* DemoGameBehavior_getInstance(void) {
        return (DemoGameBehavior_staticInit(), DemoGameBehavior_instance);
}


// throws Exception
void DemoGameBehavior_initMethod(DemoGameBehavior* this) {
}


void DemoGameBehavior_pause(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


void DemoGameBehavior_unPause(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_updateTouch(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_updateScreenButtonPaintable(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_setTouchPaintableP(allBinaryGameCanvas, NullPaintable_getInstance());
}


// throws Exception
void DemoGameBehavior_setGameState(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


void DemoGameBehavior_removeAllGameKeyInputListeners(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_updateEndGameProcessor(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_buildGame(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void DemoGameBehavior_run(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, java_string_of(GameTypeFactory_getInstance()->BOT), this, commonStrings->RUN);
}


// throws Exception
void DemoGameBehavior_setHighScore(DemoGameBehavior* this, AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, const char* name, int64_t score, bool autoSubmit, bool isLast) {
}

