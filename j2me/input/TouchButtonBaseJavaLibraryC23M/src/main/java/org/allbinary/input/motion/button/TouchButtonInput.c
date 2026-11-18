// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"







void TouchButtonInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonInput", "Input");
    java_register_method("TouchButtonInput", "update", (void*) TouchButtonInput_update);
    java_register_method("TouchButtonInput", "getSourceId", (void*) TouchButtonInput_getSourceId);
    java_register_method("TouchButtonInput", "getGameKeyEvent", (void*) TouchButtonInput_getGameKeyEvent);
}

static void TouchButtonInput_initFields(TouchButtonInput* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->TOUCH_BUTTON_SOURCE_ID = this->gameKeyEventFactory->TOUCH_BUTTON_SOURCE_ID;
    this->gameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
}


void TouchButtonInput_init(TouchButtonInput* this, int32_t id, const char* name) {
    TouchButtonInput_register();
        Input_init(&this->base, id, name);
        TouchButtonInput_initFields(this);
        InputFactory* inputFactory = InputFactory_getInstance();
        InputFactory_add(inputFactory, Input_getId(this), this);
}

TouchButtonInput* TouchButtonInput_new(int32_t id, const char* name) {
    TouchButtonInput* this = java_object_alloc(sizeof(TouchButtonInput), "TouchButtonInput");
    TouchButtonInput_init(this, id, name);
    return this;
}


void TouchButtonInput_update(TouchButtonInput* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstance(inputToGameKeyMapping, Input_getId(this));
            this->gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this, gameKey);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


int32_t TouchButtonInput_getSourceId(TouchButtonInput* this) {
        return this->TOUCH_BUTTON_SOURCE_ID;
}


GameKeyEvent* TouchButtonInput_getGameKeyEvent(TouchButtonInput* this) {
        return this->gameKeyEvent;
}

