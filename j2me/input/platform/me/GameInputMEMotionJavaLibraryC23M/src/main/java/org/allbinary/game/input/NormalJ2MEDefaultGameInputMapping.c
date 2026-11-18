// Generated Code Do Not Modify
#include "org/allbinary/game/input/NormalJ2MEDefaultGameInputMapping.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceStrings.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#endif




void NormalJ2MEDefaultGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NormalJ2MEDefaultGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NormalJ2MEDefaultGameInputMapping", "PersistentInputMapping");
}


void NormalJ2MEDefaultGameInputMapping_init(NormalJ2MEDefaultGameInputMapping* this) {
    NormalJ2MEDefaultGameInputMapping_register();
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->DEFAULT_INPUT_MAPPING_RECORD_ID);
        InputToGameKeyMapping* inputToGameKeyMapping = PersistentInputMapping_getInputMapping(this);
        GameKeyFactory* gameKeyFactory = GameKeyFactory_getInstance();
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, gameKeyFactory->KEY_NUM2);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, gameKeyFactory->KEY_NUM4);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, gameKeyFactory->KEY_NUM6);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, gameKeyFactory->KEY_NUM8);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, gameKeyFactory->GAME_A);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM3, gameKeyFactory->GAME_B);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, gameKeyFactory->GAME_C);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, gameKeyFactory->GAME_D);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEVEL_DOWN, gameKeyFactory->LEVEL_DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEVEL_UP, gameKeyFactory->LEVEL_UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, gameKeyFactory->UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, gameKeyFactory->DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, gameKeyFactory->LEFT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, gameKeyFactory->RIGHT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_POUND, gameKeyFactory->KEY_POUND);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_STAR, gameKeyFactory->KEY_STAR);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, gameKeyFactory->KEY_NUM1);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM3, gameKeyFactory->KEY_NUM3);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, gameKeyFactory->KEY_NUM5);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, gameKeyFactory->KEY_NUM7);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, gameKeyFactory->KEY_NUM9);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM0, gameKeyFactory->KEY_NUM0);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, gameKeyFactory->FIRE);
}

NormalJ2MEDefaultGameInputMapping* NormalJ2MEDefaultGameInputMapping_new(void) {
    NormalJ2MEDefaultGameInputMapping* this = java_object_alloc(sizeof(NormalJ2MEDefaultGameInputMapping), "NormalJ2MEDefaultGameInputMapping");
    NormalJ2MEDefaultGameInputMapping_init(this);
    return this;
}

