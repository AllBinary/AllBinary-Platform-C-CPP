// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#endif


static ABHashtable* Feature_hashtable;



static void Feature_add(const char* name, Feature* gameFeature);



void Feature_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Feature_hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}

void Feature_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Feature", nullptr);
    java_register_method("Feature", "toString", (void*) Feature_toString);
    java_register_method("Feature", "getName", (void*) Feature_getName);
}

static void Feature_initFields(Feature* this) {
    
}


void Feature_init(Feature* this, const char* name) {
    Feature_register();
    Feature_initFields(this);
        this->name = name;
        Feature_add(name, this);
        BaseChangedGameFeatureListener_add(ChangedGameFeatureListener_getInstance(), this);
}

Feature* Feature_new(const char* name) {
    Feature* this = java_object_alloc(sizeof(Feature), "Feature");
    Feature_init(this, name);
    return this;
}


Feature* Feature_getInstance(const char* name) {
        return ((Feature*) Hashtable_get((Feature_staticInit(), Feature_hashtable), name));
}


static void Feature_add(const char* name, Feature* gameFeature) {
        Hashtable_put((Feature_staticInit(), Feature_hashtable), name, gameFeature);
}


const char* Feature_toString(Feature* this) {
        return Feature_getName(this);
}


const char* Feature_getName(Feature* this) {
        return this->name;
}

