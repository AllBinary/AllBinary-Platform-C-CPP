// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static InApplicationPurchaseFactory* InApplicationPurchaseFactory_instance;















void InApplicationPurchaseFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InApplicationPurchaseFactory_instance = InApplicationPurchaseFactory_new();
}

void InApplicationPurchaseFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InApplicationPurchaseFactory", nullptr);
    java_register_method("InApplicationPurchaseFactory", "init", (void*) InApplicationPurchaseFactory_initMethod);
    java_register_method("InApplicationPurchaseFactory", "onCreate", (void*) InApplicationPurchaseFactory_onCreate);
    java_register_method("InApplicationPurchaseFactory", "onStart", (void*) InApplicationPurchaseFactory_onStart);
    java_register_method("InApplicationPurchaseFactory", "onResult", (void*) InApplicationPurchaseFactory_onResult);
    java_register_method("InApplicationPurchaseFactory", "onSaveState", (void*) InApplicationPurchaseFactory_onSaveState);
    java_register_method("InApplicationPurchaseFactory", "onStop", (void*) InApplicationPurchaseFactory_onStop);
    java_register_method("InApplicationPurchaseFactory", "onDestroy", (void*) InApplicationPurchaseFactory_onDestroy);
    java_register_method("InApplicationPurchaseFactory", "purchase", (void*) InApplicationPurchaseFactory_purchase);
    java_register_method("InApplicationPurchaseFactory", "isPurchased", (void*) InApplicationPurchaseFactory_isPurchased);
    java_register_method("InApplicationPurchaseFactory", "add", (void*) InApplicationPurchaseFactory_add);
    java_register_method("InApplicationPurchaseFactory", "getUserName", (void*) InApplicationPurchaseFactory_getUserName);
    java_register_method("InApplicationPurchaseFactory", "isEnabled", (void*) InApplicationPurchaseFactory_isEnabled);
}


InApplicationPurchaseFactory* InApplicationPurchaseFactory_getInstance(void) {
        return (InApplicationPurchaseFactory_staticInit(), InApplicationPurchaseFactory_instance);
}


void InApplicationPurchaseFactory_init(InApplicationPurchaseFactory* this) {
    InApplicationPurchaseFactory_register();
}

InApplicationPurchaseFactory* InApplicationPurchaseFactory_new(void) {
    InApplicationPurchaseFactory* this = java_object_alloc(sizeof(InApplicationPurchaseFactory), "InApplicationPurchaseFactory");
    InApplicationPurchaseFactory_init(this);
    return this;
}


void InApplicationPurchaseFactory_initMethod(InApplicationPurchaseFactory* this, void* anyType, void* stateObject) {
}


void InApplicationPurchaseFactory_onCreate(InApplicationPurchaseFactory* this, void* anyType, void* stateObject) {
}


void InApplicationPurchaseFactory_onStart(InApplicationPurchaseFactory* this) {
}


void InApplicationPurchaseFactory_onResult(InApplicationPurchaseFactory* this, int32_t requestCode, int32_t resultCode, void* data) {
}


void InApplicationPurchaseFactory_onSaveState(InApplicationPurchaseFactory* this, void* anyType) {
}


void InApplicationPurchaseFactory_onStop(InApplicationPurchaseFactory* this) {
}


void InApplicationPurchaseFactory_onDestroy(InApplicationPurchaseFactory* this) {
}


void InApplicationPurchaseFactory_purchase(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature) {
}


bool InApplicationPurchaseFactory_isPurchased(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature) {
        return false;
}


void InApplicationPurchaseFactory_add(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature) {
}


const char* InApplicationPurchaseFactory_getUserName(InApplicationPurchaseFactory* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool InApplicationPurchaseFactory_isEnabled(InApplicationPurchaseFactory* this) {
        return false;
}

