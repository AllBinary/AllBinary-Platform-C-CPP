// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/ThirdPartyInApplicationPurchase.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/ThirdPartyInApplicationPurchaseInterface.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
















void ThirdPartyInApplicationPurchase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ThirdPartyInApplicationPurchase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThirdPartyInApplicationPurchase", nullptr);
    java_register_method("ThirdPartyInApplicationPurchase", "isPurchased", (void*) ThirdPartyInApplicationPurchase_isPurchased);
    java_register_method("ThirdPartyInApplicationPurchase", "onCreate", (void*) ThirdPartyInApplicationPurchase_onCreate);
    java_register_method("ThirdPartyInApplicationPurchase", "onDestroy", (void*) ThirdPartyInApplicationPurchase_onDestroy);
    java_register_method("ThirdPartyInApplicationPurchase", "onStart", (void*) ThirdPartyInApplicationPurchase_onStart);
    java_register_method("ThirdPartyInApplicationPurchase", "onActivityResult", (void*) ThirdPartyInApplicationPurchase_onActivityResult);
    java_register_method("ThirdPartyInApplicationPurchase", "onSaveInstanceState", (void*) ThirdPartyInApplicationPurchase_onSaveInstanceState);
    java_register_method("ThirdPartyInApplicationPurchase", "onStop", (void*) ThirdPartyInApplicationPurchase_onStop);
    java_register_method("ThirdPartyInApplicationPurchase", "requestPurchase", (void*) ThirdPartyInApplicationPurchase_requestPurchase);
    java_register_method("ThirdPartyInApplicationPurchase", "requestReceipts", (void*) ThirdPartyInApplicationPurchase_requestReceipts);
    java_register_method("ThirdPartyInApplicationPurchase", "add", (void*) ThirdPartyInApplicationPurchase_add);
    java_register_method("ThirdPartyInApplicationPurchase", "getUserName", (void*) ThirdPartyInApplicationPurchase_getUserName);
    java_register_method("ThirdPartyInApplicationPurchase", "isEnabled", (void*) ThirdPartyInApplicationPurchase_isEnabled);
    java_register_method("ThirdPartyInApplicationPurchase", "requestProducts", (void*) ThirdPartyInApplicationPurchase_requestProducts);
}

void ThirdPartyInApplicationPurchase_init(ThirdPartyInApplicationPurchase* this) {
    ThirdPartyInApplicationPurchase_register();
}

ThirdPartyInApplicationPurchase* ThirdPartyInApplicationPurchase_new(void) {
    ThirdPartyInApplicationPurchase* this = java_object_alloc(sizeof(ThirdPartyInApplicationPurchase), "ThirdPartyInApplicationPurchase");
    ThirdPartyInApplicationPurchase_init(this);
    return this;
}


bool ThirdPartyInApplicationPurchase_isPurchased(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature) {
        return false;
}


void ThirdPartyInApplicationPurchase_onCreate(ThirdPartyInApplicationPurchase* this, void* anyType, void* stateObject) {
}


void ThirdPartyInApplicationPurchase_onDestroy(ThirdPartyInApplicationPurchase* this) {
}


void ThirdPartyInApplicationPurchase_onStart(ThirdPartyInApplicationPurchase* this) {
}


void ThirdPartyInApplicationPurchase_onActivityResult(ThirdPartyInApplicationPurchase* this, int32_t requestCode, int32_t resultCode, void* dataObject) {
}


void ThirdPartyInApplicationPurchase_onSaveInstanceState(ThirdPartyInApplicationPurchase* this, void* anyType) {
}


void ThirdPartyInApplicationPurchase_onStop(ThirdPartyInApplicationPurchase* this) {
}


void ThirdPartyInApplicationPurchase_requestPurchase(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature) {
}


void ThirdPartyInApplicationPurchase_requestReceipts(ThirdPartyInApplicationPurchase* this) {
}


void ThirdPartyInApplicationPurchase_add(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature) {
}


const char* ThirdPartyInApplicationPurchase_getUserName(ThirdPartyInApplicationPurchase* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool ThirdPartyInApplicationPurchase_isEnabled(ThirdPartyInApplicationPurchase* this) {
        return false;
}


void ThirdPartyInApplicationPurchase_requestProducts(ThirdPartyInApplicationPurchase* this) {
}

