// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/NullCompleteMotionGestureReceiver.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"





void NullCompleteMotionGestureReceiver_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NullCompleteMotionGestureReceiver_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullCompleteMotionGestureReceiver", nullptr);
    java_register_method("NullCompleteMotionGestureReceiver", "onMotionGestureCompleted", (void*) NullCompleteMotionGestureReceiver_onMotionGestureCompleted);
}

static void NullCompleteMotionGestureReceiver_initFields(NullCompleteMotionGestureReceiver* this) {
    this->logUtil = LogUtil_getInstance();
}


void NullCompleteMotionGestureReceiver_init(NullCompleteMotionGestureReceiver* this) {
    NullCompleteMotionGestureReceiver_register();
    NullCompleteMotionGestureReceiver_initFields(this);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, "Null Gesture Reciever", this, commonStrings->CONSTRUCTOR);
}

NullCompleteMotionGestureReceiver* NullCompleteMotionGestureReceiver_new(void) {
    NullCompleteMotionGestureReceiver* this = java_object_alloc(sizeof(NullCompleteMotionGestureReceiver), "NullCompleteMotionGestureReceiver");
    NullCompleteMotionGestureReceiver_init(this);
    return this;
}


// throws Exception
void NullCompleteMotionGestureReceiver_onMotionGestureCompleted(NullCompleteMotionGestureReceiver* this, BasicArrayList* list) {
}

