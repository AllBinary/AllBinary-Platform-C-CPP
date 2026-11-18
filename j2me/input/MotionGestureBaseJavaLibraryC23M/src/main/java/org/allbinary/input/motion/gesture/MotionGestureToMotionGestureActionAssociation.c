// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/util/BasicArrayList.h"









void MotionGestureToMotionGestureActionAssociation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionGestureToMotionGestureActionAssociation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionGestureToMotionGestureActionAssociation", nullptr);
    java_register_method("MotionGestureToMotionGestureActionAssociation", "getMotionGesture", (void*) MotionGestureToMotionGestureActionAssociation_getMotionGesture);
    java_register_method("MotionGestureToMotionGestureActionAssociation", "setMotionGestures", (void*) MotionGestureToMotionGestureActionAssociation_setMotionGestures);
    java_register_method("MotionGestureToMotionGestureActionAssociation", "getCommandAction", (void*) MotionGestureToMotionGestureActionAssociation_getCommandAction);
    java_register_method("MotionGestureToMotionGestureActionAssociation", "setMotionGestureAction", (void*) MotionGestureToMotionGestureActionAssociation_setMotionGestureAction);
    java_register_method("MotionGestureToMotionGestureActionAssociation", "isMotionGestureArrayEquals", (void*) MotionGestureToMotionGestureActionAssociation_isMotionGestureArrayEquals);
}

static void MotionGestureToMotionGestureActionAssociation_initFields(MotionGestureToMotionGestureActionAssociation* this) {
    
    
}


void MotionGestureToMotionGestureActionAssociation_init(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction) {
    MotionGestureToMotionGestureActionAssociation_register();
    MotionGestureToMotionGestureActionAssociation_initFields(this);
        this->list = list;
        this->motionGestureAction = commandAction;
}

MotionGestureToMotionGestureActionAssociation* MotionGestureToMotionGestureActionAssociation_new(BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction) {
    MotionGestureToMotionGestureActionAssociation* this = java_object_alloc(sizeof(MotionGestureToMotionGestureActionAssociation), "MotionGestureToMotionGestureActionAssociation");
    MotionGestureToMotionGestureActionAssociation_init(this, list, commandAction);
    return this;
}


BasicArrayList* MotionGestureToMotionGestureActionAssociation_getMotionGesture(MotionGestureToMotionGestureActionAssociation* this) {
        return this->list;
}


void MotionGestureToMotionGestureActionAssociation_setMotionGestures(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* list) {
        this->list = list;
}


CompleteMotionGestureInputEvent* MotionGestureToMotionGestureActionAssociation_getCommandAction(MotionGestureToMotionGestureActionAssociation* this) {
        return this->motionGestureAction;
}


void MotionGestureToMotionGestureActionAssociation_setMotionGestureAction(MotionGestureToMotionGestureActionAssociation* this, CompleteMotionGestureInputEvent* commandAction) {
        this->motionGestureAction = commandAction;
}


bool MotionGestureToMotionGestureActionAssociation_isMotionGestureArrayEquals(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* aList) {
        int32_t size = BasicArrayList_size(aList);
        if (BasicArrayList_size(this->list) != size) {
            return false;
        }
        for (int32_t i = size - 1; i >= 0; i--) {
            if (aList->objectArray[i] != this->list->objectArray[i]) {
                return false;
            }
        }
        return true;
}

