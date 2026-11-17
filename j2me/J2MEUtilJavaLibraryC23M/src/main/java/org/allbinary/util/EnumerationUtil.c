// Generated Code Do Not Modify
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayList.h"


static EnumerationUtil* EnumerationUtil_instance;





void EnumerationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    EnumerationUtil_instance = EnumerationUtil_new();
}

void EnumerationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("EnumerationUtil", nullptr);
    java_register_method("EnumerationUtil", "hasMoreElements", (void*) EnumerationUtil_hasMoreElements);
    java_register_method("EnumerationUtil", "nextElement", (void*) EnumerationUtil_nextElement);
    java_register_method("EnumerationUtil", "getAsArray", (void*) EnumerationUtil_getAsArray);
}

void EnumerationUtil_init(EnumerationUtil* this) {
    EnumerationUtil_register();
}

EnumerationUtil* EnumerationUtil_new(void) {
    EnumerationUtil* this = java_object_alloc(sizeof(EnumerationUtil), "EnumerationUtil");
    EnumerationUtil_init(this);
    return this;
}


EnumerationUtil* EnumerationUtil_getInstance(void) {
        return (EnumerationUtil_staticInit(), EnumerationUtil_instance);
}


bool EnumerationUtil_hasMoreElements(EnumerationUtil* this, Enumeration* enumeration) {
        return Enumeration_hasMoreElements(enumeration);
}


void* EnumerationUtil_nextElement(EnumerationUtil* this, Enumeration* enumeration) {
        return Enumeration_nextElement(enumeration);
}


void** EnumerationUtil_getAsArray(EnumerationUtil* this, Enumeration* enumeration) {
        BasicArrayList* basicArrayList = BasicArrayListD_new();
        while (EnumerationUtil_hasMoreElements(this, enumeration)) {
            BasicArrayList_add(basicArrayList, EnumerationUtil_nextElement(this, enumeration));
        }
        return BasicArrayList_toArray(basicArrayList);
}

