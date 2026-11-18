// Generated Code Do Not Modify
#include "org/allbinary/canvas/BaseGameStatistics.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#if __has_include("org/allbinary/logic/math/ScaleFactorFactory.h")
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif















void BaseGameStatistics_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseGameStatistics_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseGameStatistics", nullptr);
    java_register_method("BaseGameStatistics", "init", (void*) BaseGameStatistics_initMethod);
    java_register_method("BaseGameStatistics", "add", (void*) BaseGameStatistics_add);
    java_register_method("BaseGameStatistics", "process", (void*) BaseGameStatistics_process);
    java_register_method("BaseGameStatistics", "nextFrame", (void*) BaseGameStatistics_nextFrame);
    java_register_method("BaseGameStatistics", "nextRefresh", (void*) BaseGameStatistics_nextRefresh);
    java_register_method("BaseGameStatistics", "getRefreshRate", (void*) BaseGameStatistics_getRefreshRate);
    java_register_method("BaseGameStatistics", "getTimeDelayHelper", (void*) BaseGameStatistics_getTimeDelayHelper);
    java_register_method("BaseGameStatistics", "to2DCharArray", (void*) BaseGameStatistics_to2DCharArray);
    java_register_method("BaseGameStatistics", "toStringArray", (void*) BaseGameStatistics_toStringArray);
    java_register_method("BaseGameStatistics", "toStringAt", (void*) BaseGameStatistics_toStringAt);
    java_register_method("BaseGameStatistics", "toString", (void*) BaseGameStatistics_toString);
}

static void BaseGameStatistics_initFields(BaseGameStatistics* this) {
    this->timeDelayHelper = TimeDelayHelper_new((Integer_staticInit(), Integer_MAX_VALUE));
    this->updateDelayHelper = TimeDelayHelper_new(2000);
    this->totalRefreshes = 0;
    this->totalFrames = 0;
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->DEFAULT_SCALE_FACTOR = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_FACTOR;
    this->NOT = "Not enough Time to Calculate";
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
    this->STRING_ARRAY = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ " Total Time: ", this->EMPTY_STRING, " Total Frames: ", this->EMPTY_STRING, " Frames/10 Sec: ", this->EMPTY_STRING, " Total Paints: ", this->EMPTY_STRING, " Paints/10 Sec: ", this->EMPTY_STRING }) / sizeof(const char*), (const char*[]){ " Total Time: ", this->EMPTY_STRING, " Total Frames: ", this->EMPTY_STRING, " Frames/10 Sec: ", this->EMPTY_STRING, " Total Paints: ", this->EMPTY_STRING, " Paints/10 Sec: ", this->EMPTY_STRING }));
    this->SPACE_CHAR = u' ';
    this->PLUS_CHAR = u'+';
    this->X_CHAR = u'X';
    this->CHAR_ARRAY = ((uint16_t**) java_array_from(sizeof(uint16_t*), sizeof((uint16_t*[]){ ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'F', u'r', u'a', u'm', u'e', u's', u'/', u'1', u'0', u' ', u'S', u'e', u'c', u':' }) / sizeof(uint16_t), (uint16_t[]){ u'F', u'r', u'a', u'm', u'e', u's', u'/', u'1', u'0', u' ', u'S', u'e', u'c', u':' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'X', u'X' }) / sizeof(uint16_t), (uint16_t[]){ u'X', u'X' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'P', u'a', u'i', u'n', u't', u's', u'/', u'1', u'0', u' ', u'S', u'e', u'c', u':' }) / sizeof(uint16_t), (uint16_t[]){ u'P', u'a', u'i', u'n', u't', u's', u'/', u'1', u'0', u' ', u'S', u'e', u'c', u':' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'X', u'X' }) / sizeof(uint16_t), (uint16_t[]){ u'X', u'X' })) }) / sizeof(uint16_t*), (uint16_t*[]){ ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'F', u'r', u'a', u'm', u'e', u's', u'/', u'1', u'0', u' ', u'S', u'e', u'c', u':' }) / sizeof(uint16_t), (uint16_t[]){ u'F', u'r', u'a', u'm', u'e', u's', u'/', u'1', u'0', u' ', u'S', u'e', u'c', u':' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'X', u'X' }) / sizeof(uint16_t), (uint16_t[]){ u'X', u'X' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'P', u'a', u'i', u'n', u't', u's', u'/', u'1', u'0', u' ', u'S', u'e', u'c', u':' }) / sizeof(uint16_t), (uint16_t[]){ u'P', u'a', u'i', u'n', u't', u's', u'/', u'1', u'0', u' ', u'S', u'e', u'c', u':' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'X', u'X' }) / sizeof(uint16_t), (uint16_t[]){ u'X', u'X' })) }));
    this->primitiveLongSingleton = PrimitiveLongSingleton_getInstance();
}


void BaseGameStatistics_init(BaseGameStatistics* this) {
    BaseGameStatistics_register();
    BaseGameStatistics_initFields(this);
}

BaseGameStatistics* BaseGameStatistics_new(void) {
    BaseGameStatistics* this = java_object_alloc(sizeof(BaseGameStatistics), "BaseGameStatistics");
    BaseGameStatistics_init(this);
    return this;
}


void BaseGameStatistics_initMethod(BaseGameStatistics* this) {
        TimeDelayHelper_setStartTimeTNT(this->timeDelayHelper);
        this->totalRefreshes = 0LL;
        this->totalFrames = 0LL;
}


void BaseGameStatistics_add(BaseGameStatistics* this, const char* string) {
}


void BaseGameStatistics_process(BaseGameStatistics* this) {
}


void BaseGameStatistics_nextFrame(BaseGameStatistics* this) {
        this->totalFrames++;
}


void BaseGameStatistics_nextRefresh(BaseGameStatistics* this) {
        this->totalRefreshes++;
}


int16_t BaseGameStatistics_getRefreshRate(BaseGameStatistics* this) {
        int64_t elapsed = TimeDelayHelper_getElapsed(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime);
        if (elapsed > 1LL) {
            int16_t time = ((int16_t) (this->totalRefreshes / (elapsed >> this->DEFAULT_SCALE_FACTOR)));
            return time;
        } else {
            return 0;
        }
}


TimeDelayHelper* BaseGameStatistics_getTimeDelayHelper(BaseGameStatistics* this) {
        return this->timeDelayHelper;
}


uint16_t** BaseGameStatistics_to2DCharArray(BaseGameStatistics* this) {
        int64_t totalTime = TimeDelayHelper_getElapsed(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime);
        totalTime = (totalTime >> this->DEFAULT_SCALE_FACTOR);
        if (totalTime > 0LL && TimeDelayHelper_isTime(this->updateDelayHelper, this->gameTickTimeDelayHelper->startTime)) {
            int32_t framesPerSec = ((int32_t) (this->totalFrames / totalTime));
            if (framesPerSec < 10) {
                this->CHAR_ARRAY[1][0] = this->SPACE_CHAR;
                this->CHAR_ARRAY[1][1] = this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[framesPerSec];
            } else if (framesPerSec < 100) {
                int32_t tens = framesPerSec / 10;
                int32_t removeTens = tens * 10;
                this->CHAR_ARRAY[1][0] = this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[tens];
                this->CHAR_ARRAY[1][1] = this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[framesPerSec - removeTens];
            } else {
                this->CHAR_ARRAY[1][0] = this->PLUS_CHAR;
                this->CHAR_ARRAY[1][1] = this->PLUS_CHAR;
            }
            int32_t refreshesPerSec = ((int32_t) (this->totalRefreshes / totalTime));
            if (refreshesPerSec < 10) {
                this->CHAR_ARRAY[3][0] = this->X_CHAR;
                this->CHAR_ARRAY[3][1] = this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[refreshesPerSec];
            } else if (refreshesPerSec < 100) {
                int32_t tens = refreshesPerSec / 10;
                int32_t removeTens = tens * 10;
                this->CHAR_ARRAY[3][0] = this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[refreshesPerSec / 10];
                this->CHAR_ARRAY[3][1] = this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[refreshesPerSec - removeTens];
            } else {
                this->CHAR_ARRAY[3][0] = this->PLUS_CHAR;
                this->CHAR_ARRAY[3][1] = this->PLUS_CHAR;
            }
        }
        return this->CHAR_ARRAY;
}


const char** BaseGameStatistics_toStringArray(BaseGameStatistics* this) {
        int64_t totalTime = TimeDelayHelper_getElapsed(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime);
        totalTime = (totalTime / 10000LL);
        if (totalTime > 0LL) {
            this->STRING_ARRAY[1] = java_string_of(totalTime);
            this->STRING_ARRAY[3] = java_string_of(this->totalFrames);
            this->STRING_ARRAY[5] = java_string_of(this->totalFrames / totalTime);
            this->STRING_ARRAY[7] = java_string_of(this->totalRefreshes);
            this->STRING_ARRAY[9] = java_string_of(this->totalRefreshes / totalTime);
        } else {
            const char* string = this->EMPTY_STRING;
            this->STRING_ARRAY[1] = string;
            this->STRING_ARRAY[3] = string;
            this->STRING_ARRAY[5] = string;
            this->STRING_ARRAY[7] = string;
            this->STRING_ARRAY[9] = string;
        }
        return this->STRING_ARRAY;
}


const char* BaseGameStatistics_toStringAt(BaseGameStatistics* this, int64_t totalTime) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->STRING_ARRAY[0]);
        StringMaker_appendlong(stringBuffer, totalTime);
        StringMaker_append(stringBuffer, this->STRING_ARRAY[2]);
        StringMaker_appendlong(stringBuffer, this->totalFrames);
        StringMaker_append(stringBuffer, this->STRING_ARRAY[4]);
        StringMaker_appendlong(stringBuffer, this->totalFrames / totalTime);
        if (this->totalRefreshes > 0LL) {
            StringMaker_append(stringBuffer, this->STRING_ARRAY[6]);
            StringMaker_appendlong(stringBuffer, this->totalRefreshes);
            StringMaker_append(stringBuffer, this->STRING_ARRAY[8]);
            StringMaker_appendlong(stringBuffer, this->totalRefreshes / totalTime);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        }
        return java_string_of(stringBuffer);
}


const char* BaseGameStatistics_toString(BaseGameStatistics* this) {
        int64_t totalTime = TimeDelayHelper_getElapsed(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime);
        totalTime = (totalTime / 1000LL);
        if (totalTime > 0LL) {
            return BaseGameStatistics_toStringAt(this, totalTime);
        } else {
            return this->NOT;
        }
}

