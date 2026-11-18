// Generated Code Do Not Modify
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"






void ResourceLoadingLevel_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ResourceLoadingLevel_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ResourceLoadingLevel", nullptr);
    java_register_method("ResourceLoadingLevel", "getLevel", (void*) ResourceLoadingLevel_getLevel);
    java_register_method("ResourceLoadingLevel", "getName", (void*) ResourceLoadingLevel_getName);
}

static void ResourceLoadingLevel_initFields(ResourceLoadingLevel* this) {
    
    
}


void ResourceLoadingLevel_init(ResourceLoadingLevel* this, const char* name, int32_t level) {
    ResourceLoadingLevel_register();
    ResourceLoadingLevel_initFields(this);
        this->name = name;
        this->level = level;
}

ResourceLoadingLevel* ResourceLoadingLevel_new(const char* name, int32_t level) {
    ResourceLoadingLevel* this = java_object_alloc(sizeof(ResourceLoadingLevel), "ResourceLoadingLevel");
    ResourceLoadingLevel_init(this, name, level);
    return this;
}


int32_t ResourceLoadingLevel_getLevel(ResourceLoadingLevel* this) {
        return this->level;
}


const char* ResourceLoadingLevel_getName(ResourceLoadingLevel* this) {
        return this->name;
}

