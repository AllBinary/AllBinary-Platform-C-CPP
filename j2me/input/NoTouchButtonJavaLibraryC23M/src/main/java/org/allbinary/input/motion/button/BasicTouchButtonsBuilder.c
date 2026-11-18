// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/BasicTouchButtonsBuilder.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif


static BasicTouchButtonsBuilder* BasicTouchButtonsBuilder_SINGLETON;



void BasicTouchButtonsBuilder_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicTouchButtonsBuilder_SINGLETON = BasicTouchButtonsBuilder_new();
}

void BasicTouchButtonsBuilder_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicTouchButtonsBuilder", "BaseTouchInput");
    java_register_method("BasicTouchButtonsBuilder", "getList", (void*) BasicTouchButtonsBuilder_getList);
}

static void BasicTouchButtonsBuilder_initFields(BasicTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void BasicTouchButtonsBuilder_init(BasicTouchButtonsBuilder* this) {
    BasicTouchButtonsBuilder_register();
    BaseTouchInput_init(&this->base);
    BasicTouchButtonsBuilder_initFields(this);
}

BasicTouchButtonsBuilder* BasicTouchButtonsBuilder_new(void) {
    BasicTouchButtonsBuilder* this = java_object_alloc(sizeof(BasicTouchButtonsBuilder), "BasicTouchButtonsBuilder");
    BasicTouchButtonsBuilder_init(this);
    return this;
}


BaseTouchInput* BasicTouchButtonsBuilder_getInstance(void) {
        return (BasicTouchButtonsBuilder_staticInit(), BasicTouchButtonsBuilder_SINGLETON);
}


BasicArrayList* BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->base.commonStrings->START, this, this->base.commonStrings->GET_LIST);
            BasicArrayList* list = BasicArrayListD_new();
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

