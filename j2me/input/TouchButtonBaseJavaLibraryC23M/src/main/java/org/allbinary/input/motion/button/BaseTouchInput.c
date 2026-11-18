// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"






void BaseTouchInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseTouchInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseTouchInput", nullptr);
    java_register_method("BaseTouchInput", "getList", (void*) BaseTouchInput_getList);
    java_register_method("BaseTouchInput", "toString", (void*) BaseTouchInput_toString);
}

static void BaseTouchInput_initFields(BaseTouchInput* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void BaseTouchInput_init(BaseTouchInput* this) {
    BaseTouchInput_register();
    BaseTouchInput_initFields(this);
}

BaseTouchInput* BaseTouchInput_new(void) {
    BaseTouchInput* this = java_object_alloc(sizeof(BaseTouchInput), "BaseTouchInput");
    BaseTouchInput_init(this);
    return this;
}


BasicArrayList* BaseTouchInput_getList(BaseTouchInput* this) {
        return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
}


const char* BaseTouchInput_toString(BaseTouchInput* this) {
        return java_class_of(this);
}

