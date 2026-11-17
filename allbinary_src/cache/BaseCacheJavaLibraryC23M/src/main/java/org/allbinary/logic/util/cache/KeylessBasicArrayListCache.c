// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/KeylessBasicArrayListCache.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/logic/util/cache/IndexedBasicArrayListCache.h"







void KeylessBasicArrayListCache_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void KeylessBasicArrayListCache_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeylessBasicArrayListCache", "IndexedBasicArrayListCache");
    java_register_method("KeylessBasicArrayListCache", "get", (void*) KeylessBasicArrayListCache_get);
    java_register_method("KeylessBasicArrayListCache", "clear", (void*) KeylessBasicArrayListCache_clear);
    java_register_method("KeylessBasicArrayListCache", "log", (void*) KeylessBasicArrayListCache_log);
}

static void KeylessBasicArrayListCache_initFields(KeylessBasicArrayListCache* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void KeylessBasicArrayListCache_init(KeylessBasicArrayListCache* this) {
    KeylessBasicArrayListCache_register();
    IndexedBasicArrayListCache_init(&this->base);
    KeylessBasicArrayListCache_initFields(this);
}

KeylessBasicArrayListCache* KeylessBasicArrayListCache_new(void) {
    KeylessBasicArrayListCache* this = java_object_alloc(sizeof(KeylessBasicArrayListCache), "KeylessBasicArrayListCache");
    KeylessBasicArrayListCache_init(this);
    return this;
}


BasicArrayList* KeylessBasicArrayListCache_get(KeylessBasicArrayListCache* this) {
        JAVA_TRY {
            if (this->base.index >= BasicArrayList_size(this->base.base.list)) {
                IndexedBasicArrayListCache_addDefault(this);
            }
            BasicArrayList* list = ((BasicArrayList*) IndexedBasicArrayListCache_getAt(this, this->base.index++));
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->GET, e);
            return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
        } JAVA_END_TRY;
}


void KeylessBasicArrayListCache_clear(KeylessBasicArrayListCache* this) {
        IndexedBasicArrayListCache_clear((&this->base));
        BasicArrayList* basicArrayList = nullptr;
        for (int32_t index = BasicArrayList_size(this->base.base.list) - 1; index >= 0; index--) {
            basicArrayList = (((BasicArrayList*) this->base.base.list->objectArray[index]));
            BasicArrayList_clear(basicArrayList);
        }
}


const char* KeylessBasicArrayListCache_log(KeylessBasicArrayListCache* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "S: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->base.base.list));
        const char* S_LABEL = " s: ";
        BasicArrayList* basicArrayList = nullptr;
        for (int32_t index = BasicArrayList_size(this->base.base.list) - 1; index >= 0; index--) {
            StringMaker_append(stringBuffer, S_LABEL);
            basicArrayList = (((BasicArrayList*) this->base.base.list->objectArray[index]));
            StringMaker_appendint(stringBuffer, BasicArrayList_size(basicArrayList));
        }
        return java_string_of(stringBuffer);
}

