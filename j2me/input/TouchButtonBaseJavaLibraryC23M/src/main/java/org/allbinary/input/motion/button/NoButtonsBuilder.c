// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/NoButtonsBuilder.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif




void NoButtonsBuilder_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoButtonsBuilder_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoButtonsBuilder", "BaseTouchInput");
    java_register_method("NoButtonsBuilder", "getList", (void*) NoButtonsBuilder_getList);
}

static void NoButtonsBuilder_initFields(NoButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void NoButtonsBuilder_init(NoButtonsBuilder* this) {
    NoButtonsBuilder_register();
    BaseTouchInput_init(&this->base);
    NoButtonsBuilder_initFields(this);
}

NoButtonsBuilder* NoButtonsBuilder_new(void) {
    NoButtonsBuilder* this = java_object_alloc(sizeof(NoButtonsBuilder), "NoButtonsBuilder");
    NoButtonsBuilder_init(this);
    return this;
}


BasicArrayList* NoButtonsBuilder_getList(NoButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

