// Generated Code Do Not Modify
#include "org/allbinary/input/motion/CompleteMotionGestureInputToGameMotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h"
#include "org/allbinary/input/motion/touch/action/DiagonalDownLeftTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/DiagonalDownRightTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/DiagonalUpLeftTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/DiagonalUpRightTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/DownTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/LeftTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/ReleaseTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/RightTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/UpTouchInputToGameKeyEventAction.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"


static CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_instance;



void CompleteMotionGestureInputToGameMotionGestureInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CompleteMotionGestureInputToGameMotionGestureInput_instance = CompleteMotionGestureInputToGameMotionGestureInput_new();
}

void CompleteMotionGestureInputToGameMotionGestureInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompleteMotionGestureInputToGameMotionGestureInput", nullptr);
    java_register_method("CompleteMotionGestureInputToGameMotionGestureInput", "init", (void*) CompleteMotionGestureInputToGameMotionGestureInput_initMethod);
}

static void CompleteMotionGestureInputToGameMotionGestureInput_initFields(CompleteMotionGestureInputToGameMotionGestureInput* this) {
    this->logUtil = LogUtil_getInstance();
}

void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this) {
    CompleteMotionGestureInputToGameMotionGestureInput_register();
    CompleteMotionGestureInputToGameMotionGestureInput_initFields(this);
}

CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_new(void) {
    CompleteMotionGestureInputToGameMotionGestureInput* this = java_object_alloc(sizeof(CompleteMotionGestureInputToGameMotionGestureInput), "CompleteMotionGestureInputToGameMotionGestureInput");
    CompleteMotionGestureInputToGameMotionGestureInput_init(this);
    return this;
}


CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_getInstance(void) {
        return (CompleteMotionGestureInputToGameMotionGestureInput_staticInit(), CompleteMotionGestureInputToGameMotionGestureInput_instance);
}


void CompleteMotionGestureInputToGameMotionGestureInput_initMethod(CompleteMotionGestureInputToGameMotionGestureInput* this) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            PreLogUtil_put("Compound Motion Gestures", this, commonStrings->INIT);
            MotionGestureConfiguration* motionGestureConfiguration = MotionGestureConfigurationFactory_getInstance();
            TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
            BasicArrayList* list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DIAGONAL_DOWN_LEFT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DiagonalDownLeftTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DIAGONAL_DOWN_RIGHT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DiagonalDownRightTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DIAGONAL_UP_LEFT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DiagonalUpLeftTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DIAGONAL_UP_RIGHT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DiagonalUpRightTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->LEFT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, LeftTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->RIGHT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, RightTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DOWN);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DownTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->UP);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, UpTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->RELEASED);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, ReleaseTouchInputToGameKeyEventAction_getInstance());
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}

