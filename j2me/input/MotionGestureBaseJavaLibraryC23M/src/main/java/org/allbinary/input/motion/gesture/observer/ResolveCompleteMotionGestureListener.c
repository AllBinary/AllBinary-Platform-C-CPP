// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/ResolveCompleteMotionGestureListener.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/motion/action/GameKeyFromMotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#endif





void ResolveCompleteMotionGestureListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ResolveCompleteMotionGestureListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ResolveCompleteMotionGestureListener", nullptr);
    java_register_method("ResolveCompleteMotionGestureListener", "onMotionGestureCompleted", (void*) ResolveCompleteMotionGestureListener_onMotionGestureCompleted);
}

static void ResolveCompleteMotionGestureListener_initFields(ResolveCompleteMotionGestureListener* this) {
    this->logUtil = LogUtil_getInstance();
}


void ResolveCompleteMotionGestureListener_init(ResolveCompleteMotionGestureListener* this) {
    ResolveCompleteMotionGestureListener_register();
    ResolveCompleteMotionGestureListener_initFields(this);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, "MotionGesture to CompleteMotionGesture Reciever", this, commonStrings->CONSTRUCTOR);
        CompleteMotionGestureInputEventHandler_addListener(CompleteMotionGestureInputEventHandler_getInstance(), GameKeyFromMotionGestureEventListener_new());
}

ResolveCompleteMotionGestureListener* ResolveCompleteMotionGestureListener_new(void) {
    ResolveCompleteMotionGestureListener* this = java_object_alloc(sizeof(ResolveCompleteMotionGestureListener), "ResolveCompleteMotionGestureListener");
    ResolveCompleteMotionGestureListener_init(this);
    return this;
}


// throws Exception
void ResolveCompleteMotionGestureListener_onMotionGestureCompleted(ResolveCompleteMotionGestureListener* this, BasicArrayList* list) {
        MotionGestureConfiguration* configuration = MotionGestureConfigurationFactory_getInstance();
        BasicArrayList* commandActionsList = MotionGestureConfiguration_getAssociateCommandActionsList(configuration);
        int32_t size = BasicArrayList_size(commandActionsList);
        for (int32_t index = size - 1; index >= 0; index--) {
            MotionGestureToMotionGestureActionAssociation* association = ((MotionGestureToMotionGestureActionAssociation*) commandActionsList->objectArray[index]);
            if (MotionGestureToMotionGestureActionAssociation_isMotionGestureArrayEquals(association, list) == true) {
                GameKeyCompleteMotionGestureInputEvent* completeMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) MotionGestureToMotionGestureActionAssociation_getCommandAction(association));
                CompleteMotionGestureInputEventHandler_fireEvent(CompleteMotionGestureInputEventHandler_getInstance(), completeMotionGestureInputEvent);
                break;
            }
        }
}

