// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/MultitouchReleaseHelper.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/input/motion/button/ReleaseHelper.h"
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#include "org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#if __has_include("org/allbinary/input/motion/button/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/input/motion/button/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif





void MultitouchReleaseHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MultitouchReleaseHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultitouchReleaseHelper", "ReleaseHelper");
    java_register_method("MultitouchReleaseHelper", "release", (void*) MultitouchReleaseHelper_release);
}


void MultitouchReleaseHelper_init(MultitouchReleaseHelper* this, TouchButtonRecognizer* touchButtonRecognizer) {
    MultitouchReleaseHelper_register();
        ReleaseHelper_init(&this->base, touchButtonRecognizer);
}

MultitouchReleaseHelper* MultitouchReleaseHelper_new(TouchButtonRecognizer* touchButtonRecognizer) {
    MultitouchReleaseHelper* this = java_object_alloc(sizeof(MultitouchReleaseHelper), "MultitouchReleaseHelper");
    MultitouchReleaseHelper_init(this, touchButtonRecognizer);
    return this;
}


// throws Exception
void MultitouchReleaseHelper_release(MultitouchReleaseHelper* this, TouchButtonInput* touchButtonInput, int32_t deviceId) {
        TouchButtonInput* cancelTouchButtonInput = CancelTouchButtonInputFactory_getCancel(CancelTouchButtonInputFactory_getInstance(), touchButtonInput);
        TouchButtonInput* nextTouchButtonInput = nullptr;
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = CurrentlyPressedTouchButtonSingleton_size(this->base.touchButtonRecognizer->currentlyPressedTouchButtonSingleton) - 1; index >= 0; index--) {
            nextTouchButtonInput = CurrentlyPressedTouchButtonSingleton_get(this->base.touchButtonRecognizer->currentlyPressedTouchButtonSingleton, index);
            if (cancelTouchButtonInput == nextTouchButtonInput) {
                gameKeyEvent = TouchButtonInput_getGameKeyEvent(nextTouchButtonInput);
                UpGameKeyEventHandlerBase_fireEvent(this->base.touchButtonRecognizer->upGameKeyEventHandler, gameKeyEvent);
                UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandler_getInstanceForDevice(this->base.touchButtonRecognizer->upGameKeyEventHandler, deviceId), gameKeyEvent);
                CurrentlyPressedTouchButtonSingleton_removeAt(this->base.touchButtonRecognizer->currentlyPressedTouchButtonSingleton, index);
            }
        }
}

