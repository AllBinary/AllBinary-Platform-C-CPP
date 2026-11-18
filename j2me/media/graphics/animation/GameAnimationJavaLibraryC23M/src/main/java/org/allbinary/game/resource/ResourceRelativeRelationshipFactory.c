// Generated Code Do Not Modify
#include "org/allbinary/game/resource/ResourceRelativeRelationshipFactory.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/resource/ResourceRelativeRelationshipFactoryInterface.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif










void ResourceRelativeRelationshipFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ResourceRelativeRelationshipFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ResourceRelativeRelationshipFactory", nullptr);
    java_register_method("ResourceRelativeRelationshipFactory", "init", (void*) ResourceRelativeRelationshipFactory_initMethod);
    java_register_method("ResourceRelativeRelationshipFactory", "getResourceRelativeRelationshipList", (void*) ResourceRelativeRelationshipFactory_getResourceRelativeRelationshipList);
    java_register_method("ResourceRelativeRelationshipFactory", "addResourceRelativeRelationship", (void*) ResourceRelativeRelationshipFactory_addResourceRelativeRelationship);
    java_register_method("ResourceRelativeRelationshipFactory", "isLoadingLevel", (void*) ResourceRelativeRelationshipFactory_isLoadingLevel);
    java_register_method("ResourceRelativeRelationshipFactory", "isFeature", (void*) ResourceRelativeRelationshipFactory_isFeature);
    java_register_method("ResourceRelativeRelationshipFactory", "setInitialized", (void*) ResourceRelativeRelationshipFactory_setInitialized);
    java_register_method("ResourceRelativeRelationshipFactory", "isInitialized", (void*) ResourceRelativeRelationshipFactory_isInitialized);
}

static void ResourceRelativeRelationshipFactory_initFields(ResourceRelativeRelationshipFactory* this) {
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->initialized = false;
}

void ResourceRelativeRelationshipFactory_init(ResourceRelativeRelationshipFactory* this) {
    ResourceRelativeRelationshipFactory_register();
    ResourceRelativeRelationshipFactory_initFields(this);
}

ResourceRelativeRelationshipFactory* ResourceRelativeRelationshipFactory_new(void) {
    ResourceRelativeRelationshipFactory* this = java_object_alloc(sizeof(ResourceRelativeRelationshipFactory), "ResourceRelativeRelationshipFactory");
    ResourceRelativeRelationshipFactory_init(this);
    return this;
}


// throws Exception
void ResourceRelativeRelationshipFactory_initMethod(ResourceRelativeRelationshipFactory* this, int32_t level) {
        ResourceRelativeRelationshipFactory_setInitialized(this, true);
}


// throws Exception
BasicArrayList* ResourceRelativeRelationshipFactory_getResourceRelativeRelationshipList(ResourceRelativeRelationshipFactory* this, const char* resource) {
        void* listCanBeNull = Hashtable_get(this->hashtable, resource);
        if (listCanBeNull == nullptr) {
            return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
        }
        return ((BasicArrayList*) listCanBeNull);
}


// throws Exception
void ResourceRelativeRelationshipFactory_addResourceRelativeRelationship(ResourceRelativeRelationshipFactory* this, const char* resource, RelativeRelationship* hardPoint) {
        BasicArrayList* list = ResourceRelativeRelationshipFactory_getResourceRelativeRelationshipList(this, resource);
        if (list == BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
            list = BasicArrayListD_new();
        }
        BasicArrayList_add(list, hardPoint);
        Hashtable_put(this->hashtable, resource, list);
}


bool ResourceRelativeRelationshipFactory_isLoadingLevel(ResourceRelativeRelationshipFactory* this, int32_t level) {
        return false;
}


bool ResourceRelativeRelationshipFactory_isFeature(ResourceRelativeRelationshipFactory* this) {
        return false;
}


void ResourceRelativeRelationshipFactory_setInitialized(ResourceRelativeRelationshipFactory* this, bool initialized) {
        this->initialized = initialized;
}


bool ResourceRelativeRelationshipFactory_isInitialized(ResourceRelativeRelationshipFactory* this) {
        return this->initialized;
}

