// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameInputProcessorComposite.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/GameInputProcessorInterface.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif






void GameInputProcessorComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameInputProcessorComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputProcessorComposite", "PlayerGameInput");
    java_register_method("GameInputProcessorComposite", "update", (void*) GameInputProcessorComposite_update);
    java_register_method("GameInputProcessorComposite", "toString", (void*) GameInputProcessorComposite_toString);
}

static void GameInputProcessorComposite_initFields(GameInputProcessorComposite* this) {
    
    
    this->NAME_LABEL = " GameInputProcessorInterface: ";
}


void GameInputProcessorComposite_init(GameInputProcessorComposite* this, const char* name, GameInputProcessorInterface* gameInputProcessorInterface) {
    GameInputProcessorComposite_register();
        PlayerGameInput_init(&this->base, BasicArrayListD_new(), BasicArrayListD_new(), -1);
        GameInputProcessorComposite_initFields(this);
        this->name = name;
        this->gameInputProcessorInterface = gameInputProcessorInterface;
}

GameInputProcessorComposite* GameInputProcessorComposite_new(const char* name, GameInputProcessorInterface* gameInputProcessorInterface) {
    GameInputProcessorComposite* this = java_object_alloc(sizeof(GameInputProcessorComposite), "GameInputProcessorComposite");
    GameInputProcessorComposite_init(this, name, gameInputProcessorInterface);
    return this;
}


// synchronized
void GameInputProcessorComposite_update(GameInputProcessorComposite* this) {
        JAVA_TRY {
            BasicArrayList* list = GameInput_getGameKeyEventList(this);
            GameInputProcessorInterface_onInput(this->gameInputProcessorInterface, list);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.base.commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


const char* GameInputProcessorComposite_toString(GameInputProcessorComposite* this) {
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), java_object_toString((&this->base))), this->NAME_LABEL), this->name));
}

