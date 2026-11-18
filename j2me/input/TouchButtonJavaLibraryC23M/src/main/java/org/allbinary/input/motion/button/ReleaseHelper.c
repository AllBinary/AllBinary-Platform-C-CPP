// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/ReleaseHelper.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#if __has_include("org/allbinary/input/motion/button/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/input/motion/button/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif





void ReleaseHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ReleaseHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ReleaseHelper", nullptr);
    java_register_method("ReleaseHelper", "release", (void*) ReleaseHelper_release);
}

static void ReleaseHelper_initFields(ReleaseHelper* this) {
    
}


void ReleaseHelper_init(ReleaseHelper* this, TouchButtonRecognizer* touchButtonRecognizer) {
    ReleaseHelper_register();
    ReleaseHelper_initFields(this);
        this->touchButtonRecognizer = touchButtonRecognizer;
}

ReleaseHelper* ReleaseHelper_new(TouchButtonRecognizer* touchButtonRecognizer) {
    ReleaseHelper* this = java_object_alloc(sizeof(ReleaseHelper), "ReleaseHelper");
    ReleaseHelper_init(this, touchButtonRecognizer);
    return this;
}


// throws Exception
void ReleaseHelper_release(ReleaseHelper* this, TouchButtonInput* touchButtonInput, int32_t deviceId) {
        TouchButtonInput* nextTouchButtonInput = nullptr;
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = CurrentlyPressedTouchButtonSingleton_size(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton) - 1; index >= 0; index--) {
            nextTouchButtonInput = CurrentlyPressedTouchButtonSingleton_get(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton, index);
            gameKeyEvent = TouchButtonInput_getGameKeyEvent(nextTouchButtonInput);
            UpGameKeyEventHandlerBase_fireEvent(this->touchButtonRecognizer->upGameKeyEventHandler, gameKeyEvent);
            UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandler_getInstanceForDevice(this->touchButtonRecognizer->upGameKeyEventHandler, deviceId), gameKeyEvent);
            CurrentlyPressedTouchButtonSingleton_removeAt(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton, index);
        }
}

