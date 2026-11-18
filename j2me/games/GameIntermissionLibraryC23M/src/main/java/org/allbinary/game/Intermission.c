// Generated Code Do Not Modify
#include "org/allbinary/game/Intermission.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/game/IntermissionInterface.h"
#include "org/allbinary/game/NullIntermissionEnableListener.h"
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif








void Intermission_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Intermission_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Intermission", nullptr);
    java_register_method("Intermission", "setListener", (void*) Intermission_setListener);
    java_register_method("Intermission", "getTimeDelayHelper", (void*) Intermission_getTimeDelayHelper);
    java_register_method("Intermission", "setEnabled", (void*) Intermission_setEnabled);
    java_register_method("Intermission", "isEnabled", (void*) Intermission_isEnabled);
}

static void Intermission_initFields(Intermission* this) {
    this->enabled = false;
    this->timeElapsedHelper = TimeDelayHelper_new(0);
    this->intermissionEnableListener = NullIntermissionEnableListener_getInstance();
}


void Intermission_init(Intermission* this) {
    Intermission_register();
    Intermission_initFields(this);
}

Intermission* Intermission_new(void) {
    Intermission* this = java_object_alloc(sizeof(Intermission), "Intermission");
    Intermission_init(this);
    return this;
}


void Intermission_setListener(Intermission* this, IntermissionEnableListenerInterface* enableListener) {
        this->intermissionEnableListener = enableListener;
}


TimeDelayHelper* Intermission_getTimeDelayHelper(Intermission* this) {
        return this->timeElapsedHelper;
}


void Intermission_setEnabled(Intermission* this, bool enabled) {
        this->enabled = enabled;
        if (Intermission_isEnabled(this)) {
            TimeDelayHelper_setStartTimeTNT(Intermission_getTimeDelayHelper(this));
        }
        IntermissionEnableListenerInterface_notifyIntermission(this->intermissionEnableListener, enabled);
}


bool Intermission_isEnabled(Intermission* this) {
        return this->enabled;
}

