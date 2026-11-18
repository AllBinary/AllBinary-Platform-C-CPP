// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif


static void* CancelTouchButtonInputFactory_instance;




void CancelTouchButtonInputFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CancelTouchButtonInputFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void CancelTouchButtonInputFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CancelTouchButtonInputFactory", nullptr);
    java_register_method("CancelTouchButtonInputFactory", "getCancel", (void*) CancelTouchButtonInputFactory_getCancel);
}

static void CancelTouchButtonInputFactory_initFields(CancelTouchButtonInputFactory* this) {
    this->cancelInputArray = ((TouchButtonInput**) java_array_new(sizeof(TouchButtonInput*), InputFactory_getInstance()->MAX));
}


CancelTouchButtonInputFactory* CancelTouchButtonInputFactory_getInstance(void) {
        if ((CancelTouchButtonInputFactory_staticInit(), CancelTouchButtonInputFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            CancelTouchButtonInputFactory_instance = CancelTouchButtonInputFactory_new();
        }
        return ((CancelTouchButtonInputFactory*) (CancelTouchButtonInputFactory_staticInit(), CancelTouchButtonInputFactory_instance));
}


void CancelTouchButtonInputFactory_init(CancelTouchButtonInputFactory* this) {
    CancelTouchButtonInputFactory_register();
    CancelTouchButtonInputFactory_initFields(this);
        BasicTouchInputFactory* basicTouchInputFactory = BasicTouchInputFactory_getInstance();
        for (int32_t index = java_array_length(this->cancelInputArray) - 1; index >= 0; index--) {
            this->cancelInputArray[index] = basicTouchInputFactory->NONE;
        }
        this->cancelInputArray[Input_getId(basicTouchInputFactory->UP)] = basicTouchInputFactory->DOWN;
        this->cancelInputArray[Input_getId(basicTouchInputFactory->DOWN)] = basicTouchInputFactory->UP;
        this->cancelInputArray[Input_getId(basicTouchInputFactory->LEFT)] = basicTouchInputFactory->RIGHT;
        this->cancelInputArray[Input_getId(basicTouchInputFactory->RIGHT)] = basicTouchInputFactory->LEFT;
}

CancelTouchButtonInputFactory* CancelTouchButtonInputFactory_new(void) {
    CancelTouchButtonInputFactory* this = java_object_alloc(sizeof(CancelTouchButtonInputFactory), "CancelTouchButtonInputFactory");
    CancelTouchButtonInputFactory_init(this);
    return this;
}


TouchButtonInput* CancelTouchButtonInputFactory_getCancel(CancelTouchButtonInputFactory* this, TouchButtonInput* touchButtonInput) {
        return this->cancelInputArray[Input_getId(touchButtonInput)];
}

