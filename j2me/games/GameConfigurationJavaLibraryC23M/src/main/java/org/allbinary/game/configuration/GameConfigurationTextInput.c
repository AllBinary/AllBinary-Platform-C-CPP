// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameConfigurationTextInput.h"
#include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static ABHashtable* GameConfigurationTextInput_hashtable;
GameConfigurationTextInput* GameConfigurationTextInput_SIMULATOR_IP;
GameConfigurationTextInput* GameConfigurationTextInput_SIMULATOR_PORT;








void GameConfigurationTextInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameConfigurationTextInput_hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    GameConfigurationTextInput_SIMULATOR_IP = GameConfigurationTextInput_new("IP: ", "192.168.1.3");
    GameConfigurationTextInput_SIMULATOR_PORT = GameConfigurationTextInput_new("Port: ", "8010");
}

void GameConfigurationTextInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameConfigurationTextInput", nullptr);
    java_register_method("GameConfigurationTextInput", "setText", (void*) GameConfigurationTextInput_setText);
    java_register_method("GameConfigurationTextInput", "getText", (void*) GameConfigurationTextInput_getText);
    java_register_method("GameConfigurationTextInput", "setLabel", (void*) GameConfigurationTextInput_setLabel);
    java_register_method("GameConfigurationTextInput", "getLabel", (void*) GameConfigurationTextInput_getLabel);
}

static void GameConfigurationTextInput_initFields(GameConfigurationTextInput* this) {
    this->label = StringUtil_getInstance()->EMPTY_STRING;
    this->text = StringUtil_getInstance()->EMPTY_STRING;
}


void GameConfigurationTextInput_init(GameConfigurationTextInput* this, const char* label, const char* text) {
    GameConfigurationTextInput_register();
    GameConfigurationTextInput_initFields(this);
        GameConfigurationTextInput_setText(this, text);
        GameConfigurationTextInput_setLabel(this, label);
        Hashtable_put((GameConfigurationTextInput_staticInit(), GameConfigurationTextInput_hashtable), GameConfigurationTextInput_getLabel(this), this);
}

GameConfigurationTextInput* GameConfigurationTextInput_new(const char* label, const char* text) {
    GameConfigurationTextInput* this = java_object_alloc(sizeof(GameConfigurationTextInput), "GameConfigurationTextInput");
    GameConfigurationTextInput_init(this, label, text);
    return this;
}


void GameConfigurationTextInput_update(TextField* textField) {
        void* anyType = ((void*) Item_getLabel(textField));
        GameConfigurationTextInput* gameConfigurationTextInput = ((GameConfigurationTextInput*) Hashtable_get((GameConfigurationTextInput_staticInit(), GameConfigurationTextInput_hashtable), anyType));
        GameConfigurationTextInput_setText(gameConfigurationTextInput, TextField_getString(textField));
}


void GameConfigurationTextInput_setText(GameConfigurationTextInput* this, const char* text) {
        this->text = text;
}


const char* GameConfigurationTextInput_getText(GameConfigurationTextInput* this) {
        return this->text;
}


void GameConfigurationTextInput_setLabel(GameConfigurationTextInput* this, const char* label) {
        this->label = label;
}


const char* GameConfigurationTextInput_getLabel(GameConfigurationTextInput* this) {
        return this->label;
}


ABHashtable* GameConfigurationTextInput_getHashtable(void) {
        return (GameConfigurationTextInput_staticInit(), GameConfigurationTextInput_hashtable);
}

