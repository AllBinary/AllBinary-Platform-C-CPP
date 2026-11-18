// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GameFeatureItemStateListener.h"
#include "javax/microedition/lcdui/ChoiceGroup.h"
#include "javax/microedition/lcdui/Item.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationUtil.h")
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#endif


static BasicArrayList* GameFeatureItemStateListener_toggleList;




void GameFeatureItemStateListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameFeatureItemStateListener_toggleList = BasicArrayListD_new();
}

void GameFeatureItemStateListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureItemStateListener", nullptr);
    java_register_method("GameFeatureItemStateListener", "itemStateChanged", (void*) GameFeatureItemStateListener_itemStateChanged);
}

static void GameFeatureItemStateListener_initFields(GameFeatureItemStateListener* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GameFeatureItemStateListener_init(GameFeatureItemStateListener* this, GameOptionsForm* gameOptionsForm) {
    GameFeatureItemStateListener_register();
    GameFeatureItemStateListener_initFields(this);
        this->gameOptionsForm = gameOptionsForm;
        GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
        GameFeatureItemStateListener_add(gameFeatureFactory->ARTIFICIAL_INTELLEGENCE_PROCESSOR);
        GameFeatureItemStateListener_add(gameFeatureFactory->COLLIDABLE_INTERFACE_LAYER_PROCESSOR);
        GameFeatureItemStateListener_add(gameFeatureFactory->DAMAGE_FLOATERS);
        GameFeatureItemStateListener_add(gameFeatureFactory->DROPPED_ITEMS);
        GameFeatureItemStateListener_add(gameFeatureFactory->GAME_INPUT_LAYER_PROCESSOR);
        GameFeatureItemStateListener_add(gameFeatureFactory->HEALTH_BARS);
        GameFeatureItemStateListener_add(gameFeatureFactory->SOUND);
        GameFeatureItemStateListener_add(gameFeatureFactory->TICKABLE_LAYER_PROCESSOR);
}

GameFeatureItemStateListener* GameFeatureItemStateListener_new(GameOptionsForm* gameOptionsForm) {
    GameFeatureItemStateListener* this = java_object_alloc(sizeof(GameFeatureItemStateListener), "GameFeatureItemStateListener");
    GameFeatureItemStateListener_init(this, gameOptionsForm);
    return this;
}


void GameFeatureItemStateListener_add(GameFeature* gameFeature) {
        if (!BasicArrayList_contains((GameFeatureItemStateListener_staticInit(), GameFeatureItemStateListener_toggleList), gameFeature)) {
            BasicArrayList_add((GameFeatureItemStateListener_staticInit(), GameFeatureItemStateListener_toggleList), gameFeature);
        }
}


void GameFeatureItemStateListener_itemStateChanged(GameFeatureItemStateListener* this, Item* item) {
        JAVA_TRY {
            const char* itemLabel = Item_getLabel(item);
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->ITEM_LABEL), itemLabel)), this, "itemStateChanged");
            if (java_instanceof(item, "GameConfigurationGauge")) {
                GameConfigurationUtil_change(GameConfigurationUtil_getInstance(), this->gameOptionsForm, ((GameConfigurationGauge*) item));
            } else if (java_instanceof(item, "ChoiceGroup")) {
                GameFeatureUtil* gameFeatureUtil = GameFeatureUtil_getInstance();
                if (GameFeatureUtil_isExclusive(gameFeatureUtil, itemLabel)) {
                    GameFeatureUtil_updateExclusiveForChoiceGroup(gameFeatureUtil, ((ChoiceGroup*) item));
                } else {
                    GameFeatureUtil_updateMultiple(gameFeatureUtil, ((ChoiceGroup*) item));
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "itemStateChanged", e);
        } JAVA_END_TRY;
}

