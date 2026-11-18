// Generated Code Do Not Modify
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif




void BasicArrayListS_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicArrayListS_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicArrayListS", "BasicArrayList");
}


void BasicArrayListS_init(BasicArrayListS* this, int32_t size) {
    BasicArrayListS_register();
        BasicArrayList_init(&this->base, NullUtil_getInstance()->NULL_OBJECT_ARRAY);
        if (size < 0) {
            java_throw(java_exception_new("IllegalArgumentException", java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Init Size Exception: "), size))));
        }
        this->base.objectArray = ((void**) java_array_new(sizeof(void*), size));
}

BasicArrayListS* BasicArrayListS_new(int32_t size) {
    BasicArrayListS* this = java_object_alloc(sizeof(BasicArrayListS), "BasicArrayListS");
    BasicArrayListS_init(this, size);
    return this;
}

