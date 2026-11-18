// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"


NullRecordComparator* NullRecordComparator_NULL_RECORD_COMPARATOR;


void NullRecordComparator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullRecordComparator_NULL_RECORD_COMPARATOR = NullRecordComparator_new();
}

void NullRecordComparator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullRecordComparator", nullptr);
    java_register_method("NullRecordComparator", "compare", (void*) NullRecordComparator_compare);
}

void NullRecordComparator_init(NullRecordComparator* this) {
    NullRecordComparator_register();
}

NullRecordComparator* NullRecordComparator_new(void) {
    NullRecordComparator* this = java_object_alloc(sizeof(NullRecordComparator), "NullRecordComparator");
    NullRecordComparator_init(this);
    return this;
}


int32_t NullRecordComparator_compare(NullRecordComparator* this, int8_t* rec1, int8_t* rec2) {
        return 0;
}

