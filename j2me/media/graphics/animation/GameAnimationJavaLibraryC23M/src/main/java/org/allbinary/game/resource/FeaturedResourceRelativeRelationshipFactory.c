// Generated Code Do Not Modify
#include "org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/relationship/RelativeLayerRelationship.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"
#include "org/allbinary/game/resource/ResourceRelativeRelationshipFactoryInterface.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif


static FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_INSTANCE;




static BasicArrayList* FeaturedResourceRelativeRelationshipFactory_duplicate(FeaturedResourceRelativeRelationshipFactory* this, BasicArrayList* list, AllBinaryLayer* layer);

void FeaturedResourceRelativeRelationshipFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FeaturedResourceRelativeRelationshipFactory_INSTANCE = FeaturedResourceRelativeRelationshipFactory_new();
}

void FeaturedResourceRelativeRelationshipFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FeaturedResourceRelativeRelationshipFactory", "FeaturedResourceFactory");
    java_register_method("FeaturedResourceRelativeRelationshipFactory", "getRelativeRelationshipList", (void*) FeaturedResourceRelativeRelationshipFactory_getRelativeRelationshipList);
    java_register_method("FeaturedResourceRelativeRelationshipFactory", "duplicate", (void*) FeaturedResourceRelativeRelationshipFactory_duplicate);
}

static void FeaturedResourceRelativeRelationshipFactory_initFields(FeaturedResourceRelativeRelationshipFactory* this) {
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void FeaturedResourceRelativeRelationshipFactory_init(FeaturedResourceRelativeRelationshipFactory* this) {
    FeaturedResourceRelativeRelationshipFactory_register();
    FeaturedResourceFactory_init(&this->base);
    FeaturedResourceRelativeRelationshipFactory_initFields(this);
}

FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_new(void) {
    FeaturedResourceRelativeRelationshipFactory* this = java_object_alloc(sizeof(FeaturedResourceRelativeRelationshipFactory), "FeaturedResourceRelativeRelationshipFactory");
    FeaturedResourceRelativeRelationshipFactory_init(this);
    return this;
}


FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_getInstance(void) {
        return (FeaturedResourceRelativeRelationshipFactory_staticInit(), FeaturedResourceRelativeRelationshipFactory_INSTANCE);
}


// throws Exception
BasicArrayList* FeaturedResourceRelativeRelationshipFactory_getRelativeRelationshipList(FeaturedResourceRelativeRelationshipFactory* this, const char* resource, AllBinaryLayer* layer) {
        BasicArrayList* featureReleaseList = FeaturedResourceFactory_getList(this);
        int32_t size = BasicArrayList_size(FeaturedResourceFactory_getList(this));
        for (int32_t index = 0; index < size; index++) {
            ResourceRelativeRelationshipFactoryInterface* featureInterface = ((ResourceRelativeRelationshipFactoryInterface*) featureReleaseList->objectArray[index]);
            if (GameFeatureControlledInterface_isFeature(featureInterface)) {
                BasicArrayList* list = ResourceRelativeRelationshipFactoryInterface_getResourceRelativeRelationshipList(featureInterface, resource);
                if (list != BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
                    return FeaturedResourceRelativeRelationshipFactory_duplicate(this, list, layer);
                }
            }
        }
        java_throw(java_exception_new("Exception", java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Not available for current feature selection or Resource: "), resource))));
}


// throws Exception
static BasicArrayList* FeaturedResourceRelativeRelationshipFactory_duplicate(FeaturedResourceRelativeRelationshipFactory* this, BasicArrayList* list, AllBinaryLayer* layer) {
        PointFactory* pointFactory = PointFactory_getInstance();
        BasicArrayList* newList = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            RelativeRelationship* relativeRelationship = ((RelativeRelationship*) list->objectArray[index]);
            BasicArrayList_add(newList, RelativeLayerRelationship_new(layer, PointFactory_createXY(pointFactory, RelativeRelationship_getX(relativeRelationship), RelativeRelationship_getY(relativeRelationship)), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance())));
        }
        return newList;
}

