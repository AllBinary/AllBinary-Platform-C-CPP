// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/InputProbability.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


int32_t InputProbability_INPUT_PROBABILITY;







void InputProbability_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InputProbability_INPUT_PROBABILITY = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
}

void InputProbability_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputProbability", nullptr);
    java_register_method("InputProbability", "getLikelyhoodIntegerArray", (void*) InputProbability_getLikelyhoodIntegerArray);
    java_register_method("InputProbability", "getRepeatLikelyhoodIntegerArray", (void*) InputProbability_getRepeatLikelyhoodIntegerArray);
    java_register_method("InputProbability", "getMax", (void*) InputProbability_getMax);
    java_register_method("InputProbability", "getTimeDelayHelper", (void*) InputProbability_getTimeDelayHelper);
    java_register_method("InputProbability", "toHashtable", (void*) InputProbability_toHashtable);
}

static void InputProbability_initFields(InputProbability* this) {
    
    
    
    
}


void InputProbability_init(InputProbability* this, int32_t** likelyhoodIntegerArray, int32_t* repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper) {
    InputProbability_register();
    InputProbability_initFields(this);
        this->likelyhoodIntegerArray = likelyhoodIntegerArray;
        this->repeatLikelyhoodIntegerArray = repeatLikelyhoodIntegerArray;
        this->max = max;
        this->timeDelayHelper = timeDelayHelper;
}

InputProbability* InputProbability_new(int32_t** likelyhoodIntegerArray, int32_t* repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper) {
    InputProbability* this = java_object_alloc(sizeof(InputProbability), "InputProbability");
    InputProbability_init(this, likelyhoodIntegerArray, repeatLikelyhoodIntegerArray, max, timeDelayHelper);
    return this;
}


int32_t** InputProbability_getLikelyhoodIntegerArray(InputProbability* this) {
        return this->likelyhoodIntegerArray;
}


int32_t* InputProbability_getRepeatLikelyhoodIntegerArray(InputProbability* this) {
        return this->repeatLikelyhoodIntegerArray;
}


int32_t InputProbability_getMax(InputProbability* this) {
        return this->max;
}


TimeDelayHelper* InputProbability_getTimeDelayHelper(InputProbability* this) {
        return this->timeDelayHelper;
}


ABHashtable* InputProbability_toHashtable(InputProbability* this) {
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        Hashtable_put(hashtable, (InputProbability_staticInit(), InputProbability_INPUT_PROBABILITY), this);
        return hashtable;
}

