// Generated Code Do Not Modify
#include "org/allbinary/game/input/InputProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInputStrings.h"





void InputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void InputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputProcessor", nullptr);
    java_register_method("InputProcessor", "keyPressedByDevice", (void*) InputProcessor_keyPressedByDevice);
    java_register_method("InputProcessor", "keyReleasedByDevice", (void*) InputProcessor_keyReleasedByDevice);
}

static void InputProcessor_initFields(InputProcessor* this) {
    this->gameInputStrings = GameInputStrings_getInstance();
}

void InputProcessor_init(InputProcessor* this) {
    InputProcessor_register();
    InputProcessor_initFields(this);
}

InputProcessor* InputProcessor_new(void) {
    InputProcessor* this = java_object_alloc(sizeof(InputProcessor), "InputProcessor");
    InputProcessor_init(this);
    return this;
}


void InputProcessor_keyPressedByDevice(InputProcessor* this, int32_t keyCode, int32_t deviceId) {
}


void InputProcessor_keyReleasedByDevice(InputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId) {
}

