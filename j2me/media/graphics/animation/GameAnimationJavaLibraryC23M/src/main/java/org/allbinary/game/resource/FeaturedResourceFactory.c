// Generated Code Do Not Modify
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif








void FeaturedResourceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FeaturedResourceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FeaturedResourceFactory", nullptr);
    java_register_method("FeaturedResourceFactory", "init", (void*) FeaturedResourceFactory_initMethod);
    java_register_method("FeaturedResourceFactory", "clear", (void*) FeaturedResourceFactory_clear);
    java_register_method("FeaturedResourceFactory", "add", (void*) FeaturedResourceFactory_add);
    java_register_method("FeaturedResourceFactory", "getList", (void*) FeaturedResourceFactory_getList);
}

static void FeaturedResourceFactory_initFields(FeaturedResourceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListD_new();
    this->commonStrings = CommonStrings_getInstance();
    this->ANIMATION_FEATURES = "Animation Features: Vector: ";
    this->IMAGE_LABEL = " Image: ";
    this->IMAGE_GRAPHICS_ARRAY = "Image Array: ";
    this->IMAGE_GRAPHICS_ROTATION = "Image Rotate: ";
    this->SPRITE_QUARTER = " Sprite Quarter: ";
    this->SPRITE_FULL = " Sprite Full: ";
    this->IS_LOADING_LEVEL_LABEL = " isLoadingLevel ";
    this->IS_FEATURE = " isFeature: ";
    this->GAME_FEATURE_CONTROLLED = "GameFeatureControlledInterface: ";
}


void FeaturedResourceFactory_init(FeaturedResourceFactory* this) {
    FeaturedResourceFactory_register();
    FeaturedResourceFactory_initFields(this);
}

FeaturedResourceFactory* FeaturedResourceFactory_new(void) {
    FeaturedResourceFactory* this = java_object_alloc(sizeof(FeaturedResourceFactory), "FeaturedResourceFactory");
    FeaturedResourceFactory_init(this);
    return this;
}


// throws Exception
void FeaturedResourceFactory_initMethod(FeaturedResourceFactory* this, int32_t level) {
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = 0; index < size; index++) {
            GameFeatureControlledInterface* featureInterface = ((GameFeatureControlledInterface*) this->list->objectArray[index]);
            bool isLoadingLevel = GameFeatureControlledInterface_isLoadingLevel(featureInterface, level);
            bool isFeature = GameFeatureControlledInterface_isFeature(featureInterface);
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendboolean(StringMaker_append(StringMaker_appendboolean(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), this->GAME_FEATURE_CONTROLLED), java_string_of(featureInterface)), this->IS_LOADING_LEVEL_LABEL), ResourceLoadingLevelFactory_getLevelString(ResourceLoadingLevelFactory_getInstance(), level)), CommonSeps_getInstance()->COLON_SEP), isLoadingLevel), this->IS_FEATURE), isFeature)), this, this->commonStrings->INIT);
            if (isLoadingLevel && isFeature) {
                GameFeatureControlledInterface_initMethod(featureInterface, level);
            }
        }
        Features* features = Features_getInstance();
        GraphicsFeatureFactory* graphicsFeatureFactory = GraphicsFeatureFactory_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->ANIMATION_FEATURES);
        StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->VECTOR_GRAPHICS));
        StringMaker_append(stringBuffer, this->IMAGE_LABEL);
        StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->IMAGE_GRAPHICS));
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, this->commonStrings->INIT);
        if (Features_isFeature(features, graphicsFeatureFactory->IMAGE_GRAPHICS)) {
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, this->IMAGE_GRAPHICS_ARRAY);
            StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS));
            StringMaker_append(stringBuffer, this->IMAGE_GRAPHICS_ROTATION);
            StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS));
            StringMaker_append(stringBuffer, this->SPRITE_QUARTER);
            StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS));
            StringMaker_append(stringBuffer, this->SPRITE_FULL);
            StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->SPRITE_FULL_GRAPHICS));
            LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, this->commonStrings->INIT);
        }
}


void FeaturedResourceFactory_clear(FeaturedResourceFactory* this) {
        BasicArrayList_clear(this->list);
}


void FeaturedResourceFactory_add(FeaturedResourceFactory* this, GameFeatureControlledInterface* featureInterface) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), StringUtil_toString(StringUtil_getInstance(), featureInterface))), this, this->commonStrings->ADD);
        BasicArrayList_add(this->list, featureInterface);
}


BasicArrayList* FeaturedResourceFactory_getList(FeaturedResourceFactory* this) {
        return this->list;
}

