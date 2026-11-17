// Generated Code Do Not Modify
#include "org/allbinary/math/AngleIncrementInfoFactory.h"
#include "org/allbinary/math/AngleIncrementInfo.h"
#include "org/allbinary/math/AngleFactory.h"


static AngleIncrementInfoFactory* AngleIncrementInfoFactory_instance;



void AngleIncrementInfoFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AngleIncrementInfoFactory_instance = AngleIncrementInfoFactory_new();
}

void AngleIncrementInfoFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AngleIncrementInfoFactory", nullptr);
    java_register_method("AngleIncrementInfoFactory", "getAt", (void*) AngleIncrementInfoFactory_getAt);
}

static void AngleIncrementInfoFactory_initFields(AngleIncrementInfoFactory* this) {
    this->angleIncrementInfo = ((AngleIncrementInfo**) java_array_new(sizeof(AngleIncrementInfo*), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE)));
}

void AngleIncrementInfoFactory_init(AngleIncrementInfoFactory* this) {
    AngleIncrementInfoFactory_register();
    AngleIncrementInfoFactory_initFields(this);
}

AngleIncrementInfoFactory* AngleIncrementInfoFactory_new(void) {
    AngleIncrementInfoFactory* this = java_object_alloc(sizeof(AngleIncrementInfoFactory), "AngleIncrementInfoFactory");
    AngleIncrementInfoFactory_init(this);
    return this;
}


AngleIncrementInfoFactory* AngleIncrementInfoFactory_getInstance(void) {
        return (AngleIncrementInfoFactory_staticInit(), AngleIncrementInfoFactory_instance);
}


AngleIncrementInfo* AngleIncrementInfoFactory_getAt(AngleIncrementInfoFactory* this, int16_t angleIncrement) {
        int32_t halfAngleIncrement = (((int32_t) angleIncrement) >> 1);
        AngleIncrementInfo* angleIncrementInfo = nullptr;
        AngleIncrementInfo* angleIncrementInfoCanBeNull = this->angleIncrementInfo[halfAngleIncrement];
        if (angleIncrementInfoCanBeNull == nullptr) {
            angleIncrementInfo = AngleIncrementInfo_new(angleIncrement);
            this->angleIncrementInfo[halfAngleIncrement] = angleIncrementInfo;
            return angleIncrementInfo;
        } else {
            angleIncrementInfo = angleIncrementInfoCanBeNull;
        }
        return angleIncrementInfo;
}

