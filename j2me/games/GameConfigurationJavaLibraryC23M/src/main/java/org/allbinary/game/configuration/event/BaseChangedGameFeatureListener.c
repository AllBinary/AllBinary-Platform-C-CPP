// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/event/BaseChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif










void BaseChangedGameFeatureListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseChangedGameFeatureListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseChangedGameFeatureListener", nullptr);
    java_register_method("BaseChangedGameFeatureListener", "onEvent", (void*) BaseChangedGameFeatureListener_onEvent);
    java_register_method("BaseChangedGameFeatureListener", "onGameFeatureChange", (void*) BaseChangedGameFeatureListener_onGameFeatureChange);
    java_register_method("BaseChangedGameFeatureListener", "add", (void*) BaseChangedGameFeatureListener_add);
    java_register_method("BaseChangedGameFeatureListener", "remove", (void*) BaseChangedGameFeatureListener_remove);
    java_register_method("BaseChangedGameFeatureListener", "setChanged", (void*) BaseChangedGameFeatureListener_setChanged);
    java_register_method("BaseChangedGameFeatureListener", "isChangedFeature", (void*) BaseChangedGameFeatureListener_isChangedFeature);
    java_register_method("BaseChangedGameFeatureListener", "isChanged", (void*) BaseChangedGameFeatureListener_isChanged);
}

static void BaseChangedGameFeatureListener_initFields(BaseChangedGameFeatureListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameFeatureUtil = GameFeatureUtil_getInstance();
    this->list = BasicArrayListD_new();
    this->changed = true;
}

void BaseChangedGameFeatureListener_init(BaseChangedGameFeatureListener* this) {
    BaseChangedGameFeatureListener_register();
    BaseChangedGameFeatureListener_initFields(this);
}

BaseChangedGameFeatureListener* BaseChangedGameFeatureListener_new(void) {
    BaseChangedGameFeatureListener* this = java_object_alloc(sizeof(BaseChangedGameFeatureListener), "BaseChangedGameFeatureListener");
    BaseChangedGameFeatureListener_init(this);
    return this;
}


void BaseChangedGameFeatureListener_onEvent(BaseChangedGameFeatureListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(CommonStrings_getInstance()->NOT_IMPLEMENTED, this);
}


void BaseChangedGameFeatureListener_onGameFeatureChange(BaseChangedGameFeatureListener* this, GameFeatureEvent* gameFeatureEvent) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->gameFeatureUtil->GAME_FEATURE_CHANGED), GameFeatureEvent_getWhatChanged(gameFeatureEvent))), this, this->gameFeatureUtil->ON_GAME_FEATURE_CHANGE);
        BasicArrayList_add(this->list, GameFeatureEvent_getGameOption(gameFeatureEvent));
        BaseChangedGameFeatureListener_setChanged(this, true);
}


void BaseChangedGameFeatureListener_add(BaseChangedGameFeatureListener* this, Feature* gameFeature) {
        BasicArrayList_add(this->list, gameFeature);
}


void BaseChangedGameFeatureListener_remove(BaseChangedGameFeatureListener* this, Feature* gameFeature) {
        BasicArrayList_remove(this->list, gameFeature);
}


void BaseChangedGameFeatureListener_setChanged(BaseChangedGameFeatureListener* this, bool initialized) {
        this->changed = initialized;
        if (!BaseChangedGameFeatureListener_isChanged(this)) {
            BasicArrayList_clear(this->list);
        }
}


bool BaseChangedGameFeatureListener_isChangedFeature(BaseChangedGameFeatureListener* this, Feature* gameFeature) {
        bool isChanged = BasicArrayList_contains(this->list, gameFeature);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "GameFeature: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), gameFeature));
        StringMaker_append(stringBuffer, " isFeature: ");
        StringMaker_appendboolean(stringBuffer, Features_isFeature(Features_getInstance(), gameFeature));
        StringMaker_append(stringBuffer, " isChanged: ");
        StringMaker_appendboolean(stringBuffer, isChanged);
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, "isChanged");
        return isChanged;
}


bool BaseChangedGameFeatureListener_isChanged(BaseChangedGameFeatureListener* this) {
        return this->changed;
}

