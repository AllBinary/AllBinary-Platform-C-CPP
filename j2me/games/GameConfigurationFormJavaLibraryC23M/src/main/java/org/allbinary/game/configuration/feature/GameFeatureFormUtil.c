// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#include "javax/microedition/lcdui/ChoiceGroup.h"
#include "javax/microedition/lcdui/Item.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
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
#if __has_include("org/allbinary/util/HashtableUtil.h")
#include "org/allbinary/util/HashtableUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationUtil.h")
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#endif


static GameFeatureFormUtil* GameFeatureFormUtil_instance;





void GameFeatureFormUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameFeatureFormUtil_instance = GameFeatureFormUtil_new();
}

void GameFeatureFormUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureFormUtil", nullptr);
    java_register_method("GameFeatureFormUtil", "getChoiceGroup", (void*) GameFeatureFormUtil_getChoiceGroup);
    java_register_method("GameFeatureFormUtil", "addChoiceGroup", (void*) GameFeatureFormUtil_addChoiceGroup);
    java_register_method("GameFeatureFormUtil", "setDefault", (void*) GameFeatureFormUtil_setDefault);
}

static void GameFeatureFormUtil_initFields(GameFeatureFormUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->meUtil = MIDPUtil_getInstance();
}

void GameFeatureFormUtil_init(GameFeatureFormUtil* this) {
    GameFeatureFormUtil_register();
    GameFeatureFormUtil_initFields(this);
}

GameFeatureFormUtil* GameFeatureFormUtil_new(void) {
    GameFeatureFormUtil* this = java_object_alloc(sizeof(GameFeatureFormUtil), "GameFeatureFormUtil");
    GameFeatureFormUtil_init(this);
    return this;
}


GameFeatureFormUtil* GameFeatureFormUtil_getInstance(void) {
        return (GameFeatureFormUtil_staticInit(), GameFeatureFormUtil_instance);
}


ChoiceGroup* GameFeatureFormUtil_getChoiceGroup(GameFeatureFormUtil* this, ABHashtable* hashtable, const char* name, int32_t option) {
        StringMaker* stringMaker = StringMaker_new();
        ChoiceGroup* choiceGroup = ChoiceGroup_new4(name, option, StringUtil_getArrayInstance(StringUtil_getInstance()), (NullImage_staticInit(), NullImage_NULL_IMAGE_ARRAY));
        BasicArrayList* list = ((BasicArrayList*) Hashtable_get(hashtable, ((void*) name)));
        Features* features = Features_getInstance();
        const char* ADD_CHOICE = ": Adding Choice: ";
        const char* GET_CHOICE_GROUP = "getChoiceGroup";
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            Feature* gameFeature = ((Feature*) list->objectArray[index]);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, name), ADD_CHOICE), java_string_of(gameFeature))), this, GET_CHOICE_GROUP);
            ChoiceGroup_append(choiceGroup, java_string_of(gameFeature), (NullImage_staticInit(), NullImage_NULL_IMAGE));
            if (Features_isFeature(features, gameFeature)) {
                ChoiceGroup_setSelectedIndex(choiceGroup, index, true);
            }
        }
        return choiceGroup;
}


void GameFeatureFormUtil_addChoiceGroup(GameFeatureFormUtil* this, CommandForm* form, ABHashtable* hashtable, int32_t option) {
        StringMaker* stringMaker = StringMaker_new();
        const char* ADDING_CHOICE_GROUP = "Adding Choice Group: ";
        const char* ADD_CHOICE_GROUP = "addChoiceGroup";
        int32_t size = Hashtable_size(hashtable);
        void** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        const char* name = nullptr;
        for (int32_t index = 0; index < size; index++) {
            name = ((const char*) objectArray[index]);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(stringMaker, ADDING_CHOICE_GROUP), name)), this, ADD_CHOICE_GROUP);
            MIDPUtil_appendItem(this->meUtil, form, GameFeatureFormUtil_getChoiceGroup(this, hashtable, name, option));
        }
}


// throws Exception
void GameFeatureFormUtil_setDefault(GameFeatureFormUtil* this, CommandForm* form) {
        int32_t size = Form_size(form);
        for (int32_t index = 0; index < size; index++) {
            Item* item = Form_get(form, index);
            if (java_instanceof(item, "GameConfigurationGauge")) {
                GameConfigurationUtil_setDefault(GameConfigurationUtil_getInstance(), ((GameConfigurationGauge*) item));
            } else if (java_instanceof(item, "ChoiceGroup")) {
                GameFeatureUtil_setDefault(GameFeatureUtil_getInstance(), ((ChoiceGroup*) item));
            }
        }
}

