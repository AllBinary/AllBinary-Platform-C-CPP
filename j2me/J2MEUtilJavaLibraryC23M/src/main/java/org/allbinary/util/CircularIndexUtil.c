// Generated Code Do Not Modify
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif


CircularIndexUtil* CircularIndexUtil_NULL_CIRCULAR_INDEX_UTIL;











void CircularIndexUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CircularIndexUtil_NULL_CIRCULAR_INDEX_UTIL = CircularIndexUtil_new(0, 0);
}

void CircularIndexUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CircularIndexUtil", nullptr);
    java_register_method("CircularIndexUtil", "next", (void*) CircularIndexUtil_next);
    java_register_method("CircularIndexUtil", "previous", (void*) CircularIndexUtil_previous);
    java_register_method("CircularIndexUtil", "setIndex", (void*) CircularIndexUtil_setIndex);
    java_register_method("CircularIndexUtil", "getIndex", (void*) CircularIndexUtil_getIndex);
    java_register_method("CircularIndexUtil", "setSize", (void*) CircularIndexUtil_setSize);
    java_register_method("CircularIndexUtil", "getSize", (void*) CircularIndexUtil_getSize);
    java_register_method("CircularIndexUtil", "toString", (void*) CircularIndexUtil_toString);
}

static void CircularIndexUtil_initFields(CircularIndexUtil* this) {
    this->index = 0;
    this->lastIndex = 0;
    this->size = 0;
}


void CircularIndexUtil_init(CircularIndexUtil* this, int32_t index, int32_t size) {
    CircularIndexUtil_register();
    CircularIndexUtil_initFields(this);
        CircularIndexUtil_setSize(this, size);
        CircularIndexUtil_setIndex(this, index);
}

CircularIndexUtil* CircularIndexUtil_new(int32_t index, int32_t size) {
    CircularIndexUtil* this = java_object_alloc(sizeof(CircularIndexUtil), "CircularIndexUtil");
    CircularIndexUtil_init(this, index, size);
    return this;
}


int32_t CircularIndexUtil_next(CircularIndexUtil* this) {
        if (this->index >= this->lastIndex) {
            this->index = 0;
        } else {
            this->index++;
        }
        return this->index;
}


int32_t CircularIndexUtil_previous(CircularIndexUtil* this) {
        if (this->index < 1) {
            this->index = this->lastIndex;
        } else {
            this->index--;
        }
        return this->index;
}


void CircularIndexUtil_setIndex(CircularIndexUtil* this, int32_t index) {
        if (index > this->lastIndex) {
            return;
        }
        this->index = index;
}


int32_t CircularIndexUtil_getIndex(CircularIndexUtil* this) {
        return this->index;
}


CircularIndexUtil* CircularIndexUtil_createInstance(int32_t max) {
        return CircularIndexUtil_new(0, max);
}


CircularIndexUtil* CircularIndexUtil_createInstanceAt(int32_t index, int32_t max) {
        return CircularIndexUtil_new(index, max);
}


void CircularIndexUtil_setSize(CircularIndexUtil* this, int32_t size) {
        this->size = size;
        this->lastIndex = size - 1;
        this->index = 0;
}


int32_t CircularIndexUtil_getSize(CircularIndexUtil* this) {
        return this->size;
}


const char* CircularIndexUtil_toString(CircularIndexUtil* this) {
        return java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->INDEX_LABEL), this->index), "lastIndex: "), this->lastIndex), "size: "), this->size));
}

