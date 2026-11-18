// Generated Code Do Not Modify
#include "org/allbinary/logic/math/permutations/ComparableObject.h"
#include "org/allbinary/TsUtil.h"
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif




void ComparableObject_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ComparableObject_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ComparableObject", nullptr);
    java_register_method("ComparableObject", "compareTo", (void*) ComparableObject_compareTo);
}

void ComparableObject_init(ComparableObject* this) {
    ComparableObject_register();
}

ComparableObject* ComparableObject_new(void) {
    ComparableObject* this = java_object_alloc(sizeof(ComparableObject), "ComparableObject");
    ComparableObject_init(this);
    return this;
}


int32_t ComparableObject_compareTo(ComparableObject* this, void* anyType) {
        if (TsUtil_hashCode(TsUtil_getInstance(), this) < TsUtil_hashCode(TsUtil_getInstance(), anyType)) {
            return -1;
        } else if (TsUtil_hashCode(TsUtil_getInstance(), this) > TsUtil_hashCode(TsUtil_getInstance(), anyType)) {
            return 1;
        }
        return 0;
}

