// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonsPaintableComposite.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/mapping/InputMappingInterface.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/input/motion/button/TouchButtonsMappingPaintable.h"
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#endif







void TouchButtonsPaintableComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonsPaintableComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonsPaintableComposite", "ProcessPaintable");
    java_register_method("TouchButtonsPaintableComposite", "onEvent", (void*) TouchButtonsPaintableComposite_onEvent);
    java_register_method("TouchButtonsPaintableComposite", "onCompleteMotionGestureInputEvent", (void*) TouchButtonsPaintableComposite_onCompleteMotionGestureInputEvent);
    java_register_method("TouchButtonsPaintableComposite", "process", (void*) TouchButtonsPaintableComposite_process);
}

static void TouchButtonsPaintableComposite_initFields(TouchButtonsPaintableComposite* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->timeHelper = TimeDelayHelper_new(250);
    this->released = true;
    this->METHOD_NAME = "onCompleteMotionGestureInputEvent";
    this->RELEASE = "Ignoring: MotionGestureInput Release";
    this->FAST_REPEAT = "Ignoring: MotionGestureInput Repeated To Quickly";
    this->IGNORE = "Ignoring: Until Released";
}


void TouchButtonsPaintableComposite_init(TouchButtonsPaintableComposite* this, InputMappingInterface* inputMappingInterface, BasicColor* basicColor) {
    TouchButtonsPaintableComposite_register();
    ProcessPaintable_init(&this->base);
    TouchButtonsPaintableComposite_initFields(this);
        this->inputMappingInterface = inputMappingInterface;
        BasicEventHandler_addListenerInterface(CompleteMotionGestureInputEventHandler_getInstance(), this);
        this->touchButtonsPaintable = TouchButtonsMappingPaintable_new(basicColor);
}

TouchButtonsPaintableComposite* TouchButtonsPaintableComposite_new(InputMappingInterface* inputMappingInterface, BasicColor* basicColor) {
    TouchButtonsPaintableComposite* this = java_object_alloc(sizeof(TouchButtonsPaintableComposite), "TouchButtonsPaintableComposite");
    TouchButtonsPaintableComposite_init(this, inputMappingInterface, basicColor);
    return this;
}


void TouchButtonsPaintableComposite_onEvent(TouchButtonsPaintableComposite* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void TouchButtonsPaintableComposite_onCompleteMotionGestureInputEvent(TouchButtonsPaintableComposite* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "onCompleteMotionGestureInputEvent");
            TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
            GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) completeMotionGestureInputEvent);
            GameKey* gameKey = GameKeyCompleteMotionGestureInputEvent_getGameKey(gameKeyCompleteMotionGestureInputEvent);
            MotionGestureInput* motionGestureInput = CompleteMotionGestureInputEvent_getMotionGestureInput(completeMotionGestureInputEvent);
            if (motionGestureInput == touchMotionGestureFactory->RELEASED) {
                LogUtil_putF(this->logUtil, this->RELEASE, this, this->METHOD_NAME);
                this->released = true;
                return;
            }
            if (motionGestureInput == TouchMotionGestureFactory_getInstance()->NO_MOTION && !TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                LogUtil_putF(this->logUtil, this->FAST_REPEAT, this, this->METHOD_NAME);
                return;
            }
            if (!this->released) {
                LogUtil_putF(this->logUtil, this->IGNORE, this, this->METHOD_NAME);
                return;
            }
            this->released = false;
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), "GameKey: "), StringUtil_toString(StringUtil_getInstance(), gameKey)), " MotionGestureInput: "), StringUtil_toString(StringUtil_getInstance(), motionGestureInput))), this, this->METHOD_NAME);
            InputMappingInterface_processInputMapping(this->inputMappingInterface, gameKey, motionGestureInput);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->METHOD_NAME, e);
        } JAVA_END_TRY;
}


void TouchButtonsPaintableComposite_process(TouchButtonsPaintableComposite* this) {
        CompleteMotionGestureInputEventHandler_removeListener(CompleteMotionGestureInputEventHandler_getInstance(), this);
}

