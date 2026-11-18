// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GameFeatureItemCommandListener.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/Item.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/midlet/MidletStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/midlet/MidletStrings.h")
#include "org/allbinary/midlet/MidletStrings.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationUtil.h")
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#endif
#if __has_include("org/allbinary/midlet/MidletStrings.h")
#include "org/allbinary/midlet/MidletStrings.h"
#endif





void GameFeatureItemCommandListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameFeatureItemCommandListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureItemCommandListener", nullptr);
    java_register_method("GameFeatureItemCommandListener", "commandAction", (void*) GameFeatureItemCommandListener_commandAction);
}

static void GameFeatureItemCommandListener_initFields(GameFeatureItemCommandListener* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GameFeatureItemCommandListener_init(GameFeatureItemCommandListener* this, GameOptionsForm* gameOptionsForm) {
    GameFeatureItemCommandListener_register();
    GameFeatureItemCommandListener_initFields(this);
        this->gameOptionsForm = gameOptionsForm;
}

GameFeatureItemCommandListener* GameFeatureItemCommandListener_new(GameOptionsForm* gameOptionsForm) {
    GameFeatureItemCommandListener* this = java_object_alloc(sizeof(GameFeatureItemCommandListener), "GameFeatureItemCommandListener");
    GameFeatureItemCommandListener_init(this, gameOptionsForm);
    return this;
}


void GameFeatureItemCommandListener_commandAction(GameFeatureItemCommandListener* this, Command* command, Item* item) {
        JAVA_TRY {
            const char* itemLabel = Item_getLabel(item);
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->ITEM_LABEL), itemLabel)), this, MidletStrings_getInstance()->COMMAND_ACTION);
            if (java_instanceof(item, "GameConfigurationGauge")) {
                GameConfigurationUtil_change(GameConfigurationUtil_getInstance(), this->gameOptionsForm, ((GameConfigurationGauge*) item));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, MidletStrings_getInstance()->COMMAND_ACTION, e);
        } JAVA_END_TRY;
}

