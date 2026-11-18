// Generated Code Do Not Modify
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"


static ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_instance;



void ResourceLoadingLevelFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ResourceLoadingLevelFactory_instance = ResourceLoadingLevelFactory_new();
}

void ResourceLoadingLevelFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ResourceLoadingLevelFactory", nullptr);
    java_register_method("ResourceLoadingLevelFactory", "getLevelString", (void*) ResourceLoadingLevelFactory_getLevelString);
}

static void ResourceLoadingLevelFactory_initFields(ResourceLoadingLevelFactory* this) {
    this->LOAD_EARLY = ResourceLoadingLevel_new("Load Early", (Integer_staticInit(), Integer_MAX_VALUE));
    this->LOAD_TOUCH = ResourceLoadingLevel_new("Load Touch", (Integer_staticInit(), Integer_MAX_VALUE) - 1);
    this->LOAD_GAME = ResourceLoadingLevel_new("Load Game", (Integer_staticInit(), Integer_MAX_VALUE) - 2);
    this->LEVEL = ResourceLoadingLevel_new("Level", (Integer_staticInit(), Integer_MAX_VALUE) - 99);
    this->MAX_LEVEL = ResourceLoadingLevel_new("Max Level", (Integer_staticInit(), Integer_MAX_VALUE) - 100);
    this->LOAD_ALL = ResourceLoadingLevel_new("Load All", -1);
    this->RESOURCE_LOADING_LEVEL_ARRAY = ((ResourceLoadingLevel**) java_array_from(sizeof(ResourceLoadingLevel*), sizeof((ResourceLoadingLevel*[]){ this->LOAD_ALL, this->MAX_LEVEL, this->LEVEL, this->LOAD_GAME, this->LOAD_TOUCH, this->LOAD_EARLY }) / sizeof(ResourceLoadingLevel*), (ResourceLoadingLevel*[]){ this->LOAD_ALL, this->MAX_LEVEL, this->LEVEL, this->LOAD_GAME, this->LOAD_TOUCH, this->LOAD_EARLY }));
}

void ResourceLoadingLevelFactory_init(ResourceLoadingLevelFactory* this) {
    ResourceLoadingLevelFactory_register();
    ResourceLoadingLevelFactory_initFields(this);
}

ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_new(void) {
    ResourceLoadingLevelFactory* this = java_object_alloc(sizeof(ResourceLoadingLevelFactory), "ResourceLoadingLevelFactory");
    ResourceLoadingLevelFactory_init(this);
    return this;
}


ResourceLoadingLevelFactory* ResourceLoadingLevelFactory_getInstance(void) {
        return (ResourceLoadingLevelFactory_staticInit(), ResourceLoadingLevelFactory_instance);
}


const char* ResourceLoadingLevelFactory_getLevelString(ResourceLoadingLevelFactory* this, int32_t level) {
        for (int32_t index = 0; index < java_array_length(this->RESOURCE_LOADING_LEVEL_ARRAY); index++) {
            if (level == ResourceLoadingLevel_getLevel(this->RESOURCE_LOADING_LEVEL_ARRAY[index])) {
                return ResourceLoadingLevel_getName(this->RESOURCE_LOADING_LEVEL_ARRAY[index]);
            }
        }
        return java_string_of(level);
}

