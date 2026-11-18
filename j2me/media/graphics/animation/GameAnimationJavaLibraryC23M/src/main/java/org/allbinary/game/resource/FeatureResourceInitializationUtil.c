// Generated Code Do Not Modify
#include "org/allbinary/game/resource/FeatureResourceInitializationUtil.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"
#include "org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h"


static FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_instance;



void FeatureResourceInitializationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FeatureResourceInitializationUtil_instance = FeatureResourceInitializationUtil_new();
}

void FeatureResourceInitializationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FeatureResourceInitializationUtil", nullptr);
    java_register_method("FeatureResourceInitializationUtil", "init", (void*) FeatureResourceInitializationUtil_initMethod);
}

static void FeatureResourceInitializationUtil_initFields(FeatureResourceInitializationUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void FeatureResourceInitializationUtil_init(FeatureResourceInitializationUtil* this) {
    FeatureResourceInitializationUtil_register();
    FeatureResourceInitializationUtil_initFields(this);
}

FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_new(void) {
    FeatureResourceInitializationUtil* this = java_object_alloc(sizeof(FeatureResourceInitializationUtil), "FeatureResourceInitializationUtil");
    FeatureResourceInitializationUtil_init(this);
    return this;
}


FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_getInstance(void) {
        return (FeatureResourceInitializationUtil_staticInit(), FeatureResourceInitializationUtil_instance);
}


// throws Exception
void FeatureResourceInitializationUtil_initMethod(FeatureResourceInitializationUtil* this, int32_t level) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, commonStrings->START, this, commonStrings->INIT);
        FeaturedResourceFactory* featuredResourceFactory = FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance();
        FeaturedResourceFactory_initMethod(featuredResourceFactory, level);
        FeaturedResourceFactory_initMethod(FeaturedResourceRelativeRelationshipFactory_getInstance(), level);
}

