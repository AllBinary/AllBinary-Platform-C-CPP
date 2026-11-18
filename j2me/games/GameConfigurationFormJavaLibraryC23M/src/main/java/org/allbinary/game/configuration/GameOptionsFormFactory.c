// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameOptionsFormFactory.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"


static GameOptionsFormFactory* GameOptionsFormFactory_instance;




void GameOptionsFormFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameOptionsFormFactory_instance = GameOptionsFormFactory_new();
}

void GameOptionsFormFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameOptionsFormFactory", nullptr);
    java_register_method("GameOptionsFormFactory", "init", (void*) GameOptionsFormFactory_initMethod);
}

static void GameOptionsFormFactory_initFields(GameOptionsFormFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void GameOptionsFormFactory_init(GameOptionsFormFactory* this) {
    GameOptionsFormFactory_register();
    GameOptionsFormFactory_initFields(this);
}

GameOptionsFormFactory* GameOptionsFormFactory_new(void) {
    GameOptionsFormFactory* this = java_object_alloc(sizeof(GameOptionsFormFactory), "GameOptionsFormFactory");
    GameOptionsFormFactory_init(this);
    return this;
}


GameOptionsFormFactory* GameOptionsFormFactory_getInstance(void) {
        return (GameOptionsFormFactory_staticInit(), GameOptionsFormFactory_instance);
}


CommandForm* GameOptionsFormFactory_initMethod(GameOptionsFormFactory* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        JAVA_TRY {
            return GameOptionsForm_new(commandListener, title, backgrounBasicColor, foregroundBasicColor);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->INIT, e);
            return CommandForm_getNullCommandForm();
        } JAVA_END_TRY;
}

