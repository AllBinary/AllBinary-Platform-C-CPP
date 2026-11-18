// Generated Code Do Not Modify
#include "org/bouncycastle/jce/provider/BouncyCastleProvider.h"


static const char* BouncyCastleProvider_info = "BouncyCastle Security Provider v1.41";
const char* BouncyCastleProvider_PROVIDER_NAME = "BC";



void BouncyCastleProvider_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BouncyCastleProvider_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BouncyCastleProvider", "Provider");
    java_register_method("BouncyCastleProvider", "setParameter", (void*) BouncyCastleProvider_setParameter);
}


void BouncyCastleProvider_init(BouncyCastleProvider* this) {
    BouncyCastleProvider_register();
        Provider_init(&this->base, BouncyCastleProvider_PROVIDER_NAME, 1.41, BouncyCastleProvider_info);
}

BouncyCastleProvider* BouncyCastleProvider_new(void) {
    BouncyCastleProvider* this = java_object_alloc(sizeof(BouncyCastleProvider), "BouncyCastleProvider");
    BouncyCastleProvider_init(this);
    return this;
}


void BouncyCastleProvider_setParameter(BouncyCastleProvider* this, const char* parameterName, void* parameter) {
}

