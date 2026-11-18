// Generated Code Do Not Modify
#include "org/allbinary/canvas/FullScreenUtil.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"


static FullScreenUtil* FullScreenUtil_instance;






void FullScreenUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FullScreenUtil_instance = FullScreenUtil_new();
}

void FullScreenUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FullScreenUtil", nullptr);
    java_register_method("FullScreenUtil", "initOnRun", (void*) FullScreenUtil_initOnRun);
    java_register_method("FullScreenUtil", "init", (void*) FullScreenUtil_initMethod);
    java_register_method("FullScreenUtil", "isScreenChange", (void*) FullScreenUtil_isScreenChange);
    java_register_method("FullScreenUtil", "isScreenChangeCanvas", (void*) FullScreenUtil_isScreenChangeCanvas);
}

void FullScreenUtil_init(FullScreenUtil* this) {
    FullScreenUtil_register();
}

FullScreenUtil* FullScreenUtil_new(void) {
    FullScreenUtil* this = java_object_alloc(sizeof(FullScreenUtil), "FullScreenUtil");
    FullScreenUtil_init(this);
    return this;
}


FullScreenUtil* FullScreenUtil_getInstance(void) {
        return (FullScreenUtil_staticInit(), FullScreenUtil_instance);
}


// throws Exception
void FullScreenUtil_initOnRun(FullScreenUtil* this, Canvas* fullScreenInterface, CommandListener* commandListener) {
        if (commandListener != nullptr) {
            FullScreenUtil_initMethod(this, fullScreenInterface);
        }
}


void FullScreenUtil_initMethod(FullScreenUtil* this, Canvas* fullScreenInterface) {
}


bool FullScreenUtil_isScreenChange(FullScreenUtil* this, bool isFullScreen) {
        MainFeatureFactory* mainFeatureFactory = MainFeatureFactory_getInstance();
        Features* features = Features_getInstance();
        if (Features_isFeature(features, mainFeatureFactory->FULL_SCREEN) != isFullScreen) {
            return true;
        }
        return false;
}


bool FullScreenUtil_isScreenChangeCanvas(FullScreenUtil* this, Canvas* fullScreenInterface) {
        return FullScreenUtil_isScreenChange(this, false);
}

