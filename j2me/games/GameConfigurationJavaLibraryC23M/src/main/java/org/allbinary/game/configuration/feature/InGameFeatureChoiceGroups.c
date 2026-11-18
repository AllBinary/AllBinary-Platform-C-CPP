// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


static InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive;
static InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple;






void InGameFeatureChoiceGroups_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InGameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive = InGameFeatureChoiceGroups_new();
    InGameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple = InGameFeatureChoiceGroups_new();
}

void InGameFeatureChoiceGroups_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InGameFeatureChoiceGroups", nullptr);
    java_register_method("InGameFeatureChoiceGroups", "get", (void*) InGameFeatureChoiceGroups_get);
    java_register_method("InGameFeatureChoiceGroups", "add", (void*) InGameFeatureChoiceGroups_add);
}

static void InGameFeatureChoiceGroups_initFields(InGameFeatureChoiceGroups* this) {
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}


void InGameFeatureChoiceGroups_init(InGameFeatureChoiceGroups* this) {
    InGameFeatureChoiceGroups_register();
    InGameFeatureChoiceGroups_initFields(this);
}

InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_new(void) {
    InGameFeatureChoiceGroups* this = java_object_alloc(sizeof(InGameFeatureChoiceGroups), "InGameFeatureChoiceGroups");
    InGameFeatureChoiceGroups_init(this);
    return this;
}


InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_getExclusiveInstance(void) {
        return (InGameFeatureChoiceGroups_staticInit(), InGameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive);
}


InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_getMultipleInstance(void) {
        return (InGameFeatureChoiceGroups_staticInit(), InGameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple);
}


ABHashtable* InGameFeatureChoiceGroups_get(InGameFeatureChoiceGroups* this) {
        return this->hashtable;
}


void InGameFeatureChoiceGroups_add(InGameFeatureChoiceGroups* this, const char* name, BasicArrayList* list) {
        Hashtable_put(this->hashtable, name, list);
}

