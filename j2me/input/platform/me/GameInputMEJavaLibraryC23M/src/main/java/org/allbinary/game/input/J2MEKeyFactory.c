// Generated Code Do Not Modify
#include "org/allbinary/game/input/J2MEKeyFactory.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/Input.h"


static J2MEKeyFactory* J2MEKeyFactory_instance;












void J2MEKeyFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    J2MEKeyFactory_instance = J2MEKeyFactory_new();
}

void J2MEKeyFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("J2MEKeyFactory", nullptr);
    java_register_method("J2MEKeyFactory", "init", (void*) J2MEKeyFactory_initMethod);
    java_register_method("J2MEKeyFactory", "isSubmission", (void*) J2MEKeyFactory_isSubmission);
    java_register_method("J2MEKeyFactory", "isDelete", (void*) J2MEKeyFactory_isDelete);
    java_register_method("J2MEKeyFactory", "isBackSpace", (void*) J2MEKeyFactory_isBackSpace);
    java_register_method("J2MEKeyFactory", "isUp", (void*) J2MEKeyFactory_isUp);
    java_register_method("J2MEKeyFactory", "isDown", (void*) J2MEKeyFactory_isDown);
    java_register_method("J2MEKeyFactory", "isLeft", (void*) J2MEKeyFactory_isLeft);
    java_register_method("J2MEKeyFactory", "isRight", (void*) J2MEKeyFactory_isRight);
    java_register_method("J2MEKeyFactory", "isEnter", (void*) J2MEKeyFactory_isEnter);
}

static void J2MEKeyFactory_initFields(J2MEKeyFactory* this) {
    this->gameKeyFactory = GameKeyFactory_getInstance();
}


J2MEKeyFactory* J2MEKeyFactory_getInstance(void) {
        return (J2MEKeyFactory_staticInit(), J2MEKeyFactory_instance);
}


void J2MEKeyFactory_init(J2MEKeyFactory* this) {
    J2MEKeyFactory_register();
    J2MEKeyFactory_initFields(this);
}

J2MEKeyFactory* J2MEKeyFactory_new(void) {
    J2MEKeyFactory* this = java_object_alloc(sizeof(J2MEKeyFactory), "J2MEKeyFactory");
    J2MEKeyFactory_init(this);
    return this;
}


void J2MEKeyFactory_initMethod(J2MEKeyFactory* this) {
        GameKey** gameKeyArray = ((GameKey**) java_array_from(sizeof(GameKey*), sizeof((GameKey*[]){ this->gameKeyFactory->DOWN, this->gameKeyFactory->FIRE, this->gameKeyFactory->GAME_A, this->gameKeyFactory->GAME_B, this->gameKeyFactory->GAME_C, this->gameKeyFactory->GAME_D, this->gameKeyFactory->KEY_NUM0, this->gameKeyFactory->KEY_NUM1, this->gameKeyFactory->KEY_NUM2, this->gameKeyFactory->KEY_NUM3, this->gameKeyFactory->KEY_NUM4, this->gameKeyFactory->KEY_NUM5, this->gameKeyFactory->KEY_NUM6, this->gameKeyFactory->KEY_NUM7, this->gameKeyFactory->KEY_NUM8, this->gameKeyFactory->KEY_NUM9, this->gameKeyFactory->KEY_POUND, this->gameKeyFactory->KEY_STAR, this->gameKeyFactory->LEFT, this->gameKeyFactory->LEVEL_DOWN, this->gameKeyFactory->LEVEL_UP, this->gameKeyFactory->NONE, this->gameKeyFactory->RIGHT, this->gameKeyFactory->UP }) / sizeof(GameKey*), (GameKey*[]){ this->gameKeyFactory->DOWN, this->gameKeyFactory->FIRE, this->gameKeyFactory->GAME_A, this->gameKeyFactory->GAME_B, this->gameKeyFactory->GAME_C, this->gameKeyFactory->GAME_D, this->gameKeyFactory->KEY_NUM0, this->gameKeyFactory->KEY_NUM1, this->gameKeyFactory->KEY_NUM2, this->gameKeyFactory->KEY_NUM3, this->gameKeyFactory->KEY_NUM4, this->gameKeyFactory->KEY_NUM5, this->gameKeyFactory->KEY_NUM6, this->gameKeyFactory->KEY_NUM7, this->gameKeyFactory->KEY_NUM8, this->gameKeyFactory->KEY_NUM9, this->gameKeyFactory->KEY_POUND, this->gameKeyFactory->KEY_STAR, this->gameKeyFactory->LEFT, this->gameKeyFactory->LEVEL_DOWN, this->gameKeyFactory->LEVEL_UP, this->gameKeyFactory->NONE, this->gameKeyFactory->RIGHT, this->gameKeyFactory->UP }));
        InputFactory* inputFactory = InputFactory_getInstance();
        for (int32_t index = java_array_length(gameKeyArray); --index >= 0; ) {
            InputFactory_add(inputFactory, Input_getId(gameKeyArray[index]), gameKeyArray[index]);
        }
}


bool J2MEKeyFactory_isSubmission(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->FIRE) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isDelete(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->GAME_D) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isBackSpace(J2MEKeyFactory* this, Input* input) {
        return false;
}


bool J2MEKeyFactory_isUp(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->UP) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isDown(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->DOWN) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isLeft(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->LEFT) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isRight(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->RIGHT) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isEnter(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->FIRE) {
            return true;
        }
        return false;
}

