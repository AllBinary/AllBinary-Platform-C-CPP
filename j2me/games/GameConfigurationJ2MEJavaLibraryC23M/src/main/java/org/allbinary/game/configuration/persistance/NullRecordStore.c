// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"


NullRecordStore* NullRecordStore_NULL_RECORD_STORE;

void NullRecordStore_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullRecordStore_NULL_RECORD_STORE = NullRecordStore_new();
}

void NullRecordStore_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullRecordStore", "RecordStore");
}

void NullRecordStore_init(NullRecordStore* this) {
    NullRecordStore_register();
    RecordStore_init(&this->base);
}

NullRecordStore* NullRecordStore_new(void) {
    NullRecordStore* this = java_object_alloc(sizeof(NullRecordStore), "NullRecordStore");
    NullRecordStore_init(this);
    return this;
}

