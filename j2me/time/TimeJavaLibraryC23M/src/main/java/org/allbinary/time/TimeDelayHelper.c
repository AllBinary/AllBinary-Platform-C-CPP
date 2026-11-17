// Generated Code Do Not Modify
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"




















void TimeDelayHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TimeDelayHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TimeDelayHelper", nullptr);
    java_register_method("TimeDelayHelper", "isTimeTNT", (void*) TimeDelayHelper_isTimeTNT);
    java_register_method("TimeDelayHelper", "isTimeSinceTNT", (void*) TimeDelayHelper_isTimeSinceTNT);
    java_register_method("TimeDelayHelper", "isTime", (void*) TimeDelayHelper_isTime);
    java_register_method("TimeDelayHelper", "isTimeWithoutReset", (void*) TimeDelayHelper_isTimeWithoutReset);
    java_register_method("TimeDelayHelper", "isTimeSince", (void*) TimeDelayHelper_isTimeSince);
    java_register_method("TimeDelayHelper", "getElapsedTNT", (void*) TimeDelayHelper_getElapsedTNT);
    java_register_method("TimeDelayHelper", "getElapsed", (void*) TimeDelayHelper_getElapsed);
    java_register_method("TimeDelayHelper", "isElapsed", (void*) TimeDelayHelper_isElapsed);
    java_register_method("TimeDelayHelper", "isElapsedTNT", (void*) TimeDelayHelper_isElapsedTNT);
    java_register_method("TimeDelayHelper", "setStartTime", (void*) TimeDelayHelper_setStartTime);
    java_register_method("TimeDelayHelper", "getStartTime", (void*) TimeDelayHelper_getStartTime);
    java_register_method("TimeDelayHelper", "setStartTimeTNT", (void*) TimeDelayHelper_setStartTimeTNT);
    java_register_method("TimeDelayHelper", "pause", (void*) TimeDelayHelper_pause);
    java_register_method("TimeDelayHelper", "resume", (void*) TimeDelayHelper_resume);
    java_register_method("TimeDelayHelper", "toStringAt", (void*) TimeDelayHelper_toStringAt);
    java_register_method("TimeDelayHelper", "toString", (void*) TimeDelayHelper_toString);
}

static void TimeDelayHelper_initFields(TimeDelayHelper* this) {
    this->startTime = ((int64_t) (-1));
    this->elapsedTimeAtPause = (Long_staticInit(), Long_MIN_VALUE);
    
}


void TimeDelayHelper_init(TimeDelayHelper* this, int32_t delay) {
    TimeDelayHelper_register();
    TimeDelayHelper_initFields(this);
        this->delay = delay;
        TimeDelayHelper_setStartTimeTNT(this);
}

TimeDelayHelper* TimeDelayHelper_new(int32_t delay) {
    TimeDelayHelper* this = java_object_alloc(sizeof(TimeDelayHelper), "TimeDelayHelper");
    TimeDelayHelper_init(this, delay);
    return this;
}


bool TimeDelayHelper_isTimeTNT(TimeDelayHelper* this) {
        int64_t currentTime = java_current_time_millis();
        if (currentTime - this->startTime > ((int64_t) this->delay)) {
            this->startTime = currentTime;
            return true;
        }
        return false;
}


bool TimeDelayHelper_isTimeSinceTNT(TimeDelayHelper* this, int32_t delay) {
        int64_t currentTime = java_current_time_millis();
        if (currentTime - this->startTime > ((int64_t) delay)) {
            this->startTime = currentTime;
            return true;
        }
        return false;
}


bool TimeDelayHelper_isTime(TimeDelayHelper* this, int64_t currentTime) {
        if (currentTime - this->startTime > ((int64_t) this->delay)) {
            this->startTime = currentTime;
            return true;
        }
        return false;
}


bool TimeDelayHelper_isTimeWithoutReset(TimeDelayHelper* this, int64_t currentTime) {
        if (currentTime - this->startTime > ((int64_t) this->delay)) {
            return true;
        }
        return false;
}


bool TimeDelayHelper_isTimeSince(TimeDelayHelper* this, int32_t delay, int64_t currentTime) {
        if (currentTime - this->startTime > ((int64_t) this->delay)) {
            this->startTime = currentTime;
            return true;
        }
        return false;
}


int64_t TimeDelayHelper_getElapsedTNT(TimeDelayHelper* this) {
        return java_current_time_millis() - this->startTime;
}


int64_t TimeDelayHelper_getElapsed(TimeDelayHelper* this, int64_t currentTime) {
        return currentTime - this->startTime;
}


bool TimeDelayHelper_isElapsed(TimeDelayHelper* this, int64_t currentTime, int64_t time) {
        if (TimeDelayHelper_getElapsed(this, currentTime) > time) {
            return true;
        } else {
            return false;
        }
}


bool TimeDelayHelper_isElapsedTNT(TimeDelayHelper* this, int64_t time) {
        if (TimeDelayHelper_getElapsedTNT(this) > time) {
            return true;
        } else {
            return false;
        }
}


void TimeDelayHelper_setStartTime(TimeDelayHelper* this, int64_t startTime) {
        this->startTime = startTime;
}


int64_t TimeDelayHelper_getStartTime(TimeDelayHelper* this) {
        return this->startTime;
}


void TimeDelayHelper_setStartTimeTNT(TimeDelayHelper* this) {
        this->startTime = java_current_time_millis();
}


void TimeDelayHelper_pause(TimeDelayHelper* this) {
        this->elapsedTimeAtPause = TimeDelayHelper_getElapsedTNT(this);
        this->startTime = (Long_staticInit(), Long_MAX_VALUE);
}


bool TimeDelayHelper_resume(TimeDelayHelper* this) {
        if (this->elapsedTimeAtPause != (Long_staticInit(), Long_MIN_VALUE)) {
            this->startTime = java_current_time_millis() + this->elapsedTimeAtPause;
            this->elapsedTimeAtPause = (Long_staticInit(), Long_MIN_VALUE);
            TimeDelayHelper_setStartTimeTNT(this);
            return true;
        }
        return false;
}


const char* TimeDelayHelper_toStringAt(TimeDelayHelper* this, int64_t currentTime) {
        int64_t elapsed = TimeDelayHelper_getElapsed(this, currentTime);
        if (elapsed > 0LL) {
            CommonLabels* commonLabels = CommonLabels_getInstance();
            const char* elapsedAsString = java_string_of(elapsed);
            return java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendlong(StringMaker_append(StringMaker_appendlong(StringMaker_append(StringMaker_new(), commonLabels->START), this->startTime), commonLabels->CURRENT), currentTime), commonLabels->ELAPSED), elapsedAsString));
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}


const char* TimeDelayHelper_toString(TimeDelayHelper* this) {
        int64_t currentTime = java_current_time_millis();
        int64_t elapsed = TimeDelayHelper_getElapsed(this, currentTime);
        if (elapsed > 0LL) {
            CommonLabels* commonLabels = CommonLabels_getInstance();
            const char* elapsedAsString = java_string_of(elapsed);
            return java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendlong(StringMaker_append(StringMaker_appendlong(StringMaker_append(StringMaker_new(), commonLabels->START), this->startTime), commonLabels->CURRENT), currentTime), commonLabels->ELAPSED), elapsedAsString));
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}

