// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


GameKeyEvent* GameKeyEvent_NONE;




static void GameKeyEvent_setRepeatEvents(GameKeyEvent* this, bool repeated);









void GameKeyEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameKeyEvent_NONE = GameKeyEvent_new(NullUtil_getInstance()->NULL_OBJECT, -1, -1, -1, -1, false);
}

void GameKeyEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyEvent", "AllBinaryEventObject");
    java_register_method("GameKeyEvent", "init", (void*) GameKeyEvent_initMethod);
    java_register_method("GameKeyEvent", "setRepeatEvents", (void*) GameKeyEvent_setRepeatEvents);
    java_register_method("GameKeyEvent", "hasRepeatEvents", (void*) GameKeyEvent_hasRepeatEvents);
    java_register_method("GameKeyEvent", "getKey", (void*) GameKeyEvent_getKey);
    java_register_method("GameKeyEvent", "toString", (void*) GameKeyEvent_toString);
    java_register_method("GameKeyEvent", "getOriginalKey", (void*) GameKeyEvent_getOriginalKey);
    java_register_method("GameKeyEvent", "setOriginalKey", (void*) GameKeyEvent_setOriginalKey);
    java_register_method("GameKeyEvent", "getGameActionKey", (void*) GameKeyEvent_getGameActionKey);
    java_register_method("GameKeyEvent", "setGameActionKey", (void*) GameKeyEvent_setGameActionKey);
    java_register_method("GameKeyEvent", "getSourceId", (void*) GameKeyEvent_getSourceId);
}

static void GameKeyEvent_initFields(GameKeyEvent* this) {
    
    this->repeated = false;
    
    this->gameActionKey = 0;
    this->originalKey = 0;
}


GameKeyEvent* GameKeyEvent_createEvent(void* anyType, int32_t sourceId, int32_t key) {
        return GameKeyEvent_new(anyType, sourceId, 0, 0, key, false);
}


void GameKeyEvent_init(GameKeyEvent* this, void* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated) {
    GameKeyEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
        GameKeyEvent_initFields(this);
        this->sourceId = sourceId;
        GameKeyEvent_setOriginalKey(this, originalKey);
        this->key = key;
        GameKeyEvent_setGameActionKey(this, gameActionKey);
        GameKeyEvent_setRepeatEvents(this, repeated);
}

GameKeyEvent* GameKeyEvent_new(void* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated) {
    GameKeyEvent* this = java_object_alloc(sizeof(GameKeyEvent), "GameKeyEvent");
    GameKeyEvent_init(this, anyType, sourceId, originalKey, gameActionKey, key, repeated);
    return this;
}


void GameKeyEvent_initMethod(GameKeyEvent* this, void* anyType) {
        AllBinaryEventObject_setSource(this, anyType);
}


static void GameKeyEvent_setRepeatEvents(GameKeyEvent* this, bool repeated) {
        this->repeated = repeated;
}


bool GameKeyEvent_hasRepeatEvents(GameKeyEvent* this) {
        return this->repeated;
}


int32_t GameKeyEvent_getKey(GameKeyEvent* this) {
        return this->key;
}


const char* GameKeyEvent_toString(GameKeyEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "\nKey: ");
        StringMaker_appendint(stringBuffer, GameKeyEvent_getKey(this));
        return java_string_of(stringBuffer);
}


int32_t GameKeyEvent_getOriginalKey(GameKeyEvent* this) {
        return this->originalKey;
}


void GameKeyEvent_setOriginalKey(GameKeyEvent* this, int32_t originalKey) {
        this->originalKey = originalKey;
}


int32_t GameKeyEvent_getGameActionKey(GameKeyEvent* this) {
        return this->gameActionKey;
}


void GameKeyEvent_setGameActionKey(GameKeyEvent* this, int32_t gameActionKey) {
        this->gameActionKey = gameActionKey;
}


int32_t GameKeyEvent_getSourceId(GameKeyEvent* this) {
        return this->sourceId;
}

