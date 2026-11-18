// Generated Code Do Not Modify
#include "org/allbinary/system/Memory.h"
#include "org/allbinary/logic/string/StringMaker.h"




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
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Memory: Free: ");
        StringMaker_appendlong(stringBuffer, Runtime_freeMemory(Runtime_getRuntime()));
        StringMaker_append(stringBuffer, " Max: ");
        StringMaker_appendlong(stringBuffer, Runtime_maxMemory(Runtime_getRuntime()));
        StringMaker_append(stringBuffer, " Total: ");
        StringMaker_appendlong(stringBuffer, Runtime_totalMemory(Runtime_getRuntime()));
        return java_string_of(stringBuffer);
}

