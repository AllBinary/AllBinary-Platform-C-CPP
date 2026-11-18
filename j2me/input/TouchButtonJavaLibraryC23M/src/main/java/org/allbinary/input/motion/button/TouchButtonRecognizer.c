// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/math/RectangleCollisionUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
#include "org/allbinary/input/motion/button/ReleaseHelper.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#include "org/allbinary/input/motion/button/MultitouchReleaseHelper.h"
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#if __has_include("org/allbinary/input/motion/button/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/input/motion/button/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/math/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/math/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/util/UpGameKeyEventHandlerBase.h")
#include "org/allbinary/util/UpGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/input/motion/button/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/input/motion/button/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/graphics/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/graphics/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/logic/communication/log/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/math/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/math/DownGameKeyEventHandlerBase.h"
#endif
#if __has_include("org/allbinary/util/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/util/DownGameKeyEventHandlerBase.h"
#endif




static void TouchButtonRecognizer_processRelease(TouchButtonRecognizer* this, TouchButtonInput* touchButtonInput, int32_t deviceId);



void TouchButtonRecognizer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonRecognizer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonRecognizer", nullptr);
    java_register_method("TouchButtonRecognizer", "processRelease", (void*) TouchButtonRecognizer_processRelease);
    java_register_method("TouchButtonRecognizer", "releaseTouchButtonInput", (void*) TouchButtonRecognizer_releaseTouchButtonInput);
    java_register_method("TouchButtonRecognizer", "pressTouchButtonInput", (void*) TouchButtonRecognizer_pressTouchButtonInput);
}

static void TouchButtonRecognizer_initFields(TouchButtonRecognizer* this) {
    this->logUtil = LogUtil_getInstance();
    this->rectangleCollisionUtil = RectangleCollisionUtil_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    this->downGameKeyEventHandler = DownGameKeyEventHandler_getInstance();
    this->lastPressedTouchButtonInput = BasicTouchInputFactory_getInstance()->NONE;
    this->currentlyPressedTouchButtonSingleton = CurrentlyPressedTouchButtonSingleton_getInstance();
    this->releaseHelper = nullptr;
}


void TouchButtonRecognizer_init(TouchButtonRecognizer* this) {
    TouchButtonRecognizer_register();
    TouchButtonRecognizer_initFields(this);
        if (TouchScreenFactory_isMultiTouch(TouchScreenFactory_getInstance())) {
            this->releaseHelper = MultitouchReleaseHelper_new(this);
        } else {
            this->releaseHelper = ReleaseHelper_new(this);
        }
}

TouchButtonRecognizer* TouchButtonRecognizer_new(void) {
    TouchButtonRecognizer* this = java_object_alloc(sizeof(TouchButtonRecognizer), "TouchButtonRecognizer");
    TouchButtonRecognizer_init(this);
    return this;
}


// throws Exception
static void TouchButtonRecognizer_processRelease(TouchButtonRecognizer* this, TouchButtonInput* touchButtonInput, int32_t deviceId) {
        ReleaseHelper_release(this->releaseHelper, touchButtonInput, deviceId);
        GameKeyEvent* gameKeyEvent = TouchButtonInput_getGameKeyEvent(touchButtonInput);
        UpGameKeyEventHandlerBase_fireEvent(this->upGameKeyEventHandler, gameKeyEvent);
        UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandler_getInstanceForDevice(this->upGameKeyEventHandler, deviceId), gameKeyEvent);
        CurrentlyPressedTouchButtonSingleton_remove(this->currentlyPressedTouchButtonSingleton, touchButtonInput);
}


// throws Exception
// synchronized
bool TouchButtonRecognizer_releaseTouchButtonInput(TouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId) {
        TouchButtonInput* touchButtonInput = this->lastPressedTouchButtonInput;
        if (CurrentlyPressedTouchButtonSingleton_contains(this->currentlyPressedTouchButtonSingleton, touchButtonInput)) {
            this->lastPressedTouchButtonInput = BasicTouchInputFactory_getInstance()->NONE;
            TouchButtonRecognizer_processRelease(this, touchButtonInput, deviceId);
            return true;
        } else {
            BasicArrayList* list = TouchButtonFactory_getList(TouchButtonFactory_getInstance());
            Rectangle* rectangle = nullptr;
            GPoint* point = nullptr;
            TouchButton* touchButton = nullptr;
            for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
                touchButton = ((TouchButton*) list->objectArray[index]);
                rectangle = TouchButton_getRectangle(touchButton);
                point = Rectangle_getPoint(rectangle);
                if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, GPoint_getX(point), GPoint_getY(point), Rectangle_getMaxX(rectangle), Rectangle_getMaxY(rectangle), x, y)) {
                    touchButtonInput = TouchButton_getTouchButtonInput(touchButton);
                    TouchButtonRecognizer_processRelease(this, touchButtonInput, deviceId);
                    return true;
                }
            }
        }
        return false;
}


// throws Exception
// synchronized
bool TouchButtonRecognizer_pressTouchButtonInput(TouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId) {
        BasicArrayList* list = TouchButtonFactory_getList(TouchButtonFactory_getInstance());
        Rectangle* rectangle = nullptr;
        GPoint* point = nullptr;
        TouchButton* touchButton = nullptr;
        TouchButtonInput* touchButtonInput = nullptr;
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            touchButton = ((TouchButton*) list->objectArray[index]);
            rectangle = TouchButton_getRectangle(touchButton);
            point = Rectangle_getPoint(rectangle);
            if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, GPoint_getX(point), GPoint_getY(point), Rectangle_getMaxX(rectangle), Rectangle_getMaxY(rectangle), x, y)) {
                touchButtonInput = TouchButton_getTouchButtonInput(touchButton);
                if (!CurrentlyPressedTouchButtonSingleton_contains(this->currentlyPressedTouchButtonSingleton, touchButtonInput)) {
                    ReleaseHelper_release(this->releaseHelper, touchButtonInput, deviceId);
                    this->lastPressedTouchButtonInput = touchButtonInput;
                    CurrentlyPressedTouchButtonSingleton_add(this->currentlyPressedTouchButtonSingleton, touchButtonInput);
                    gameKeyEvent = TouchButtonInput_getGameKeyEvent(touchButtonInput);
                    DownGameKeyEventHandlerBase_fireEvent(this->downGameKeyEventHandler, gameKeyEvent);
                    DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandler_getInstanceForDevice(this->downGameKeyEventHandler, deviceId), gameKeyEvent);
                }
                return true;
            }
        }
        return false;
}

