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
    java_register_method("TsUtil", "hashCode", (void*) TsUtil_hashCode);
    java_register_method("TsUtil", "waitFor", (void*) TsUtil_waitFor);
    java_register_method("TsUtil", "getRecord", (void*) TsUtil_getRecord);
    java_register_method("TsUtil", "compareTo", (void*) TsUtil_compareTo);
    java_register_method("TsUtil", "equalIgnoreCase", (void*) TsUtil_equalIgnoreCase);
    java_register_method("TsUtil", "equalsNotstring", (void*) TsUtil_equalsNotstring);
    java_register_method("TsUtil", "toNumberFromChar", (void*) TsUtil_toNumberFromChar);
    java_register_method("TsUtil", "toNumber", (void*) TsUtil_toNumber);
    java_register_method("TsUtil", "getByteArray", (void*) TsUtil_getByteArray);
    java_register_method("TsUtil", "isItemListener", (void*) TsUtil_isItemListener);
    java_register_method("TsUtil", "printAvailableMethods", (void*) TsUtil_printAvailableMethods);
    java_register_method("TsUtil", "gc", (void*) TsUtil_gc);
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


int32_t TsUtil_hashCode(TsUtil* this, void* anyType) {
        return java_object_hashCode(anyType);
}


// throws InterruptedException
void TsUtil_waitFor(TsUtil* this, void* any, int64_t timeoutMillis) {
        void* anyType = ((void*) any);
        Any_wait(anyType, timeoutMillis);
}


int8_t* TsUtil_getRecord(TsUtil* this, void* anyType, int32_t recordId) {
        return ((int8_t*) java_array_new(sizeof(int8_t), 0));
}


int32_t TsUtil_compareTo(TsUtil* this, const char* a, const char* b) {
        return strcmp(a, b);
}


bool TsUtil_equalIgnoreCase(TsUtil* this, const char* a, const char* b) {
        return (strcasecmp(a, b) == 0);
}


bool TsUtil_equalsNotstring(TsUtil* this, void* anyType, void* object2) {
        return (anyType == object2);
}


int32_t TsUtil_toNumberFromChar(TsUtil* this, uint16_t value) {
        return ((int32_t) value);
}


int32_t TsUtil_toNumber(TsUtil* this, int32_t value) {
        return value;
}


int8_t* TsUtil_getByteArray(TsUtil* this, const char* string) {
        return java_string_getBytes(string);
}


bool TsUtil_isItemListener(TsUtil* this, void* owner) {
        return false;
}


void TsUtil_printAvailableMethods(TsUtil* this, void* anyType) {
}


void TsUtil_gc(TsUtil* this) {
        ((void) 0);
}

