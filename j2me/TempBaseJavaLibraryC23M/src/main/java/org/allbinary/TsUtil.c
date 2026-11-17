// Generated Code Do Not Modify
#include "org/allbinary/TsUtil.h"


static TsUtil* TsUtil_instance;







void TsUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TsUtil_instance = TsUtil_new();
}

void TsUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TsUtil", nullptr);
    java_register_method("TsUtil", "longBitsToDouble", (void*) TsUtil_longBitsToDouble);
    java_register_method("TsUtil", "intBitsToFloat", (void*) TsUtil_intBitsToFloat);
    java_register_method("TsUtil", "hashCode", (void*) TsUtil_hashCode);
    java_register_method("TsUtil", "waitFor", (void*) TsUtil_waitFor);
    java_register_method("TsUtil", "compareTo", (void*) TsUtil_compareTo);
}

void TsUtil_init(TsUtil* this) {
    TsUtil_register();
}

TsUtil* TsUtil_new(void) {
    TsUtil* this = java_object_alloc(sizeof(TsUtil), "TsUtil");
    TsUtil_init(this);
    return this;
}


TsUtil* TsUtil_getInstance(void) {
        return (TsUtil_staticInit(), TsUtil_instance);
}


double TsUtil_longBitsToDouble(TsUtil* this, int64_t bits) {
        return Double_longBitsToDouble(bits);
}


float TsUtil_intBitsToFloat(TsUtil* this, int32_t bits) {
        return Float_intBitsToFloat(bits);
}


int32_t TsUtil_hashCode(TsUtil* this, void* anyType) {
        return java_object_hashCode(anyType);
}


// throws InterruptedException
void TsUtil_waitFor(TsUtil* this, void* any, int64_t timeoutMillis) {
        void* anyType = ((void*) any);
        Any_wait(anyType, timeoutMillis);
}


int32_t TsUtil_compareTo(TsUtil* this, const char* a, const char* b) {
        return strcmp(a, b);
}

