// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#include "javax/microedition/lcdui/ChoiceGroup.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
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
#if __has_include("org/allbinary/util/HashtableUtil.h")
#include "org/allbinary/util/HashtableUtil.h"
#endif


static GameFeatureUtil* GameFeatureUtil_instance;






static void GameFeatureUtil_updateExclusive(GameFeatureUtil* this, const char* selectedChoiceLabel);


void GameFeatureUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameFeatureUtil_instance = GameFeatureUtil_new();
}

void GameFeatureUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureUtil", nullptr);
    java_register_method("GameFeatureUtil", "setDefault", (void*) GameFeatureUtil_setDefault);
    java_register_method("GameFeatureUtil", "updateMultiple", (void*) GameFeatureUtil_updateMultiple);
    java_register_method("GameFeatureUtil", "updateExclusiveForChoiceGroup", (void*) GameFeatureUtil_updateExclusiveForChoiceGroup);
    java_register_method("GameFeatureUtil", "isExclusive", (void*) GameFeatureUtil_isExclusive);
    java_register_method("GameFeatureUtil", "updateExclusive", (void*) GameFeatureUtil_updateExclusive);
    java_register_method("GameFeatureUtil", "updateExclusiveList", (void*) GameFeatureUtil_updateExclusiveList);
}

static void GameFeatureUtil_initFields(GameFeatureUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->enumerationUtil = EnumerationUtil_getInstance();
    this->ON_GAME_FEATURE_CHANGE = "onGameFeatureChange";
    this->GAME_FEATURE_CHANGED = "Game Feature Changed: ";
}

void GameFeatureUtil_init(GameFeatureUtil* this) {
    GameFeatureUtil_register();
    GameFeatureUtil_initFields(this);
}

GameFeatureUtil* GameFeatureUtil_new(void) {
    GameFeatureUtil* this = java_object_alloc(sizeof(GameFeatureUtil), "GameFeatureUtil");
    GameFeatureUtil_init(this);
    return this;
}


GameFeatureUtil* GameFeatureUtil_getInstance(void) {
        return (GameFeatureUtil_staticInit(), GameFeatureUtil_instance);
}


// throws Exception
void GameFeatureUtil_setDefault(GameFeatureUtil* this, ChoiceGroup* choiceGroup) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* METHOD_NAME = "setDefault";
        const char* SELECTED_ARRAY_RETURN = "selectedArray_return[";
        const char* SELECTED_SEP = "] = ";
        bool* selectedArray_return = ((bool*) java_array_new(sizeof(bool), ChoiceGroup_size(choiceGroup)));
        int32_t total = ChoiceGroup_getSelectedFlags(choiceGroup, selectedArray_return);
        StringMaker_append(stringBuffer, "Multiple Total Choices: ");
        StringMaker_appendint(stringBuffer, total);
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, METHOD_NAME);
        Features* features = Features_getInstance();
        for (int32_t index = 0; index < java_array_length(selectedArray_return); index++) {
            bool isSelected = selectedArray_return[index];
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, SELECTED_ARRAY_RETURN);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, SELECTED_SEP);
            StringMaker_appendboolean(stringBuffer, isSelected);
            LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, METHOD_NAME);
            const char* selectedChoiceLabel = ChoiceGroup_getString(choiceGroup, index);
            Feature* gameFeature = Feature_getInstance(selectedChoiceLabel);
            if (Features_isDefault(features, gameFeature)) {
                Features_add(features, gameFeature);
                ChoiceGroup_setSelectedIndex(choiceGroup, index, true);
            } else {
                Features_remove(features, gameFeature);
                ChoiceGroup_setSelectedIndex(choiceGroup, index, false);
            }
        }
}


// throws Exception
void GameFeatureUtil_updateMultiple(GameFeatureUtil* this, ChoiceGroup* choiceGroup) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* METHOD_NAME = "updateMultiple";
        const char* SELECTED_ARRAY_RETURN = "selectedArray_return[";
        const char* SELECTED_SEP = "] = ";
        bool* selectedArray_return = ((bool*) java_array_new(sizeof(bool), ChoiceGroup_size(choiceGroup)));
        int32_t total = ChoiceGroup_getSelectedFlags(choiceGroup, selectedArray_return);
        StringMaker_append(stringBuffer, "Multiple Total Choices: ");
        StringMaker_appendint(stringBuffer, total);
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, METHOD_NAME);
        Features* features = Features_getInstance();
        for (int32_t index = 0; index < java_array_length(selectedArray_return); index++) {
            bool isSelected = selectedArray_return[index];
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, SELECTED_ARRAY_RETURN);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, SELECTED_SEP);
            StringMaker_appendboolean(stringBuffer, isSelected);
            LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, METHOD_NAME);
            const char* selectedChoiceLabel = ChoiceGroup_getString(choiceGroup, index);
            Feature* gameFeature = Feature_getInstance(selectedChoiceLabel);
            if (!isSelected && Features_isFeature(features, gameFeature)) {
                Features_remove(features, gameFeature);
            } else if (isSelected && !Features_isFeature(features, gameFeature)) {
                Features_add(features, gameFeature);
            }
        }
}


// throws Exception
void GameFeatureUtil_updateExclusiveForChoiceGroup(GameFeatureUtil* this, ChoiceGroup* choiceGroup) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* METHOD_NAME = "updateExclusive";
        const char* SELECTED_ARRAY_RETURN = "selectedArray_return[";
        const char* SELECTED_SEP = "] = ";
        bool* selectedArray_return = ((bool*) java_array_new(sizeof(bool), ChoiceGroup_size(choiceGroup)));
        int32_t total = ChoiceGroup_getSelectedFlags(choiceGroup, selectedArray_return);
        StringMaker_append(stringBuffer, "Exclusive Total Choices: 1==");
        StringMaker_appendint(stringBuffer, total);
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, METHOD_NAME);
        for (int32_t index = 0; index < java_array_length(selectedArray_return); index++) {
            bool isSelected = selectedArray_return[index];
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, SELECTED_ARRAY_RETURN);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, SELECTED_SEP);
            StringMaker_appendboolean(stringBuffer, isSelected);
            LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, METHOD_NAME);
            if (isSelected) {
                const char* selectedChoiceLabel = ChoiceGroup_getString(choiceGroup, index);
                GameFeatureUtil_updateExclusive(this, selectedChoiceLabel);
            }
        }
}


bool GameFeatureUtil_isExclusive(GameFeatureUtil* this, const char* itemLabel) {
        Enumeration* enumeration = Hashtable_keys(GameFeatureChoiceGroups_get(GameFeatureChoiceGroups_getExclusiveInstance()));
        const char* name = nullptr;
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            name = ((const char*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration));
            if (TsUtil_compareTo(this->tsUtil, itemLabel, name) == 0) {
                return true;
            }
        }
        return false;
}


// throws Exception
static void GameFeatureUtil_updateExclusive(GameFeatureUtil* this, const char* selectedChoiceLabel) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->ITEM_LABEL), selectedChoiceLabel)), this, "updateExclusive");
        Feature* gameFeature = Feature_getInstance(selectedChoiceLabel);
        ABHashtable* hashtable = GameFeatureChoiceGroups_get(GameFeatureChoiceGroups_getExclusiveInstance());
        void** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        BasicArrayList* basicArrayList = nullptr;
        void* anyType = nullptr;
        int32_t size = java_array_length(objectArray);
        for (int32_t index = 0; index < size; index++) {
            anyType = ((void*) objectArray[index]);
            basicArrayList = ((BasicArrayList*) Hashtable_get(hashtable, anyType));
            GameFeatureUtil_updateExclusiveList(this, gameFeature, basicArrayList);
        }
}


// throws Exception
void GameFeatureUtil_updateExclusiveList(GameFeatureUtil* this, Feature* gameFeature, BasicArrayList* list) {
        if (BasicArrayList_contains(list, gameFeature)) {
            Features* features = Features_getInstance();
            int32_t addIndex = BasicArrayList_indexOf(list, gameFeature);
            int32_t size = BasicArrayList_size(list);
            for (int32_t index = 0; index < size; index++) {
                if (addIndex != index) {
                    Features_remove(features, ((Feature*) list->objectArray[index]));
                } else {
                    Features_add(features, ((Feature*) list->objectArray[index]));
                }
            }
        }
}

