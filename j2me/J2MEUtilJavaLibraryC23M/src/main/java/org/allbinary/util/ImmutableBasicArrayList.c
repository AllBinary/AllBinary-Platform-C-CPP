// Generated Code Do Not Modify
#include "org/allbinary/util/ImmutableBasicArrayList.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/util/BasicArrayListS.h"







void ImmutableBasicArrayList_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImmutableBasicArrayList_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImmutableBasicArrayList", "BasicArrayListS");
    java_register_method("ImmutableBasicArrayList", "add", (void*) ImmutableBasicArrayList_add);
    java_register_method("ImmutableBasicArrayList", "addAt", (void*) ImmutableBasicArrayList_addAt);
    java_register_method("ImmutableBasicArrayList", "toString", (void*) ImmutableBasicArrayList_toString);
}

static void ImmutableBasicArrayList_initFields(ImmutableBasicArrayList* this) {
    
}


void ImmutableBasicArrayList_init(ImmutableBasicArrayList* this, const char* name, int32_t size) {
    ImmutableBasicArrayList_register();
        BasicArrayListS_init(&this->base, size);
        ImmutableBasicArrayList_initFields(this);
        this->name = name;
}

ImmutableBasicArrayList* ImmutableBasicArrayList_new(const char* name, int32_t size) {
    ImmutableBasicArrayList* this = java_object_alloc(sizeof(ImmutableBasicArrayList), "ImmutableBasicArrayList");
    ImmutableBasicArrayList_init(this, name, size);
    return this;
}


bool ImmutableBasicArrayList_add(ImmutableBasicArrayList* this, void* e) {
        ForcedLogUtil_log(this->name, this);
        return true;
}


void ImmutableBasicArrayList_addAt(ImmutableBasicArrayList* this, int32_t index, void* element) {
        ForcedLogUtil_log(this->name, this);
}


const char* ImmutableBasicArrayList_toString(ImmutableBasicArrayList* this) {
        return this->name;
}

