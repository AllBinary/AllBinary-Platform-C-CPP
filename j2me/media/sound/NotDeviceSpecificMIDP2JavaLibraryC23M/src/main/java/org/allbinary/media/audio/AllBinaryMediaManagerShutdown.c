// Generated Code Do Not Modify
#include "org/allbinary/media/audio/AllBinaryMediaManagerShutdown.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"


static AllBinaryMediaManagerShutdown* AllBinaryMediaManagerShutdown_instance;


void AllBinaryMediaManagerShutdown_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryMediaManagerShutdown_instance = AllBinaryMediaManagerShutdown_new();
}

void AllBinaryMediaManagerShutdown_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryMediaManagerShutdown", nullptr);
}

void AllBinaryMediaManagerShutdown_init(AllBinaryMediaManagerShutdown* this) {
    AllBinaryMediaManagerShutdown_register();
}

AllBinaryMediaManagerShutdown* AllBinaryMediaManagerShutdown_new(void) {
    AllBinaryMediaManagerShutdown* this = java_object_alloc(sizeof(AllBinaryMediaManagerShutdown), "AllBinaryMediaManagerShutdown");
    AllBinaryMediaManagerShutdown_init(this);
    return this;
}


// throws Exception
void AllBinaryMediaManagerShutdown_shutdown(SoundsFactoryInterface* soundsFactoryInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonStrings->START, (AllBinaryMediaManagerShutdown_staticInit(), AllBinaryMediaManagerShutdown_instance), "shutdown");
        AllBinaryMediaManager_shutdown(soundsFactoryInterface);
}

