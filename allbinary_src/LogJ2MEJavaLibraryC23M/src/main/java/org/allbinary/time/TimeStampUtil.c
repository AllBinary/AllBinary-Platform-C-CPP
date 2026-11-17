// Generated Code Do Not Modify
#include "org/allbinary/time/TimeStampUtil.h"


static TimeStampUtil* TimeStampUtil_instance;




void TimeStampUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TimeStampUtil_instance = TimeStampUtil_new();
}

void TimeStampUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TimeStampUtil", nullptr);
    java_register_method("TimeStampUtil", "getAsString", (void*) TimeStampUtil_getAsString);
}


TimeStampUtil* TimeStampUtil_getInstance(void) {
        return (TimeStampUtil_staticInit(), TimeStampUtil_instance);
}


void TimeStampUtil_init(TimeStampUtil* this) {
    TimeStampUtil_register();
}

TimeStampUtil* TimeStampUtil_new(void) {
    TimeStampUtil* this = java_object_alloc(sizeof(TimeStampUtil), "TimeStampUtil");
    TimeStampUtil_init(this);
    return this;
}


const char* TimeStampUtil_getAsString(TimeStampUtil* this) {
        Calendar* calendar = Calendar_getInstance();
        Date* date = Calendar_getTime(calendar);
        return java_string_of(date);
}

