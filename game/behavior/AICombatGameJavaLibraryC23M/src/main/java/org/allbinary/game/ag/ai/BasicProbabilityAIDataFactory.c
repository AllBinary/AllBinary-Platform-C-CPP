// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/BasicProbabilityAIDataFactory.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/time/NoTimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/InputProbability.h"




void BasicProbabilityAIDataFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicProbabilityAIDataFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicProbabilityAIDataFactory", nullptr);
    java_register_method("BasicProbabilityAIDataFactory", "getInstance", (void*) BasicProbabilityAIDataFactory_getInstance);
}

void BasicProbabilityAIDataFactory_init(BasicProbabilityAIDataFactory* this) {
    BasicProbabilityAIDataFactory_register();
}

BasicProbabilityAIDataFactory* BasicProbabilityAIDataFactory_new(void) {
    BasicProbabilityAIDataFactory* this = java_object_alloc(sizeof(BasicProbabilityAIDataFactory), "BasicProbabilityAIDataFactory");
    BasicProbabilityAIDataFactory_init(this);
    return this;
}


ABHashtable* BasicProbabilityAIDataFactory_getInstance(BasicProbabilityAIDataFactory* this) {
        int32_t** likelyhoodIntegerArray = ((int32_t**) java_array_new2(sizeof(int32_t), (Canvas_staticInit(), Canvas_KEY_NUM9) + 1, 2));
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_UP)][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_UP)][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_DOWN)][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_DOWN)][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 14);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_LEFT)][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 14);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_LEFT)][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 18);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_RIGHT)][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 18);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_RIGHT)][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 22);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM7)][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 22);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM7)][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 26);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM9)][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 26);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM9)][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 30);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM1)][0] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 30);
        likelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM1)][1] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 40);
        int32_t* repeatLikelyhoodIntegerArray = ((int32_t*) java_array_new(sizeof(int32_t), (Canvas_staticInit(), Canvas_KEY_NUM9) + 1));
        repeatLikelyhoodIntegerArray[(Canvas_staticInit(), Canvas_UP)] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[(Canvas_staticInit(), Canvas_DOWN)] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[(Canvas_staticInit(), Canvas_LEFT)] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[(Canvas_staticInit(), Canvas_RIGHT)] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM7)] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM9)] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0);
        repeatLikelyhoodIntegerArray[(Canvas_staticInit(), Canvas_KEY_NUM1)] = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10);
        InputProbability* inputProbability = InputProbability_new(likelyhoodIntegerArray, repeatLikelyhoodIntegerArray, 42, (NoTimeDelayHelper_staticInit(), NoTimeDelayHelper_SINGLETON));
        return InputProbability_toHashtable(inputProbability);
}

