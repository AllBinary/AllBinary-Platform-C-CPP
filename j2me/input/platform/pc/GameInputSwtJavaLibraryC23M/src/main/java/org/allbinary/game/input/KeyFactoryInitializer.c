// Generated Code Do Not Modify
#include "org/allbinary/game/input/KeyFactoryInitializer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif




void KeyFactoryInitializer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void KeyFactoryInitializer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeyFactoryInitializer", "Init");
    java_register_method("KeyFactoryInitializer", "init", (void*) KeyFactoryInitializer_initMethod);
}

static void KeyFactoryInitializer_initFields(KeyFactoryInitializer* this) {
    this->logUtil = LogUtil_getInstance();
}

void KeyFactoryInitializer_init(KeyFactoryInitializer* this) {
    KeyFactoryInitializer_register();
    Init_init(&this->base);
    KeyFactoryInitializer_initFields(this);
}

KeyFactoryInitializer* KeyFactoryInitializer_new(void) {
    KeyFactoryInitializer* this = java_object_alloc(sizeof(KeyFactoryInitializer), "KeyFactoryInitializer");
    KeyFactoryInitializer_init(this);
    return this;
}


void KeyFactoryInitializer_initMethod(KeyFactoryInitializer* this) {
        LogUtil_putF(this->logUtil, this->base.commonStrings->START, this, this->base.commonStrings->INIT);
        SmallIntegerSingletonFactory_initWithRange(SmallIntegerSingletonFactory_getInstance(), 0x2D0, 6);
}

