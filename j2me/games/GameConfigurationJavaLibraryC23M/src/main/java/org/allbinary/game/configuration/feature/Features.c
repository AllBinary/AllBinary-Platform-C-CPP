// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
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
#if __has_include("org/allbinary/game/configuration/event/GameFeatureEventHandler.h")
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
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
#if __has_include("org/allbinary/game/configuration/event/GameFeatureEventHandler.h")
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif


static void* Features_SINGLETON;







static void Features_initMethod(Features* this);




void Features_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Features_SINGLETON = NullUtil_getInstance()->NULL_OBJECT;
}

void Features_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Features", nullptr);
    java_register_method("Features", "addDefault", (void*) Features_addDefault);
    java_register_method("Features", "add", (void*) Features_add);
    java_register_method("Features", "removeDefault", (void*) Features_removeDefault);
    java_register_method("Features", "remove", (void*) Features_remove);
    java_register_method("Features", "init", (void*) Features_initMethod);
    java_register_method("Features", "isDefault", (void*) Features_isDefault);
    java_register_method("Features", "isFeature", (void*) Features_isFeature);
    java_register_method("Features", "toggle", (void*) Features_toggle);
}

static void Features_initFields(Features* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


Features* Features_getInstance(void) {
        if ((Features_staticInit(), Features_SINGLETON) == NullUtil_getInstance()->NULL_OBJECT) {
            Features_SINGLETON = Features_new();
        }
        return ((Features*) (Features_staticInit(), Features_SINGLETON));
}


void Features_init(Features* this) {
    Features_register();
    Features_initFields(this);
        this->list = BasicArrayListD_new();
        this->defaultList = BasicArrayListD_new();
        Features_initMethod(this);
}

Features* Features_new(void) {
    Features* this = java_object_alloc(sizeof(Features), "Features");
    Features_init(this);
    return this;
}


// throws Exception
void Features_addDefault(Features* this, Feature* gameFeature) {
        Features_add(this, gameFeature);
        if (!BasicArrayList_contains(this->defaultList, gameFeature)) {
            BasicArrayList_add(this->defaultList, gameFeature);
        }
}


// throws Exception
void Features_add(Features* this, Feature* gameFeature) {
        if (!BasicArrayList_contains(this->list, gameFeature)) {
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), java_string_of(gameFeature))), this, this->commonStrings->ADD);
            BasicArrayList_add(this->list, gameFeature);
            BasicEventHandler_fireEvent(GameFeatureEventHandler_getInstance(), GameFeatureEvent_new(gameFeature, java_string_of(gameFeature)));
        }
}


// throws Exception
void Features_removeDefault(Features* this, Feature* gameFeature) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), java_string_of(gameFeature))), this, "removeDefault");
        Features_remove(this, gameFeature);
        BasicArrayList_remove(this->defaultList, gameFeature);
}


// throws Exception
void Features_remove(Features* this, Feature* gameFeature) {
        if (BasicArrayList_contains(this->list, gameFeature)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->REMOVE);
            BasicArrayList_remove(this->list, gameFeature);
            BasicEventHandler_fireEvent(GameFeatureEventHandler_getInstance(), GameFeatureEvent_new(gameFeature, java_string_of(gameFeature)));
        }
}


static void Features_initMethod(Features* this) {
        JAVA_TRY {
            GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
            InputFeatureFactory* inputFeatureFactory = InputFeatureFactory_getInstance();
            SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory_getInstance();
            TouchFeatureFactory* touchFeatureFactory = TouchFeatureFactory_getInstance();
            Features_addDefault(this, gameFeatureFactory->ARTIFICIAL_INTELLEGENCE_PROCESSOR);
            Features_addDefault(this, gameFeatureFactory->COLLIDABLE_INTERFACE_LAYER_PROCESSOR);
            Features_addDefault(this, gameFeatureFactory->GAME_INPUT_LAYER_PROCESSOR);
            Features_addDefault(this, gameFeatureFactory->TICKABLE_LAYER_PROCESSOR);
            Features_addDefault(this, inputFeatureFactory->MULTI_KEY_PRESS);
            Features_addDefault(this, inputFeatureFactory->REMOVE_DUPLICATE_KEY_PRESSES);
            Features_addDefault(this, gameFeatureFactory->SCREEN_SHAKE);
            Features_addDefault(this, gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION);
            GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
            if (GenericOperatingSystem_isOverScan(operatingSystemInterface)) {
                Features_addDefault(this, sensorFeatureFactory->NO_ORIENTATION);
                Features_addDefault(this, touchFeatureFactory->HIDE_SCREEN_BUTTONS);
            } else {
                Features_addDefault(this, sensorFeatureFactory->ORIENTATION_SENSORS);
                Features_addDefault(this, touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS);
            }
            Features_addDefault(this, touchFeatureFactory->TOUCH_ENABLED);
            Features_addDefault(this, MainFeatureFactory_getInstance()->FULL_SCREEN);
            Features_addDefault(this, MainFeatureFactory_getInstance()->LOAD_ONDEMAND);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
        } JAVA_END_TRY;
}


bool Features_isDefault(Features* this, Feature* gameFeature) {
        return BasicArrayList_contains(this->defaultList, gameFeature);
}


bool Features_isFeature(Features* this, Feature* gameFeature) {
        return BasicArrayList_contains(this->list, gameFeature);
}


// throws Exception
void Features_toggle(Features* this, Feature* gameFeature) {
        if (Features_isFeature(this, gameFeature)) {
            Features_remove(this, gameFeature);
        } else {
            Features_add(this, gameFeature);
        }
}

