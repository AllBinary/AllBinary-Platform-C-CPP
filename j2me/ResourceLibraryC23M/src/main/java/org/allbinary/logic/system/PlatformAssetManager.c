// Generated Code Do Not Modify
#include "org/allbinary/logic/system/PlatformAssetManager.h"
#include "org/allbinary/data/resource/ResourceUtil.h"


static PlatformAssetManager* PlatformAssetManager_instance;



void PlatformAssetManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlatformAssetManager_instance = PlatformAssetManager_new();
}

void PlatformAssetManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformAssetManager", nullptr);
    java_register_method("PlatformAssetManager", "getResourceAsStream", (void*) PlatformAssetManager_getResourceAsStream);
}

void PlatformAssetManager_init(PlatformAssetManager* this) {
    PlatformAssetManager_register();
}

PlatformAssetManager* PlatformAssetManager_new(void) {
    PlatformAssetManager* this = java_object_alloc(sizeof(PlatformAssetManager), "PlatformAssetManager");
    PlatformAssetManager_init(this);
    return this;
}


PlatformAssetManager* PlatformAssetManager_getInstance(void) {
        return (PlatformAssetManager_staticInit(), PlatformAssetManager_instance);
}


// throws Exception
InputStream* PlatformAssetManager_getResourceAsStream(PlatformAssetManager* this, const char* resource) {
        ResourceUtil* resourceUtil = ResourceUtil_getInstance();
        InputStream* inputStream = ResourceUtil_getResourceAsStream(resourceUtil, resource);
        return inputStream;
}

