// Generated Code Do Not Modify
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/input/MotionJ2MEGameInputMapping.h"


static PlatformInputMappingFactory* PlatformInputMappingFactory_instance;



void PlatformInputMappingFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlatformInputMappingFactory_instance = PlatformInputMappingFactory_new();
}

void PlatformInputMappingFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformInputMappingFactory", nullptr);
    java_register_method("PlatformInputMappingFactory", "getPersistentInputMappingInstance", (void*) PlatformInputMappingFactory_getPersistentInputMappingInstance);
}

static void PlatformInputMappingFactory_initFields(PlatformInputMappingFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->inputToGameKeyMapping = PersistentInputMapping_getNullInstance();
}

void PlatformInputMappingFactory_init(PlatformInputMappingFactory* this) {
    PlatformInputMappingFactory_register();
    PlatformInputMappingFactory_initFields(this);
}

PlatformInputMappingFactory* PlatformInputMappingFactory_new(void) {
    PlatformInputMappingFactory* this = java_object_alloc(sizeof(PlatformInputMappingFactory), "PlatformInputMappingFactory");
    PlatformInputMappingFactory_init(this);
    return this;
}


PlatformInputMappingFactory* PlatformInputMappingFactory_getInstance(void) {
        return (PlatformInputMappingFactory_staticInit(), PlatformInputMappingFactory_instance);
}


PersistentInputMapping* PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory* this) {
        JAVA_TRY {
            if (this->inputToGameKeyMapping == PersistentInputMapping_getNullInstance()) {
                this->inputToGameKeyMapping = MotionJ2MEGameInputMapping_new();
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
        } JAVA_END_TRY;
        return this->inputToGameKeyMapping;
}

