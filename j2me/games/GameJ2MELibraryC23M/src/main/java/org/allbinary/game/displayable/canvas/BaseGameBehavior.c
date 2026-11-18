// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/BaseGameBehavior.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/business/advertisement/GameAdStateFactory.h")
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif


static BaseGameBehavior* BaseGameBehavior_instanceC;













void BaseGameBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BaseGameBehavior_instanceC = BaseGameBehavior_new();
}

void BaseGameBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseGameBehavior", "DemoGameBehavior");
    java_register_method("BaseGameBehavior", "init", (void*) BaseGameBehavior_initMethod);
    java_register_method("BaseGameBehavior", "pause", (void*) BaseGameBehavior_pause);
    java_register_method("BaseGameBehavior", "unPause", (void*) BaseGameBehavior_unPause);
    java_register_method("BaseGameBehavior", "updateTouch", (void*) BaseGameBehavior_updateTouch);
    java_register_method("BaseGameBehavior", "updateScreenButtonPaintable", (void*) BaseGameBehavior_updateScreenButtonPaintable);
    java_register_method("BaseGameBehavior", "setGameState", (void*) BaseGameBehavior_setGameState);
    java_register_method("BaseGameBehavior", "removeAllGameKeyInputListeners", (void*) BaseGameBehavior_removeAllGameKeyInputListeners);
    java_register_method("BaseGameBehavior", "updateEndGameProcessor", (void*) BaseGameBehavior_updateEndGameProcessor);
    java_register_method("BaseGameBehavior", "buildGame", (void*) BaseGameBehavior_buildGame);
    java_register_method("BaseGameBehavior", "run", (void*) BaseGameBehavior_run);
    java_register_method("BaseGameBehavior", "setHighScore", (void*) BaseGameBehavior_setHighScore);
}

void BaseGameBehavior_init(BaseGameBehavior* this) {
    BaseGameBehavior_register();
    DemoGameBehavior_init(&this->base);
}

BaseGameBehavior* BaseGameBehavior_new(void) {
    BaseGameBehavior* this = java_object_alloc(sizeof(BaseGameBehavior), "BaseGameBehavior");
    BaseGameBehavior_init(this);
    return this;
}


DemoGameBehavior* BaseGameBehavior_getInstance(void) {
        return (BaseGameBehavior_staticInit(), BaseGameBehavior_instanceC);
}


// throws Exception
void BaseGameBehavior_initMethod(BaseGameBehavior* this) {
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(GameAdStateFactory_getInstance());
        GameAdStateBase_playingAdState(gameAdState);
}


void BaseGameBehavior_pause(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        Features* features = Features_getInstance();
        if (Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL_AS_GAME_THREAD)) {
            CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
            CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, allBinaryGameCanvas->gamePauseRunnable);
        }
}


void BaseGameBehavior_unPause(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        if (Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL_AS_GAME_THREAD)) {
            CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
            CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, allBinaryGameCanvas->gameRunnable);
            CurrentDisplayableFactory_setDisplayable(currentDisplayableFactory, allBinaryGameCanvas);
        }
}


// throws Exception
void BaseGameBehavior_updateTouch(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_updateTouch2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_updateScreenButtonPaintable(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_updateScreenButtonPaintable2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_setGameState(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_updateGameState(allBinaryGameCanvas);
}


void BaseGameBehavior_removeAllGameKeyInputListeners(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_removeAllGameKeyInputListeners2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_updateEndGameProcessor(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_updateEndGameProcessor2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_buildGame(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_buildGame2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_run(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_run2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_setHighScore(BaseGameBehavior* this, AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, const char* name, int64_t score, bool autoSubmit, bool isLast) {
        AllBinaryGameCanvas_setHighScore2(allBinaryGameCanvas, abeClientInformation, name, score, autoSubmit, isLast);
}

