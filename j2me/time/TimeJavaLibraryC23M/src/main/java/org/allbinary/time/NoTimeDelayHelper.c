// Generated Code Do Not Modify
#include "org/allbinary/time/NoTimeDelayHelper.h"
#include "org/allbinary/time/TimeDelayHelper.h"


NoTimeDelayHelper* NoTimeDelayHelper_SINGLETON;






void NoTimeDelayHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoTimeDelayHelper_SINGLETON = NoTimeDelayHelper_new();
}

void NoTimeDelayHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoTimeDelayHelper", "TimeDelayHelper");
    java_register_method("NoTimeDelayHelper", "isTimeTNT", (void*) NoTimeDelayHelper_isTimeTNT);
    java_register_method("NoTimeDelayHelper", "isTimeSinceTNT", (void*) NoTimeDelayHelper_isTimeSinceTNT);
    java_register_method("NoTimeDelayHelper", "isTime", (void*) NoTimeDelayHelper_isTime);
    java_register_method("NoTimeDelayHelper", "isTimeSince", (void*) NoTimeDelayHelper_isTimeSince);
}


void NoTimeDelayHelper_init(NoTimeDelayHelper* this) {
    NoTimeDelayHelper_register();
        TimeDelayHelper_init(&this->base, 0);
}

NoTimeDelayHelper* NoTimeDelayHelper_new(void) {
    NoTimeDelayHelper* this = java_object_alloc(sizeof(NoTimeDelayHelper), "NoTimeDelayHelper");
    NoTimeDelayHelper_init(this);
    return this;
}


bool NoTimeDelayHelper_isTimeTNT(NoTimeDelayHelper* this) {
        return true;
}


bool NoTimeDelayHelper_isTimeSinceTNT(NoTimeDelayHelper* this, int32_t delay) {
        return true;
}


bool NoTimeDelayHelper_isTime(NoTimeDelayHelper* this, int64_t currentTime) {
        return true;
}


bool NoTimeDelayHelper_isTimeSince(NoTimeDelayHelper* this, int32_t delay, int64_t currentTime) {
        return true;
}

