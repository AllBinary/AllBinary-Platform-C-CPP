// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"


NullRecordFilter* NullRecordFilter_NULL_RECORD_FILTER;


void NullRecordFilter_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullRecordFilter_NULL_RECORD_FILTER = NullRecordFilter_new();
}

void NullRecordFilter_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullRecordFilter", nullptr);
    java_register_method("NullRecordFilter", "matches", (void*) NullRecordFilter_matches);
}

void NullRecordFilter_init(NullRecordFilter* this) {
    NullRecordFilter_register();
}

NullRecordFilter* NullRecordFilter_new(void) {
    NullRecordFilter* this = java_object_alloc(sizeof(NullRecordFilter), "NullRecordFilter");
    NullRecordFilter_init(this);
    return this;
}


bool NullRecordFilter_matches(NullRecordFilter* this, int8_t* candidate) {
        return true;
}

