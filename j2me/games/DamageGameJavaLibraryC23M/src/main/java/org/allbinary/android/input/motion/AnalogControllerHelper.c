// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/AnalogControllerHelper.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/android/input/motion/AnalogControllerConfigurationFactory.h"








void AnalogControllerHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AnalogControllerHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogControllerHelper", nullptr);
    java_register_method("AnalogControllerHelper", "right", (void*) AnalogControllerHelper_right);
    java_register_method("AnalogControllerHelper", "left", (void*) AnalogControllerHelper_left);
    java_register_method("AnalogControllerHelper", "up", (void*) AnalogControllerHelper_up);
    java_register_method("AnalogControllerHelper", "down", (void*) AnalogControllerHelper_down);
}

static void AnalogControllerHelper_initFields(AnalogControllerHelper* this) {
    
    this->SCALE_VALUE = AnalogControllerConfigurationFactory_getInstance()->SCALE_VALUE;
    this->rightTimeElapsedHelper = TimeDelayHelper_new(0);
    this->leftTimeElapsedHelper = TimeDelayHelper_new(0);
    this->downTimeElapsedHelper = TimeDelayHelper_new(0);
    this->upTimeElapsedHelper = TimeDelayHelper_new(0);
}


void AnalogControllerHelper_init(AnalogControllerHelper* this, int32_t reduceTimeFactor) {
    AnalogControllerHelper_register();
    AnalogControllerHelper_initFields(this);
        this->reduceTimeFactor = reduceTimeFactor;
}

AnalogControllerHelper* AnalogControllerHelper_new(int32_t reduceTimeFactor) {
    AnalogControllerHelper* this = java_object_alloc(sizeof(AnalogControllerHelper), "AnalogControllerHelper");
    AnalogControllerHelper_init(this, reduceTimeFactor);
    return this;
}


// throws Exception
void AnalogControllerHelper_right(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) {
        this->rightTimeElapsedHelper->delay = ((this->SCALE_VALUE - xAnalogValue) >> this->reduceTimeFactor);
        if (TimeDelayHelper_isTimeTNT(this->rightTimeElapsedHelper)) {
            CollidableDestroyableDamageableLayer_right(collidableDestroyableDamageableLayer);
        }
}


// throws Exception
void AnalogControllerHelper_left(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) {
        this->leftTimeElapsedHelper->delay = ((this->SCALE_VALUE + xAnalogValue) >> this->reduceTimeFactor);
        if (TimeDelayHelper_isTimeTNT(this->leftTimeElapsedHelper)) {
            CollidableDestroyableDamageableLayer_left(collidableDestroyableDamageableLayer);
        }
}


// throws Exception
void AnalogControllerHelper_up(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) {
        this->upTimeElapsedHelper->delay = ((this->SCALE_VALUE - xAnalogValue) >> this->reduceTimeFactor);
        if (TimeDelayHelper_isTimeTNT(this->upTimeElapsedHelper)) {
            CollidableDestroyableDamageableLayer_up(collidableDestroyableDamageableLayer);
        }
}


// throws Exception
void AnalogControllerHelper_down(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) {
        this->downTimeElapsedHelper->delay = ((this->SCALE_VALUE + xAnalogValue) >> this->reduceTimeFactor);
        if (TimeDelayHelper_isTimeTNT(this->downTimeElapsedHelper)) {
            CollidableDestroyableDamageableLayer_down(collidableDestroyableDamageableLayer);
        }
}

