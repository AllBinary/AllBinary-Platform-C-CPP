// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/time/HudTimer.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#if __has_include("org/allbinary/logic/math/PrimitiveLongSingleton.h")
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#endif











void HudTimer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HudTimer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HudTimer", nullptr);
    java_register_method("HudTimer", "start", (void*) HudTimer_start);
    java_register_method("HudTimer", "get", (void*) HudTimer_get);
    java_register_method("HudTimer", "update", (void*) HudTimer_update);
    java_register_method("HudTimer", "reduce", (void*) HudTimer_reduce);
    java_register_method("HudTimer", "add", (void*) HudTimer_add);
    java_register_method("HudTimer", "getTimeChars", (void*) HudTimer_getTimeChars);
    java_register_method("HudTimer", "getCurrentTotalDigits", (void*) HudTimer_getCurrentTotalDigits);
}

static void HudTimer_initFields(HudTimer* this) {
    this->startTime = ((int64_t) (-1));
    this->hundredthTime = 0;
    
    this->modifier = 0;
    this->hundrethsString = PrimitiveLongSingleton_getInstance()->ZERO;
    this->totalDigits = 1;
    
    this->MAX = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'L', u'O', u'L' }) / sizeof(uint16_t), (uint16_t[]){ u'L', u'O', u'L' }));
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void HudTimer_init(HudTimer* this, int32_t maxTime) {
    HudTimer_register();
    HudTimer_initFields(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(maxTime);
        this->maxTime = ((int64_t) maxTime);
}

HudTimer* HudTimer_new(int32_t maxTime) {
    HudTimer* this = java_object_alloc(sizeof(HudTimer), "HudTimer");
    HudTimer_init(this, maxTime);
    return this;
}


void HudTimer_start(HudTimer* this) {
        this->hundredthTime = 0LL;
        this->startTime = this->gameTickTimeDelayHelper->startTime;
}


int64_t HudTimer_get(HudTimer* this) {
        return this->hundredthTime;
}


void HudTimer_update(HudTimer* this) {
        int64_t lastLowerTime = this->hundredthTime;
        int64_t currentTime = ((this->modifier + this->gameTickTimeDelayHelper->startTime) - this->startTime);
        if (currentTime < 0LL) {
            currentTime = 0LL;
        }
        this->hundredthTime = currentTime / 100LL;
        if (this->hundredthTime >= this->maxTime) {
            if (this->startTime > 0LL) {
                this->hundrethsString = this->MAX;
            }
        } else if (lastLowerTime != this->hundredthTime) {
            this->hundrethsString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, ((int32_t) this->hundredthTime));
            this->totalDigits = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
        }
}


void HudTimer_reduce(HudTimer* this, int32_t value) {
        this->modifier -= ((int64_t) value);
}


void HudTimer_add(HudTimer* this, int32_t value) {
        this->modifier += ((int64_t) value);
}


uint16_t* HudTimer_getTimeChars(HudTimer* this) {
        return this->hundrethsString;
}


int32_t HudTimer_getCurrentTotalDigits(HudTimer* this) {
        return this->totalDigits;
}

