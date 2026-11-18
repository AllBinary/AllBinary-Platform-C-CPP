// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* GameConfigurationCentral_SINGLETON;







void GameConfigurationCentral_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameConfigurationCentral_SINGLETON = NullUtil_getInstance()->NULL_OBJECT;
}

void GameConfigurationCentral_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameConfigurationCentral", nullptr);
    java_register_method("GameConfigurationCentral", "load", (void*) GameConfigurationCentral_load);
    java_register_method("GameConfigurationCentral", "setGameControlFidelity", (void*) GameConfigurationCentral_setGameControlFidelity);
    java_register_method("GameConfigurationCentral", "getGameControlFidelity", (void*) GameConfigurationCentral_getGameControlFidelity);
    java_register_method("GameConfigurationCentral", "toString", (void*) GameConfigurationCentral_toString);
}

static void GameConfigurationCentral_initFields(GameConfigurationCentral* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    this->gameControlFidelity = 36;
}


GameConfigurationCentral* GameConfigurationCentral_getInstance(void) {
        if ((GameConfigurationCentral_staticInit(), GameConfigurationCentral_SINGLETON) == NullUtil_getInstance()->NULL_OBJECT) {
            GameConfigurationCentral_SINGLETON = GameConfigurationCentral_new();
        }
        return ((GameConfigurationCentral*) (GameConfigurationCentral_staticInit(), GameConfigurationCentral_SINGLETON));
}


void GameConfigurationCentral_init(GameConfigurationCentral* this) {
    GameConfigurationCentral_register();
    GameConfigurationCentral_initFields(this);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        this->SCALE = GameConfiguration_new("Scale", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3));
        this->ORIENTATION = GameConfiguration_new("Orientation", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 8));
        this->SENSOR_UPDATE_RATE = GameConfiguration_new("Sensor Update Rate", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3));
        this->VIBRATION = GameConfiguration_new("Vibration", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3));
        this->CHALLENGE_LEVEL = GameConfiguration_new("Global Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->COLLIDE_DAMAGE = GameConfiguration_new("Collide Damage Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->DURABILITY_CHALLENGE_LEVEL = GameConfiguration_new("Enemy Durability Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->SPEED_CHALLENGE_LEVEL = GameConfiguration_new("Enemy Speed Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->ATTACK_CHALLENGE_LEVEL = GameConfiguration_new("Enemy Attack Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->CONTROL_LEVEL = GameConfiguration_new("Control Fidelity", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 5), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->PLAYER_INPUT_WAIT = GameConfiguration_new("Input Wait", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 5), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->SPEED = GameConfiguration_new("Game Speed (Device Specific)", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 5), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->SOUND_VOLUME = GameConfiguration_new("Sound Volume", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 6), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->MAX_GAME_OBJECTS = GameConfiguration_new("Max Game Objects", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 20), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 50));
        this->MAX_LAYERS = GameConfiguration_new("Max Layers", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 20), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 50));
}

GameConfigurationCentral* GameConfigurationCentral_new(void) {
    GameConfigurationCentral* this = java_object_alloc(sizeof(GameConfigurationCentral), "GameConfigurationCentral");
    GameConfigurationCentral_init(this);
    return this;
}


void GameConfigurationCentral_load(GameConfigurationCentral* this, AbeClientInformationInterface* abeClientInformation) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
            KeyValuePersistance* keyValuePersistance = GameConfigurationPersistanceSingleton_getInstance();
            BasicPersitance_clear(keyValuePersistance);
            KeyValuePersistance_loadAll(keyValuePersistance, abeClientInformation);
            BasicArrayList* list = BasicPersitance_getIds(keyValuePersistance);
            if (BasicArrayList_size(list) > 0) {
                ABHashtable* hashtable = KeyValuePersistance_get(keyValuePersistance, 0);
                void* anyType = ((void*) GameConfiguration_getName(this->SCALE));
                const char* value = ((const char*) Hashtable_get(hashtable, anyType));
                GameConfiguration_setValue(this->SCALE, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, ((int32_t) (((int32_t) strtoll(value, nullptr, 10))))));
            } else {
                LogUtil_putF(this->logUtil, "No Game Configuration To Load", this, commonStrings->LOAD);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->LOAD, e);
        } JAVA_END_TRY;
}


void GameConfigurationCentral_setGameControlFidelity(GameConfigurationCentral* this, int32_t gameControlFidelity) {
        this->gameControlFidelity = gameControlFidelity;
}


int32_t GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral* this) {
        return this->gameControlFidelity;
}


const char* GameConfigurationCentral_toString(GameConfigurationCentral* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonStrings = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->SCALE));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->SCALE))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->ORIENTATION));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->ORIENTATION))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->SENSOR_UPDATE_RATE));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->SENSOR_UPDATE_RATE))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->VIBRATION));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->VIBRATION))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->CHALLENGE_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->CHALLENGE_LEVEL))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->COLLIDE_DAMAGE));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->COLLIDE_DAMAGE))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->DURABILITY_CHALLENGE_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->DURABILITY_CHALLENGE_LEVEL))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->SPEED_CHALLENGE_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->SPEED_CHALLENGE_LEVEL))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->ATTACK_CHALLENGE_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->ATTACK_CHALLENGE_LEVEL))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->CONTROL_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->CONTROL_LEVEL))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->SPEED));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->SPEED))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->MAX_GAME_OBJECTS));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->MAX_GAME_OBJECTS))));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->MAX_LAYERS));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(this->MAX_LAYERS))));
        return java_string_of(stringBuffer);
}

