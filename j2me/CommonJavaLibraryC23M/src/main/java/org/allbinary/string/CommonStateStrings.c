// Generated Code Do Not Modify
#include "org/allbinary/string/CommonStateStrings.h"


static CommonStateStrings* CommonStateStrings_instance;


void CommonStateStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommonStateStrings_instance = CommonStateStrings_new();
}

void CommonStateStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommonStateStrings", nullptr);
}

static void CommonStateStrings_initFields(CommonStateStrings* this) {
    this->CONTEXT = "Context: ";
    this->FINISH = "finish";
    this->CREATE = "onCreate";
    this->START = "onStart";
    this->RESTART = "onRestart";
    this->RESUME = "onResume";
    this->PAUSE = "onPause";
    this->STOP = "onStop";
    this->DESTROY = "onDestroy";
    this->BIND = "onBind";
    this->ON_SAVE_INSTANCE_STATE = "onSaveInstanceState";
    this->ON_START_COMMAND = "onStartCommand";
}

void CommonStateStrings_init(CommonStateStrings* this) {
    CommonStateStrings_register();
    CommonStateStrings_initFields(this);
}

CommonStateStrings* CommonStateStrings_new(void) {
    CommonStateStrings* this = java_object_alloc(sizeof(CommonStateStrings), "CommonStateStrings");
    CommonStateStrings_init(this);
    return this;
}


CommonStateStrings* CommonStateStrings_getInstance(void) {
        return (CommonStateStrings_staticInit(), CommonStateStrings_instance);
}

