// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameConfiguration.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/ABHashtable.h")
#include "org/allbinary/game/configuration/ABHashtable.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ABHashtable.h")
#include "org/allbinary/game/configuration/event/ABHashtable.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/ABHashtable.h")
#include "org/allbinary/game/configuration/event/ABHashtable.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/ABHashtable.h")
#include "org/allbinary/logic/java/bool/ABHashtable.h"
#endif
#if __has_include("org/allbinary/logic/math/ABHashtable.h")
#include "org/allbinary/logic/math/ABHashtable.h"
#endif
#if __has_include("org/allbinary/logic/string/ABHashtable.h")
#include "org/allbinary/logic/string/ABHashtable.h"
#endif
#if __has_include("org/allbinary/logic/string/ABHashtable.h")
#include "org/allbinary/logic/string/ABHashtable.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static int32_t GameConfiguration_MIN_VALUE;
















void GameConfiguration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameConfiguration_MIN_VALUE = (Integer_staticInit(), Integer_MIN_VALUE);
}

void GameConfiguration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameConfiguration", nullptr);
    java_register_method("GameConfiguration", "setValue", (void*) GameConfiguration_setValue);
    java_register_method("GameConfiguration", "getValue", (void*) GameConfiguration_getValue);
    java_register_method("GameConfiguration", "setMaxValue", (void*) GameConfiguration_setMaxValue);
    java_register_method("GameConfiguration", "getMaxValue", (void*) GameConfiguration_getMaxValue);
    java_register_method("GameConfiguration", "setMinValue", (void*) GameConfiguration_setMinValue);
    java_register_method("GameConfiguration", "getMinValue", (void*) GameConfiguration_getMinValue);
    java_register_method("GameConfiguration", "setName", (void*) GameConfiguration_setName);
    java_register_method("GameConfiguration", "getName", (void*) GameConfiguration_getName);
    java_register_method("GameConfiguration", "setDefaultValue", (void*) GameConfiguration_setDefaultValue);
    java_register_method("GameConfiguration", "getDefaultValue", (void*) GameConfiguration_getDefaultValue);
    java_register_method("GameConfiguration", "setDefault", (void*) GameConfiguration_setDefault);
    java_register_method("GameConfiguration", "toString", (void*) GameConfiguration_toString);
    java_register_method("GameConfiguration", "setModifiable", (void*) GameConfiguration_setModifiable);
    java_register_method("GameConfiguration", "isModifiable", (void*) GameConfiguration_isModifiable);
}

static void GameConfiguration_initFields(GameConfiguration* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    this->defaultValue = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
    this->value = (GameConfiguration_staticInit(), GameConfiguration_MIN_VALUE);
    this->minValue = this->defaultValue;
    this->maxValue = this->defaultValue;
    this->modifiable = BooleanFactory_getInstance()->TRUE;
}


void GameConfiguration_init(GameConfiguration* this, const char* name, int32_t defaultValue, int32_t minValue, int32_t maxValue) {
    GameConfiguration_register();
    GameConfiguration_initFields(this);
        GameConfiguration_setName(this, name);
        GameConfiguration_setDefaultValue(this, defaultValue);
        this->value = GameConfiguration_getDefaultValue(this);
        GameConfiguration_setMinValue(this, minValue);
        GameConfiguration_setMaxValue(this, maxValue);
        Hashtable_put(GameConfigurationSingleton_getHashtable(GameConfigurationSingleton_getInstance()), GameConfiguration_getName(this), this);
}

GameConfiguration* GameConfiguration_new(const char* name, int32_t defaultValue, int32_t minValue, int32_t maxValue) {
    GameConfiguration* this = java_object_alloc(sizeof(GameConfiguration), "GameConfiguration");
    GameConfiguration_init(this, name, defaultValue, minValue, maxValue);
    return this;
}


// throws Exception
void GameConfiguration_setValue(GameConfiguration* this, int32_t value) {
        if (this->value != value) {
            int32_t oldValue = this->value;
            this->value = value;
            BasicEventHandler_fireEvent(GameFeatureEventHandler_getInstance(), GameFeatureEvent_new(this, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_new(), this->name), " value: from: "), ((int32_t) Integer_intValue(oldValue))), " to "), ((int32_t) Integer_intValue(this->value))))));
        }
}


int32_t GameConfiguration_getValue(GameConfiguration* this) {
        return this->value;
}


void GameConfiguration_setMaxValue(GameConfiguration* this, int32_t maxValue) {
        this->maxValue = maxValue;
}


int32_t GameConfiguration_getMaxValue(GameConfiguration* this) {
        return this->maxValue;
}


void GameConfiguration_setMinValue(GameConfiguration* this, int32_t minValue) {
        this->minValue = minValue;
}


int32_t GameConfiguration_getMinValue(GameConfiguration* this) {
        return this->minValue;
}


void GameConfiguration_setName(GameConfiguration* this, const char* name) {
        this->name = name;
}


const char* GameConfiguration_getName(GameConfiguration* this) {
        return this->name;
}


void GameConfiguration_setDefaultValue(GameConfiguration* this, int32_t defaultValue) {
        this->defaultValue = defaultValue;
}


int32_t GameConfiguration_getDefaultValue(GameConfiguration* this) {
        return this->defaultValue;
}


// throws Exception
void GameConfiguration_setDefault(GameConfiguration* this) {
        GameConfiguration_setValue(this, GameConfiguration_getDefaultValue(this));
}


const char* GameConfiguration_toString(GameConfiguration* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Name: ");
        StringMaker_append(stringBuffer, this->name);
        StringMaker_append(stringBuffer, " Min: ");
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getMinValue(this))));
        StringMaker_append(stringBuffer, " Max: ");
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getMaxValue(this))));
        StringMaker_append(stringBuffer, " Value: ");
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this))));
        StringMaker_append(stringBuffer, " Default: ");
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getDefaultValue(this))));
        StringMaker_append(stringBuffer, " Modifiable: ");
        StringMaker_appendboolean(stringBuffer, Boolean_booleanValue(GameConfiguration_isModifiable(this)));
        return java_string_of(stringBuffer);
}


void GameConfiguration_setModifiable(GameConfiguration* this, bool modifiable) {
        this->modifiable = modifiable;
}


bool GameConfiguration_isModifiable(GameConfiguration* this) {
        return this->modifiable;
}

