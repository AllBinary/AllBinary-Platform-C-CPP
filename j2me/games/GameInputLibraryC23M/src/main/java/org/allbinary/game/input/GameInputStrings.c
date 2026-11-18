// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameInputStrings.h"


static GameInputStrings* GameInputStrings_instance;


void GameInputStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameInputStrings_instance = GameInputStrings_new();
}

void GameInputStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputStrings", nullptr);
}

static void GameInputStrings_initFields(GameInputStrings* this) {
    this->PROCESS_INPUT = "processInput";
    this->KEY_PRESSED = "keyPressed";
    this->KEY_RELEASED = "keyReleased";
    this->KEY_REPEATED = "keyRepeated";
    this->ON_PRESS_GAME_KEY = "onPressGameKeyEvent";
    this->ON_DOWN_GAME_KEY = "onDownGameKeyEvent";
    this->ON_UP_GAME_KEY = "onUpGameKeyEvent";
    this->NO_KEY = "Key Code Not Mapped For Game: ";
    this->ADD_KEY_EVENT = "addGameKeyEvent";
    this->REMOVE_KEY_EVENT = "removeGameKeyEvent";
    this->STRAFE_LEFT = "strafeLeft";
    this->STRAFE_RIGHT = "strafeRight";
    this->PROCESS_MOTION_INPUT = "processMotionInput";
    this->UDPATE_CURRENT_TOUCH_INPUT_FACTORY = "updateCurrentTouchInputFactory";
    this->ENABLE_PLAYER_GAME_INPUTS = "Enabling PlayerGameInputs: ";
    this->ENABLE_PLAYER_GAME_INPUT = "Enabling PlayerGameInput: ";
}

void GameInputStrings_init(GameInputStrings* this) {
    GameInputStrings_register();
    GameInputStrings_initFields(this);
}

GameInputStrings* GameInputStrings_new(void) {
    GameInputStrings* this = java_object_alloc(sizeof(GameInputStrings), "GameInputStrings");
    GameInputStrings_init(this);
    return this;
}


GameInputStrings* GameInputStrings_getInstance(void) {
        return (GameInputStrings_staticInit(), GameInputStrings_instance);
}

