// Generated Code Do Not Modify
#include "org/allbinary/input/AllBinarySensorManager.h"
#include "org/allbinary/input/accelerometer/AccelerometerSensorFactory.h"
#include "org/allbinary/input/gyro/GyroSensorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* AllBinarySensorManager_instance;






void AllBinarySensorManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinarySensorManager_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void AllBinarySensorManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinarySensorManager", nullptr);
    java_register_method("AllBinarySensorManager", "init", (void*) AllBinarySensorManager_initMethod);
    java_register_method("AllBinarySensorManager", "getSensorNamesList", (void*) AllBinarySensorManager_getSensorNamesList);
    java_register_method("AllBinarySensorManager", "shutdown", (void*) AllBinarySensorManager_shutdown);
}

static void AllBinarySensorManager_initFields(AllBinarySensorManager* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->ORIENTATION_SENSOR_INPUT = "Orientation Sensor Input";
    this->ORIENTATION_TYPE = "Orientation Type";
    this->list = BasicArrayListD_new();
}


AllBinarySensorManager* AllBinarySensorManager_getInstance(void) {
        if ((AllBinarySensorManager_staticInit(), AllBinarySensorManager_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            AllBinarySensorManager_instance = AllBinarySensorManager_new();
        }
        return ((AllBinarySensorManager*) (AllBinarySensorManager_staticInit(), AllBinarySensorManager_instance));
}


void AllBinarySensorManager_init(AllBinarySensorManager* this) {
    AllBinarySensorManager_register();
    AllBinarySensorManager_initFields(this);
        JAVA_TRY {
            GyroSensorFactory_initMethod();
            AccelerometerSensorFactory_initMethod();
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

AllBinarySensorManager* AllBinarySensorManager_new(void) {
    AllBinarySensorManager* this = java_object_alloc(sizeof(AllBinarySensorManager), "AllBinarySensorManager");
    AllBinarySensorManager_init(this);
    return this;
}


void AllBinarySensorManager_initMethod(AllBinarySensorManager* this) {
}


BasicArrayList* AllBinarySensorManager_getSensorNamesList(AllBinarySensorManager* this) {
        return this->list;
}


void AllBinarySensorManager_shutdown(AllBinarySensorManager* this) {
}

