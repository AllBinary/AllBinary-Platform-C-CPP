// Generated Code Do Not Modify
#include "org/allbinary/input/AllBinarySensor.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/AllBinarySensorListener.h"


AllBinarySensor* AllBinarySensor_NULL_ALLBINARY_SENSOR;
static int32_t AllBinarySensor_max = 100;









void AllBinarySensor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinarySensor_NULL_ALLBINARY_SENSOR = AllBinarySensor_new();
}

void AllBinarySensor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinarySensor", nullptr);
    java_register_method("AllBinarySensor", "init", (void*) AllBinarySensor_initMethod);
    java_register_method("AllBinarySensor", "update", (void*) AllBinarySensor_update);
    java_register_method("AllBinarySensor", "getId", (void*) AllBinarySensor_getId);
    java_register_method("AllBinarySensor", "shutdown", (void*) AllBinarySensor_shutdown);
    java_register_method("AllBinarySensor", "onSensorChange", (void*) AllBinarySensor_onSensorChange);
}

static void AllBinarySensor_initFields(AllBinarySensor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void AllBinarySensor_init(AllBinarySensor* this) {
    AllBinarySensor_register();
    AllBinarySensor_initFields(this);
}

AllBinarySensor* AllBinarySensor_new(void) {
    AllBinarySensor* this = java_object_alloc(sizeof(AllBinarySensor), "AllBinarySensor");
    AllBinarySensor_init(this);
    return this;
}


void AllBinarySensor_initMethod(AllBinarySensor* this) {
}


// throws Exception
void AllBinarySensor_update(AllBinarySensor* this) {
}


void AllBinarySensor_setMax(int32_t max) {
        AllBinarySensor_max = max;
}


int32_t AllBinarySensor_getMax(void) {
        return AllBinarySensor_max;
}


int32_t AllBinarySensor_getId(AllBinarySensor* this) {
        return AllBinarySensor_getMax();
}


void AllBinarySensor_shutdown(AllBinarySensor* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "shutdown");
}


void AllBinarySensor_onSensorChange(AllBinarySensor* this) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}

