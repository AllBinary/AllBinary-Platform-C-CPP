// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"




void BaseBasicArrayListCache_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseBasicArrayListCache_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseBasicArrayListCache", nullptr);
    java_register_method("BaseBasicArrayListCache", "log", (void*) BaseBasicArrayListCache_log);
}

static void BaseBasicArrayListCache_initFields(BaseBasicArrayListCache* this) {
    this->list = BasicArrayListD_new();
}

void BaseBasicArrayListCache_init(BaseBasicArrayListCache* this) {
    BaseBasicArrayListCache_register();
    BaseBasicArrayListCache_initFields(this);
}

BaseBasicArrayListCache* BaseBasicArrayListCache_new(void) {
    BaseBasicArrayListCache* this = java_object_alloc(sizeof(BaseBasicArrayListCache), "BaseBasicArrayListCache");
    BaseBasicArrayListCache_init(this);
    return this;
}


const char* BaseBasicArrayListCache_log(BaseBasicArrayListCache* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "S: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        return java_string_of(stringBuffer);
}

