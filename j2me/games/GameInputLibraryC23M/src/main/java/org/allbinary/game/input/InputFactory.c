// Generated Code Do Not Modify
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/input/Input.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static void* InputFactory_instance;





void InputFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InputFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void InputFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputFactory", nullptr);
    java_register_method("InputFactory", "add", (void*) InputFactory_add);
    java_register_method("InputFactory", "getInstanceById", (void*) InputFactory_getInstanceById);
}

static void InputFactory_initFields(InputFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->KEY_CODE_LABEL = "KeyCode: ";
    this->DEVICE_ID_LABEL = "DeviceId: ";
    this->MAX = SmallIntegerSingletonFactory_getMin(SmallIntegerSingletonFactory_getInstance());
    this->inputIntegerArray = ((Input**) java_array_new(sizeof(Input*), this->MAX));
    this->NO_INPUT = Input_new(0, this->commonStrings->UNKNOWN);
}


InputFactory* InputFactory_getInstance(void) {
        if ((InputFactory_staticInit(), InputFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            InputFactory_instance = InputFactory_new();
        }
        return ((InputFactory*) (InputFactory_staticInit(), InputFactory_instance));
}


void InputFactory_init(InputFactory* this) {
    InputFactory_register();
    InputFactory_initFields(this);
        int32_t size = java_array_length(this->inputIntegerArray);
        for (int32_t index = 0; index < size; index++) {
            this->inputIntegerArray[index] = this->NO_INPUT;
        }
}

InputFactory* InputFactory_new(void) {
    InputFactory* this = java_object_alloc(sizeof(InputFactory), "InputFactory");
    InputFactory_init(this);
    return this;
}


void InputFactory_add(InputFactory* this, int32_t id, Input* input) {
        this->inputIntegerArray[id] = input;
}


Input* InputFactory_getInstanceById(InputFactory* this, int32_t id) {
        if (id < 0) {
            id = -id;
        }
        if (id > java_array_length(this->inputIntegerArray)) {
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Warning id: "), id)), this, this->commonStrings->GET_INSTANCE);
            return this->NO_INPUT;
        }
        return this->inputIntegerArray[id];
}

