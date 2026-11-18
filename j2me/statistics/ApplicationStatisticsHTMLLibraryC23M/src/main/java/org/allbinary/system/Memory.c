// Generated Code Do Not Modify
#include "org/allbinary/system/Memory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif




void Memory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Memory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Memory", nullptr);
}

void Memory_init(Memory* this) {
    Memory_register();
}

Memory* Memory_new(void) {
    Memory* this = java_object_alloc(sizeof(Memory), "Memory");
    Memory_init(this);
    return this;
}


const char* Memory_getInfo(void) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

