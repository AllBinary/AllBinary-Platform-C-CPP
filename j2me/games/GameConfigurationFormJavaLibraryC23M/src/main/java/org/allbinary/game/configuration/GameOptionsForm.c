// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "javax/microedition/lcdui/Choice.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Item.h"
#include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#include "org/allbinary/game/configuration/feature/GameFeatureItemCommandListener.h"
#include "org/allbinary/game/configuration/feature/GameFeatureItemStateListener.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/input/gyro/OrientationData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/configuration/GameConfigurationTextInput.h"
#include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#endif
#if __has_include("org/allbinary/input/gyro/OrientationData.h")
#include "org/allbinary/input/gyro/OrientationData.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/SensorFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#endif
#if __has_include("org/allbinary/util/HashtableUtil.h")
#include "org/allbinary/util/HashtableUtil.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/command/MyCommandsFactory.h")
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif





static void GameOptionsForm_addTextFieldsIfSimulated(GameOptionsForm* this);

static void GameOptionsForm_addTextFields(GameOptionsForm* this);

static void GameOptionsForm_addConfiguration(GameOptionsForm* this);



void GameOptionsForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameOptionsForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameOptionsForm", "CommandForm");
    java_register_method("GameOptionsForm", "closeClientInformation", (void*) GameOptionsForm_closeClientInformation);
    java_register_method("GameOptionsForm", "addTextFieldsIfSimulated", (void*) GameOptionsForm_addTextFieldsIfSimulated);
    java_register_method("GameOptionsForm", "addTextFields", (void*) GameOptionsForm_addTextFields);
    java_register_method("GameOptionsForm", "addConfiguration", (void*) GameOptionsForm_addConfiguration);
    java_register_method("GameOptionsForm", "initCommands", (void*) GameOptionsForm_initCommands);
    java_register_method("GameOptionsForm", "save", (void*) GameOptionsForm_save);
}

static void GameOptionsForm_initFields(GameOptionsForm* this) {
    this->meUtil = MIDPUtil_getInstance();
}


void GameOptionsForm_init(GameOptionsForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    GameOptionsForm_register();
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        GameOptionsForm_initFields(this);
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
        GameOptionsForm_addConfiguration(this);
        GameFeatureFormUtil* gameFeatureFormUtil = GameFeatureFormUtil_getInstance();
        GameFeatureFormUtil_addChoiceGroup(gameFeatureFormUtil, this, GameFeatureChoiceGroups_get(GameFeatureChoiceGroups_getExclusiveInstance()), (Choice_staticInit(), Choice_EXCLUSIVE));
        GameFeatureFormUtil_addChoiceGroup(gameFeatureFormUtil, this, GameFeatureChoiceGroups_get(GameFeatureChoiceGroups_getMultipleInstance()), (Choice_staticInit(), Choice_MULTIPLE));
        GameOptionsForm_initCommands(this, commandListener);
        Form_setItemStateListener(this, GameFeatureItemStateListener_new(this));
        GameOptionsForm_addTextFieldsIfSimulated(this);
}

GameOptionsForm* GameOptionsForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    GameOptionsForm* this = java_object_alloc(sizeof(GameOptionsForm), "GameOptionsForm");
    GameOptionsForm_init(this, commandListener, title, backgrounBasicColor, foregroundBasicColor);
    return this;
}


// throws Exception
void GameOptionsForm_closeClientInformation(GameOptionsForm* this, AbeClientInformationInterface* abeClientInformation) {
        CommandForm_close((&this->base));
        GameOptionsForm_save(this, abeClientInformation);
}


static void GameOptionsForm_addTextFieldsIfSimulated(GameOptionsForm* this) {
        const char* key = OrientationData_getInstance()->ORIENTATION_SENSOR_INPUT;
        ABHashtable* hashtable = GameFeatureChoiceGroups_get(GameFeatureChoiceGroups_getExclusiveInstance());
        if (hashtable != nullptr) {
            void* listCanBeNull = Hashtable_get(hashtable, key);
            if (listCanBeNull != nullptr) {
                BasicArrayList* list = ((BasicArrayList*) listCanBeNull);
                if (BasicArrayList_contains(list, SensorFeatureFactory_getInstance()->SIMULATED_ORIENTATION_SENSORS)) {
                    GameOptionsForm_addTextFields(this);
                }
            }
        }
}


static void GameOptionsForm_addTextFields(GameOptionsForm* this) {
        ABHashtable* hashtable = GameConfigurationTextInput_getHashtable();
        int32_t size = Hashtable_size(hashtable);
        void** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        GameConfigurationTextInput* gameConfigurationTextInput = nullptr;
        TextField* textField = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameConfigurationTextInput = ((GameConfigurationTextInput*) Hashtable_get(hashtable, ((void*) objectArray[index])));
            textField = TextField_new(GameConfigurationTextInput_getLabel(gameConfigurationTextInput), GameConfigurationTextInput_getText(gameConfigurationTextInput), 30, (TextField_staticInit(), TextField_ANY));
            MIDPUtil_appendItem(this->meUtil, this, textField);
        }
}


static void GameOptionsForm_addConfiguration(GameOptionsForm* this) {
        const char* METHOD_NAME = "addConfiguration";
        const char* NAME = "Name: ";
        BasicArrayList* list = GameConfigurationSingleton_getOptionsBasicArrayList(GameConfigurationSingleton_getInstance());
        Command* GAUGE_CHANGE = MyCommandsFactory_getInstance()->GAUGE_CHANGE;
        StringMaker* stringMaker = StringMaker_new();
        int32_t size = BasicArrayList_size(list);
        GameConfiguration* gameConfiguration = nullptr;
        GameConfigurationGauge* gauge = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameConfiguration = ((GameConfiguration*) list->objectArray[index]);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(stringMaker, NAME), java_string_of(gameConfiguration))), this, METHOD_NAME);
            gauge = GameConfigurationGauge_new(gameConfiguration);
            Gauge_setDefaultCommand(gauge, GAUGE_CHANGE);
            Gauge_setItemCommandListener(gauge, GameFeatureItemCommandListener_new(this));
            MIDPUtil_appendItem(this->meUtil, this, gauge);
        }
}


void GameOptionsForm_initCommands(GameOptionsForm* this, CommandListener* cmdListener) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        CommandForm_removeAllCommands(this);
        CommandForm_addCommand(this, gameCommandsFactory->CLOSE_OPTIONS);
        CommandForm_addCommand(this, gameCommandsFactory->DEFAULT_OPTIONS);
        Displayable_setCommandListener(this, cmdListener);
}


// throws Exception
void GameOptionsForm_save(GameOptionsForm* this, AbeClientInformationInterface* abeClientInformation) {
        int32_t size = Form_size(this);
        Item* item = nullptr;
        for (int32_t index = 0; index < size; index++) {
            item = Form_get(this, index);
            if (java_instanceof(item, "GameConfigurationGauge")) {
                GameConfigurationUtil_update(GameConfigurationUtil_getInstance(), ((GameConfigurationGauge*) item));
            } else if (java_instanceof(item, "TextField")) {
                GameConfigurationTextInput_update(((TextField*) item));
            }
        }
        GameConfigurationUtil_updateCompetitionValue(GameConfigurationUtil_getInstance());
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        GameConfiguration* SCALE = GameConfigurationCentral_getInstance()->SCALE;
        Hashtable_put(hashtable, GameConfiguration_getName(SCALE), java_string_of(Integer_intValue(GameConfiguration_getValue(SCALE))));
        KeyValuePersistance* keyValuePersistance = GameConfigurationPersistanceSingleton_getInstance();
        BasicPersitance_clear(keyValuePersistance);
        KeyValuePersistance_loadAll(keyValuePersistance, abeClientInformation);
        BasicArrayList* list = BasicPersitance_getIds(keyValuePersistance);
        KeyValuePersistance_save(keyValuePersistance, abeClientInformation, hashtable);
        int32_t size2 = BasicArrayList_size(list);
        int32_t integer = 0;
        for (int32_t index = 0; index < size2; index++) {
            integer = ((int32_t) list->objectArray[index]);
            BasicPersitance_delete(keyValuePersistance, abeClientInformation, Integer_intValue(integer));
        }
}

