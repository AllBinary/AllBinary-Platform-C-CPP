// Generated Code Do Not Modify
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/util/BasicArrayList.h"


static HashtableUtil* HashtableUtil_instance;





void HashtableUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HashtableUtil_instance = HashtableUtil_new();
}

void HashtableUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HashtableUtil", nullptr);
    java_register_method("HashtableUtil", "putAll", (void*) HashtableUtil_putAll);
    java_register_method("HashtableUtil", "getKeysAsArray", (void*) HashtableUtil_getKeysAsArray);
    java_register_method("HashtableUtil", "getKeysAsList", (void*) HashtableUtil_getKeysAsList);
}

static void HashtableUtil_initFields(HashtableUtil* this) {
    this->enumerationUtil = EnumerationUtil_getInstance();
}

void HashtableUtil_init(HashtableUtil* this) {
    HashtableUtil_register();
    HashtableUtil_initFields(this);
}

HashtableUtil* HashtableUtil_new(void) {
    HashtableUtil* this = java_object_alloc(sizeof(HashtableUtil), "HashtableUtil");
    HashtableUtil_init(this);
    return this;
}


HashtableUtil* HashtableUtil_getInstance(void) {
        return (HashtableUtil_staticInit(), HashtableUtil_instance);
}


void HashtableUtil_putAll(HashtableUtil* this, ABHashtable* fromHashtable, ABHashtable* hashtable) {
        Enumeration* enumeration = Hashtable_keys(fromHashtable);
        void* keyCanBeNull = nullptr;
        void* valueCanBeNull = nullptr;
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            keyCanBeNull = EnumerationUtil_nextElement(this->enumerationUtil, enumeration);
            valueCanBeNull = Hashtable_get(hashtable, keyCanBeNull);
            if (valueCanBeNull == nullptr) {
            } else {
                Hashtable_put(hashtable, keyCanBeNull, valueCanBeNull);
            }
        }
}


void** HashtableUtil_getKeysAsArray(HashtableUtil* this, ABHashtable* hashtable) {
        void** objectArray = ((void**) java_array_new(sizeof(void*), Hashtable_size(hashtable)));
        int32_t index = 0;
        Enumeration* enumeration = Hashtable_keys(hashtable);
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            objectArray[index++] = EnumerationUtil_nextElement(this->enumerationUtil, enumeration);
        }
        return objectArray;
}


BasicArrayList* HashtableUtil_getKeysAsList(HashtableUtil* this, ABHashtable* hashtable) {
        BasicArrayList* list = BasicArrayListS_new(Hashtable_size(hashtable));
        Enumeration* enumeration = Hashtable_keys(hashtable);
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            BasicArrayList_add(list, EnumerationUtil_nextElement(this->enumerationUtil, enumeration));
        }
        return list;
}

